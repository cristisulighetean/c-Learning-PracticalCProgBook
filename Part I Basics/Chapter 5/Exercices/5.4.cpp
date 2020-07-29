/*********************************************************
 * 
 * Write a program that converts kilometers per
 * hour to miles per hour.
 * miles = (kilometers · 0.6213712)
 * 
 * **********************************************************/

#include <iostream>

using namespace std;

int km;

int main(){

    cout << "Enter km to convert it to miles: ";
    cin >> km;
    cout << "Miles: " << km * 0.6213712 << "\n";


    return(0);
}