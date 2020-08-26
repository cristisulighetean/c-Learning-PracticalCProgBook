/*********************************************************
* Read -- read in 100 numbers and sum them *
* *
* Usage: *
* read *
* *
* Numbers are in the file "numbers.dat" *
* *
* Warning: No check is made for a file with fewer than *
* 100 numbers in it *
********************************************************/
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int DATA_SIZE = 10; // Number of items in the data

    int data_array[DATA_SIZE]; // The data

    ifstream data_file("numbers.dat"); // The input file

    int i; // Loop counter
    if (data_file.bad()) {
        cerr << "Error: Could not open numbers.dat\n";
        exit (8);
    }
    for (i = 0; i < DATA_SIZE; ++i)
        data_file >> data_array[i];
    int total = 0; // Total of the numbers

    for (i = 0; i < DATA_SIZE; ++i)
        cout << data_array[i];
        total += data_array[i];

    cout << "Total of all the numbers is " << total << '\n';

    return (0);
}