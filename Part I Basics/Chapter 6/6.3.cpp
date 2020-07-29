/*********************************************************
 * 
 * Given an amount less than $1.00, compute the
 * number of quarters, dimes, nickels, and pennies needed.
 * 
 **********************************************************/

#include <iostream>

using namespace std;

float penny_val = 0.01, nickel_val = 0.05;
float dime_val = 0.1, quarter_val = 0.25;
float value = 0;

int pennys = 0, dimes =0, nickels = 0, quarters = 0;

int main(){
    
    cout << "Enter the amount to be calculated: ";
    cin >> value;

    while (value > 0){
        if (value >= quarter_val){

            value -= quarter_val;
            ++quarters;

        }
        else if (value >= dime_val && value < quarter_val)
        {
            value -= dime_val;
            ++dimes;

        }
        else if (value >= nickel_val && value < quarter_val && value < dime_val)
        {
            value -= nickel_val;
            ++nickels;

        }
        else if (value >= penny_val && value < quarter_val && value < dime_val && value < dime_val)
        {
            value -= penny_val;
            ++pennys;

        }
        else if (value < penny_val )
        {
            break;
            
        }
    }

    //output the result
    cout << "Pennies: " << pennys << " Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << " Quarters: " << quarters << endl;



    return(0);
}