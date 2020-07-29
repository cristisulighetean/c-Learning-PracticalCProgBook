/*********************************************************
 * 
 * Write a program to add an 8% sales tax to a
 * given amount and round the result to the nearest penny
 * 
 **********************************************************/

#include <iostream>
#include <cmath>


using namespace std;

float price;

int main(){

    //enter price
    cout << "Enter the price of the item: ";
    cin >> price;

    //calculate sale tax
    float total = price + (price * (8/100));
    total = round(total);
    cout << "The total is: " << total << endl;


    return(0);
}