/******************************************
 * 
 * Write a program that reads a character and
prints out whether it is a vowel or a consonant.
 * 
 * 
 * 
 * *************************************/

#include <iostream>
#include <cstring>

using namespace std;

const char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I','O','U'};

int main(){

    //enter char
    char character;
    cout << "Enter character(enter zero to stop): ";
    cin >> character;

    while(character != '0'){
        bool found = false;
        for (int i = 0; i < sizeof(vowels) ; i++)
        {
            if (character == vowels[i]){
                found = true;                
            }
        }
        if (found == true){
            cout << "It's a vowel" <<endl;
        }
        else{
            cout << "It's a consonant" <<endl;
            
        }
        cout << "Enter character(enter zero to stop): ";
        cin >> character;
    }
    

    
    return(0);
}