/************************************************
Write a program to copy a file, expanding all tabs to multiple spaces.
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
        output << line <<"\n";
    }   
    
    //close both files
    input.close();
    output.close();
}

int main(){

    string input = "example.txt";
    string output = "duplicate.txt";

    copyFile(input, output);

    return(0);
}