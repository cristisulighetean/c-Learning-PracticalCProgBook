/*********************************************************
 * 
 *  Write a program to tell whether a number is prime.
 * 
 **********************************************************/

#include <iostream>

using namespace std;

int main(){

    
    //Enter the number
    cout << "Enter the number: " << endl;
    int number;
    cin >> number;
    if (number % 2 != 0 && number != 0 && number != 1)
        cout << "The number is prime!" <<endl;
    else
    {
        cout << "The number is not prime" <<endl;
    }
    

    return(0);
}