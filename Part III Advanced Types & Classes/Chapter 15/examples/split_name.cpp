/* ******************************************************
* Split -- split an entry of the form Last/First *
* into two parts *
*******************************************************/
// first_ptr - is a pointer (address to a thing)
// *first_ptr - is a pointer to a thing (not an address)

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

    char line[80];          //the input line
    char *first_ptr;        //pointer we set to point to the first name
    char *last_ptr;         //pointer we set to point to the last name

    cout << "Enter string\n";
    cin.getline(line, sizeof(line));

    last_ptr = line;        //last name is at the beginning of line


    first_ptr = strchr(line, '/');  //find slash

    //check for an error and exit program
    if (first_ptr == NULL){
        cerr << "Error: Unable to find slash in " << line << endl;
        exit(8);
    }

    *first_ptr = '\0';              //zero out the slash

    ++first_ptr;                    //move to first chr of name (by adding one to the address of the pointer)

    cout << "First: " << first_ptr << " Last: " << last_ptr << endl;

    return (0);
}

char *strchr(char *string_ptr, char find){
    while (*string_ptr != find)         //search while the pointer is not find(the char)
    {
        //check for end
        if(*string_ptr == '\0'){        //check wether the pointer is the end char or not
            return(NULL);               //not found
        }
        ++string_ptr;                   //increase the address of the pointer with one    
    }
    return (string_ptr);                //found
}