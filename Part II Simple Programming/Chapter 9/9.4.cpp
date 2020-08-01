/******************************************
 * 
Write a function that will take a character string
and return a primitive hash code by adding up the value of each
character in the string.
 * 
 * *************************************/

#include <iostream>
#include <string>


using namespace std;



int getHashTotal(string str){
    int total = 0;

    //go through the string and add all the hash codes
    for (int i = 0; i < str.length(); i++)
    {
        char t = str[i];
        total += int(t);
    }
    

    return total;
}

int main(){
    
    string str;
    cout << "Enter the string to get the hash code: ";
    getline(cin, str);

    //function call
    cout << "The primitive hash code of: " << str << " is " << getHashTotal(str) << endl;
    
    return(0);
}