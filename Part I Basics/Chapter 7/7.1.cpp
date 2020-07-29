/*********************************************************
 * 
 * Write a program to convert English units to
 * metric (e.g., miles to kilometers, gallons to liters, etc.). Include
 * a specification and a code design.
 * 
 **********************************************************/

#include <iostream>
#include <string>

using namespace std;


const char *OPTIONS = "1)Miles to km\n"
                        "2)Km to Miles\n"
                        "3)Gallons to liters\n" 
                        "4)Liters to Gallons\n"
                        "Enter your option(or zero to exit):  ";

int main(){

    //display the options 
    cout << OPTIONS;
    //enter option
    int option;
    cin >> option;
    //loop
    while (option != 0)
    {
        if (option == 1){
            int miles;
            cout << "Enter the miles: ";
            cin >> miles;
            cout <<"Result: " << miles * 1.6093 << " km" << endl;        
        }
        
        else if (option == 2)
        {
            int km;
            cout << "Enter the km: ";
            cin >> km;
            cout <<"Result: " << km / 1.6093 << " miles" << endl; 
        }
        
        else if (option == 3)
        {
            int gallons;
            cout << "Enter the gallons: ";
            cin >> gallons;
            cout <<"Result: " << gallons * 4.54609 << " liters" << endl; 
        }
        
        else if (option == 4)
        {
            int liters;
            cout << "Enter the liters: ";
            cin >> liters;
            cout <<"Result: " << liters / 4.54609 << " gallons" << endl; 
        }
        
        cout << "\n";
        
        //enter another option
        cout << OPTIONS;
        cin >> option;
        
    }
    


    return(0);
}