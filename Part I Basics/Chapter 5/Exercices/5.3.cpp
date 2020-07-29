/*********************************************************
 * 
 * Write a program to print out the perimeter of a
 * rectangle given its height and width.
 * perimeter = 2 · (width + height)
 * 
 * **********************************************************/

#include <iostream>

using namespace std;

int width, height;

int main(){

    cout << "This program prints out the perimeter of a triangle, given its height & width" << "\n";
    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    cout << "The perimeter is" << 2 * (width + height) << "\n";


    return(0);
}