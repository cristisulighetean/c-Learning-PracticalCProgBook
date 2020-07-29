/*********************************************************
 * 
 * Write a program that takes a series of numbers
 * and counts the number of positive and negative values
 * 
 **********************************************************/

#include <iostream>
#include <string>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){

    //variable declarations
    int numb, counter_positive = 0, counter_negative = 0;
    int total_counter = 0;

    //input number
    cout << "Enter a number or zero to stop: ";
    cin >> numb;

    while (numb != 0)
    {

        if (numb > 0){
            ++counter_positive;
        }
        else if (numb < 0)
        {
            ++counter_negative;
        }
        //increment total counter
        ++total_counter;
        
        //read another number
        cout << "Enter a number or q to stop: ";
        cin >> numb;
    }
    
    //output total numbers
    cout << "Total numbers: " << total_counter << endl;
    //output positive numbers
    cout << "Negative numbers: " << counter_positive << endl;
    //output negative numbers
    cout << "Positive numbers: " << counter_negative << endl;

    return(0);
}