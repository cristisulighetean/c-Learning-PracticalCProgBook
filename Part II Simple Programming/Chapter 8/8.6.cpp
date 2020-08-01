/******************************************
 * 
 * Write a program that converts numbers to
    words. Example: 895 results in "eight nine five."
 * 
 * 
 * 
 * *************************************/

#include <iostream>

using namespace std;

const string numbers[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(){
    
    //enter the number
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    int lastNo, index = 0;

    //array containing the individual no of the entered number
    int numberVector[100]; 
    
    //spit the number into parts
    while(number){
        
        lastNo = number % 10;
        numberVector[index] = lastNo;
        ++index;
        
        number = number / 10;
    }

    //go through the vector
    for (int i = index-1; i >= 0 ; i--){
        //cout << i << endl;
        //cout << numberVector[i] << endl;
        cout << numbers[numberVector[i]] << " ";
    }
    cout << endl;
    
    
    return(0);
}