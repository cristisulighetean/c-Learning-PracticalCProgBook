/*********************************************************
 * 
 *Write a program that converts Celsius to
 *Fahrenheit. The formula is
 *F = 9/5C + 32. 
 * 
 * **********************************************************/

#include <iostream>

using namespace std;

int celsiusTemp;

int main(){

    cout << "This program converts the temperature from Celsius to Fahrenheit\n";
    cout << "Exit program by entering -666\n";
    while (true)
    {
        /* code */
        cout << "Please enter the temperature in Celsius:" ;
        cin >> celsiusTemp;
        if (celsiusTemp == -666){
            break;
        }
        else
        {
            /* code */
            int fahTemp = (9/5) * celsiusTemp + 32;
            cout << "The tempereture in Fahrenheit is " << fahTemp << "\n";
        }
        
    }
    return(0);
}