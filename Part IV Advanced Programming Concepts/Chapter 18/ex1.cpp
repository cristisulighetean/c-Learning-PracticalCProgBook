/************************************************
Write a class to handle fractions such as "1/3." Define addition, subtraction,
multiplication, and division operators for these fractions.
For example: 1/3 + 1/2 = 5/6.
 **************************************/
#include <iostream>
using namespace std;

class fraction
{
private:
    int num, denom;
public:
    fraction(int numerator, int denominator);
    ~fraction();
    fraction operator +(const fraction &oper1, const fraction &oper2){

    }
};

fraction::fraction(int numerator, int denominator)
{
    num = numerator;
    denom = denominator;
}

fraction::~fraction()
{
}



int main(){




    return(0);
}