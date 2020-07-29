/*********************************************************
 * 
 * A leap year is any year divisible by 4 unless it is
 * divisible by 100, but not 400. Write a program to tell whether a
 * year is a leap year.
 * 
 **********************************************************/

#include <iostream>

using namespace std;

int main(){

    int year;

    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
        cout << "It is a leap year" << endl;
    else
    {
        cout << "It is not a leap year" << endl;
    }
    

    return(0);
}