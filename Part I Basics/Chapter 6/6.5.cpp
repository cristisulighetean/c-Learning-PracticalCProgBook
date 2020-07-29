/*********************************************************
 * 
 * Write a program that, given the number of hours
 * an employee worked and her hourly wage, computes her weekly
 * pay. Count any hours over 40 as overtime at time-and-a-half
 * 
 **********************************************************/

#include <iostream>

using namespace std;

float wage, hours;

int main(){

    float total = 0;
    int overHour;

    //Enter the wage & hours worked;
    cout << "Enter the worked hours:";
    cin >> hours;

    cout << "Enter the wage / hour:";
    cin >> wage;

    //check if wage hours are over 40
    if (hours > 40)
        overHour = hours - 40;
        total = total + (overHour * (wage * 1.5));

    //calculate total
    total = total + (40 * wage);

    cout << "The total wage is " << total << endl;
    

    return(0);
}