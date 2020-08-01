#include <iostream>
#include <cstring>

using namespace std;

int length(char string[]);

int main (){

    char string[] = "This is it";

    cout << length(string);

    return (0);
}

/****************************************************
* length -- compute the length of a string
**
Parameters
* string -- the string whose length we want
**
Returns
* the length of the string
****************************************************/
int length(char string[])
{
    int i; // index into the string

    /*
    * Loop until we reach the end of string characte
    */
    for (int i = 0; string[i] != '\0'; ++i)
        /* do nothing */ ;
    return (i);
}