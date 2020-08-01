/******************************************
 * 
 * The total resistance of n resistors in parallel is:
    1/R = 1/R1 + 1/R2 + 1/R3 + ... + 1/Rn
    Suppose we have a network of two resistors with the values
    400 and 200 . Our equation would be:
    1/R = 1/R1 + 1/R2
    Substituting in the value of the resistors we get:
    1/R = 1/400 + 1/200
    1/R = 3/400
    R = 400/3
    So the total resistance of our two-resistor network is 133.3 .
    Write a program to compute the total resistance for any
    number of parallel resistors.
 * 
 * *************************************/

#include <iostream>

using namespace std;

int main(){
    
    //introduce the number of resistors
    int noOfResistors;
    cout << "Enter the number of resistors: ";
    cin >> noOfResistors;

    float totalResistance = 0;  
    float value = 0;
    //introduce the values of the resistors
    for (int i = 0; i < noOfResistors; i++)
    {
        cout << "Enter resistor value " << i+1 << " : ";
        cin >> value;
        totalResistance += (1/value);

    }

    //calculate final value
    cout << "Total resistance:" << 1 / totalResistance;


    return(0);
}