/******************************************
 * 
Write a function count(number, array,
length) that will count the number of times number appears in
array. The array has length elements. The function should be
recursive. Write a test program to go with the function.
 * 
 * *************************************/

#include <iostream>

using namespace std;

int count(int number, int array[], int length){
    
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if(array[i] == number)
            ++counter;
    }
    return counter;
}


int main(){
    
    int number;
    
    //get number
    cout << "Enter the number: ";
    cin >> number;

    int limit;
    cout << "Enter the array length: ";
    cin >> limit;

    //get array of ints
    int arrayNo[limit];
    int index = 0;
    while (index < limit)
    {
        cout << "Get element " << index + 1 << ": ";
        cin >> arrayNo[index];
        ++index;
    }

    //call function
    cout<< "The number of times " << number << "is in the array: " << count(number, arrayNo, limit) << endl;
    
    return(0);
}