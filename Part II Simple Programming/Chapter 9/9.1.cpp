/******************************************
 * 
Write a procedure that counts the number of
words in a string. (Your documentation should describe exactly
how you define a word.) Write a program to test your new
procedure.
 * 
 * *************************************/

#include <iostream>
#include <string.h>
#include <istream>


using namespace std;

int length(string inputStr){

    //convert string to char
    char charStr[inputStr.length()];

    for (int i = 0; i < sizeof(charStr); i++) { 
        charStr[i] = inputStr[i]; 
        cout << charStr[i]; 
    } 

    //split the string & add it to an array 
    char *token = strtok(charStr, " ,-");
    //output the size of the array
    int len = 0;
    while (token != NULL) 
    { 
        ++len;
        token = strtok(NULL, " ,-"); //give next token
    }

    return len; 
    }


int main(){
    
    string str;
    //get the string 
    cout << "Enter the sentence:";
    getline(cin, str);


    //output the size of the array
    int lengthStr = length(str);
    cout << "The length of the string is " << lengthStr << endl;
    
    return(0);
}


