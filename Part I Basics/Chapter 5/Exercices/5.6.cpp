/*********************************************************
 * 
 * Write a program that takes an integer as the
 * number of minutes and outputs the total hours and minutes
 * (e.g., 90 minutes = 1 hour 30 minutes)
 * 
 * **********************************************************/

#include <iostream>

using namespace std;

int hours, minutes;

int main(){


    cout << "Enter minutes: ";
    cin >> minutes;

    int h_from_min = minutes / 60;
    int min_remaining = minutes % 60;

    
    cout << h_from_min << " h " << min_remaining << " m\n";





    return(0);
}