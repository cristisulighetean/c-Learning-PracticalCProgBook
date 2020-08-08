/********************************************************
* tmp_name -- return a temporary filename *
* *
* Each time this function is called, a new name will *
* be returned *
* *
* Returns *
* pointer to the new filename *
********************************************************/
#include <iostream>
#include <string.h>

using namespace std;

char *tmp_name(void){
    static char name[30]; // The name we are generating (must be static bc we return a pointer)
    static int sequence = 0; // Sequence number for last digit
    
    ++sequence; // Move to the next filename
    
    strcpy(name, "tmp");

    // Put in the sequence digit
    name[3] = sequence + '0';
    // End the string
    name[4] = '\0';

    return(name);
}

int main(){
    cout << "Name: " << tmp_name() << '\n';
    return(0);
}