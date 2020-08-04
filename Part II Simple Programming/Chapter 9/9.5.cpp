/******************************************
 * 
Write a function that returns the maximum value
of an array of numbers.
 * 
 * *************************************/

#include <iostream>

using namespace std;

int getMax(int arr[], int length){

    int max = arr[0];

    //go through the array & find the max
    for (int i = 0; i < arr; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}


int main(){
    
    //get array
    int limit;
    cout << "How many no to be entered: ";
    cin >> limit;

    int arr[limit], index = 0;
    while (index < limit)
    {
        cout << "Enter element " << index+1 <<" : ";
        cin >> arr[index];
        cout << arr[index];
        ++index;
    }
    cout << endl;
    
    //function call
    int max = getMax(arr, limit);
    cout << "The max is: " << max << endl;
    
    return(0);
}