/***********************************************
 * 
Write a program that uses pointers to set each element of an array to zero.
 * 
***********************************************/

#include <iostream>

using namespace std;

const int MAX = 100;

void init_array(int *data_ptr)
{
    int index;
    for (index = 0; index < MAX; ++index)
        *(data_ptr + index) = 0;
}

int main(){

    int arr[MAX];
    init_array(arr);

    for (int  i = 0; i < MAX; i++)
    {
        cout << *(arr+i) << endl;
        cout << (arr+i) << endl;

    }
    
  
    return (0);
}
  