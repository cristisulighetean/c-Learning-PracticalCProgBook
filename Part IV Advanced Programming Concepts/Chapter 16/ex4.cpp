/************************************************
Write a program that reads an ASCII file containing a list of numbers and
writes a binary file containing the same list. Write a program that goes the other way so you
can check your work.
 **************************************/

#include <iostream>
#include <fstream>

using namespace std;

void doJob(string inputFile, string outputFile){
    ifstream input(inputFile);
    ofstream output(outputFile, ios::binary);

    //read until eof
    while (!input.eof())
    {
        string line;
        //get no
        getline(input,line);
        //copy to output file
        output << line;
    }   
    
    //close both files
    input.close();
    output.close();

}

int main(){

    string input = "numbers.txt";
    string output1 = "numbersBinary.txt";


    doJob(input, output1);

    return(0);
}