/******************************************
 * 
Write a function that scans a string for the
character "-" and replaces it with "_".
 * 
 * *************************************/

#include <iostream>
#include <cstring>


using namespace std;


void replaceMe(char initString[], char replChar, char charToBeRepl ){
    int len = strlen(initString);
    for (int  i = 0; i < len ; i++)
    {
        if (initString[i] == charToBeRepl){
            initString[i] = replChar;
        }
    }
}

int main(){
    
    char  enterMe[100];
    
    cout << "Enter the initial string: "; 
    cin >> enterMe;
    
    char charaterToReplace = '-';
    char characterToBeReplaced = '_';
    
    replaceMe(enterMe, charaterToReplace, characterToBeReplaced);
    
    cout << enterMe << endl;

    
    return(0);
}