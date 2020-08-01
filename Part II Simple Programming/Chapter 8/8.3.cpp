/******************************************
 * 
 * 
 * Write a program to average n numbers.
 * 
 * 
 * *************************************/

#include <iostream>

using namespace std;

int main(){
    
    float total = 0;
    int no = 0; //total number of numbers
    float value;
    float avg;

    cout << "Enter a number: ";
    cin >> value;
    while(value){
        
        total += value;
        ++no;

        cout << "Enter a number: ";
        cin >> value;
    }
    
    //calculate average
    if (total > 0){
        avg = total / no;
        cout << "The average is " << avg << endl;
    }
    else
        cout << "The average is zero" <<endl;
    


    return(0);
}