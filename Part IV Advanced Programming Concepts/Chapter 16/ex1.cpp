/************************************************
 * Write a program that reads a file and counts the number of lines in it.
 **************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main() { 
    int number_of_lines = 0;
    string line;
    ifstream myfile("example.txt");

    if(myfile.bad()){
        cerr << "Unable to open the file" << endl;
        exit(8);
    }
    else{
        while (getline(myfile, line))
            ++number_of_lines;
        cout << "Number of lines in text file: " << number_of_lines;
    }
    return 0;
}

