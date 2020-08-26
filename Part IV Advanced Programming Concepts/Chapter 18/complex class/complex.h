#include "complex.h"
/********************************************************
* c = c / c -- complex division 
* 
* Parameters 
* operl, oper2 -- two operands of the divide 
* 
* Returns
* result of the divide 
********************************************************/
complex operator / (const complex& operl, const complex& oper2)
    {
    // Denominator of the result
    double den = fabs(oper2.real()) + fabs(oper2.imaginary());
    // Real part of the operl factor
    double operl_real_den = operl.real() / den;
    // Imaginary part of the operl factor
    double operl_imag_den = operl.imaginary() / den;
    // Real part of the oper2 factor
    double oper2_real_den = oper2.real() / den;
    // Imaginary part of the oper2 factor
    double oper2_imag_den = oper2.imaginary() / den;
    // Normalization factor
    double normalization = oper2_real_den * oper2_real_den +
    oper2_imag_den * oper2_imag_den;
    return complex((operl_real_den * oper2_real_den +
    operl_imag_den * oper2_imag_den) / normalization,
    (operl_imag_den * oper2_real_den -
    operl_real_den * oper2_imag_den) / normalization);
    }

/********************************************************
* c /= c -- complex divide by *
* *
* Parameters *
* oper2 -- operator to divide by *
* *
* Returns *
* reference to the result of the divide *
* *
********************************************************/

complex& complex::operator /= (const complex& oper2)
    {
    // Denominator of the result
    double den = fabs(oper2.real()) + fabs(oper2.imaginary());
    // Denominator -- operator 1 real part
    double oper1_real_den = real_part / den;
    // Denominator -- operator 1 imaginary part
    double operl_imag_den = imaginary_part / den;
    // Denominator -- operator 2 real part
    double oper2_real_den = oper2.real() / den;
    // Denominator -- operator 2 imaginary part
    double oper2_imag_den = oper2.imaginary() / den;
    // Normalization factor
    double normalization = oper2_real_den * oper2_real_den +
    oper2_imag_den * oper2_imag_den;
    real_part = (operl_real_den * oper2_real_den +
    operl_imag_den * oper2_imag_den) / normalization;
    imaginary_part = (operl_imag_den * oper2_real_den -
    operl_real_den * oper2_imag_den) / normalization;
    return (*this);
    }

/********************************************************
* istream >> complex -- read a complex number *
* *
* Parameters *
* in_file -- file to read *
* number -- place to put the number *
* *
* Returns *
* reference to the input file *
************************ *** *** ***********************/

istream &operator >> (istream &in_file, complex &number)
    {
    double real, imaginary; // Real and imaginary part
    char ch; // Random character used to verify input
    
    number.set(0.0, 0.0); // Initialize the number (just in case)
    
    in_file.ipfx(1); // Tell the I/O system we are reading formatted
    
    in_file >> ws; // Skip white space
    
    if (in_file.bad()) return (in_file);
        in_file >> ch; // Get character after white space
    
    if (ch != '(') {
        in_file.setf(ios::failbit); // We have an error
        return (in_file);
    }
    
    in_file >> real;
    
    if (in_file.bad()) return (in_file);
    
    in_file >> ws >> ch; // Get first character after number
    
    if (in_file.bad()) return (in_file);
    
    if (ch != ',') {
        in_file.setf(ios: :failbit);
        return (in_file);
    }

    in_file >> imaginary;
    in_file >> ws >> ch;
    
    if (in_file.bad()) return (in_file);
    
    if (ch != ')') {
        in_file.setf(ios::failbit);
        return (in_file);
    }
    
    number.set(real, imaginary);
    return (in_file);
    }