/******************************************
 * 
Write a function begins(string1, string2)
that returns true if string1 begins with string2. Write a program
to test the function.
 * 
 * *************************************/

#include <iostream>

using namespace std;

bool begins(string string1, string string2){
    
    //get the length of string2
    int size2 = string2.length();

    bool result = true;

    for (int i = 0; i < size2; i++)
    {
        if (string1[i] != string2[i])
            result = false;
            break;
    }
    return (result);
    
}


int main(){
    
    string str1, str2;
    //get the firtst string
    cout << "Enter string 1: ";
    getline(cin, str1);

    //get the secound string
    cout << "Enter string 2: ";
    getline(cin, str2);


    //call the function
    if (begins(str1, str2)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return(0);
}

