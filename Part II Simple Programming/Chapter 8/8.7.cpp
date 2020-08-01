/******************************************
 * 
 * The number 85 is said "eighty-five," not "eight
five." Modify the previous program to handle the numbers 0-
100 so all numbers come out as we really say them. For
example, 13 is "thirteen," and 100 is "one hundred."
 * 
 * *************************************/

#include <iostream>
#include <assert.h>

using namespace std;

//no from 0 to 19
const string special[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                    "eighteen", "nineteen", "twenty"};

const string beggining[] = { "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main(){
    
    //enter the number
    int number;
    cout << "Enter the number: ";
    cin >> number;
    
    //make assertions
    assert(number <= 100);
    assert(number >= 0);
    
    if (number >=0 && number <= 20){
        cout << special[number] << endl;
    }
    else if (number == 100)
    {
        cout << "One hundread";
    }
    
    else {
        //get first number
        int first = number / 10;
        //print the translation of it
        cout << beggining[first - 2] << " ";
        
        //check last number & print the translation of it
        int last = number % 10;
        cout << special[last] << endl;
    }
    
    return(0);
}
