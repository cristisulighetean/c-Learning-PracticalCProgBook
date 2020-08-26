/************************************************
Design a file format to store a person's name, address, and other information.
Write a program to read this file and produce a set of mailing labels.
 **************************************/

#include <iostream>
#include <fstream>

using namespace std;

void storeMailing(string inputFile){
    ifstream input(inputFile);

    if (input.bad()){
        cerr << "Error: Could not open numbers.dat\n";
        exit (8);
    }

    string line;

    //read no of instances
    int no_of_instances;
    
    getline(input,line);
    no_of_instances = stoi(line); 


    for (int i = 0; i < no_of_instances; i++)
    {
        //get entries
        string name, surname, gender, age;
        getline(input, name);
        getline(input,surname);
        getline(input, gender);
        getline(input, age);
        //Print the entry
        cout << "Name: " << name << " Surname: " << surname << " Gender: " << gender << " Age: " << age << endl; 
    }
    
    //close files
    input.close();

}

int main(){

    string input = "mailingFormat.txt";

    storeMailing(input);

    return(0);
}