/************************************************
Write a program that reads a file containing a list of numbers and writes two
files, one with all the numbers divisible by 3 and another containing all the other numbers.
**************************************/

#include <iostream>
#include <fstream>

using namespace std;

void doJob(string inputFile, string outputDiv, string outputOther){
    ifstream input(inputFile);
    ofstream output1(outputDiv);
    ofstream output2(outputOther);


    //read until eof
    while (!input.eof())
    {
        string line;
        //get no
        getline(input,line);
        int no = stoi(line);
        //copy to output file
        if (no % 3 == 0)
            output1 << no <<"\n";
        else
            output2 << no << "\n";
    }   
    
    //close both files
    input.close();
    output1.close();
    output2.close();
}

int main(){

    string input = "numbers.txt";
    string output1 = "divisible3.txt";
    string output2 = "otherNo.txt";

    doJob(input, output1, output2);

    return(0);
}