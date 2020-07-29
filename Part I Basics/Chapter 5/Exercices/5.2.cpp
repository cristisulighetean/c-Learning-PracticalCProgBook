/*********************************************************
 * 
 * Write a program to calculate the volume of a sphere,
 * Formula volume = V = 4/3*pi*r^3
 * Formula surface = S = 4*pi*r^2
 * 
 * **********************************************************/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

float radius;


int main(){

    cout << "pi is " << M_PI << "\n";

    cout << "Enter the radius : ";
    cin >> radius ;

    cout << "The volume is: " << (4/3)* M_PI * pow(radius, 3) << "\n";
    cout << "The surface is " << (4 * M_PI) * pow(radius, 2) << "\n";

    return(0);
}