#include <iostream>
#include <iomanip>

using namespace std;

const int ARRAY_SIZE = 10; // Number of characters in array

// Array to print
char arrayV[ARRAY_SIZE] = "012345678";

int main()
{
    int index; /* Index into the array */
    for (index = 0; index < ARRAY_SIZE; ++index){
        cout << hex; // Trick to print hex numbers
        cout << "&array[index]=0x" << int(&arrayV[index]) << " (array+index)=0x" << int(arrayV+index) << " array[index]=0x" << int(arrayV[index]) << '\n',
        cout << dec;
        }
    return (0);
}   