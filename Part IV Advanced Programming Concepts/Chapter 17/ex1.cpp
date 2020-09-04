/************************************************
 * Take one of your previous programs and run it using the interactive debugger to
examine several intermediate values.
 **************************************/
/************************************************
Write a program that copies a file and removes all characters with the high bit
set (((ch & 0x80) != 0).)
 **************************************/

#include <iostream>
#include <fstream>

using namespace std;

void copyFile(string inputFile, string outputFile){
    ifstream input(inputFile);
    ofstream output(outputFile);

    //read until eof
    while (!input.eof())
    {
        //get line
        string line;
        getline(input,line);
        //copy to output file
        int ch = stoi(line);
        if((ch & 0x80) == 0)
            output << line <<"\n";
    }   
    
    //close both files
    input.close();
    output.close();
}

int main(){

    string input = "numbers.txt";
    string output = "numbers removed.txt";

    copyFile(input, output);

    return(0);
}