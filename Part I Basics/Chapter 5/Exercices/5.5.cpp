/*********************************************************
 * 
 * Write a program that takes hours and minutes
 * as input and outputs the total number of minutes (e.g., 1 hour
 * 30 minutes = 90 minutes)
 *
 * **********************************************************/

#include <iostream>

using namespace std;

int hours, minutes;

int main(){

    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Total minutes: " << minutes + 60 * hours << "\n";


    return(0);
}