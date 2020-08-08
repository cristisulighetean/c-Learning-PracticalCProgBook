
/* *****************************************************
* tmp_name -- return a temporary filename *
* *
* Each time this function is called, a new name will *
* be returned *
* *
* Warning: There should be a warning here, but if we *
* put it in we would answer the question. *
* *
* Returns *
* pointer to the new filename *
*******************************************************/

#include <iostream>
#include <string.h>

using namespace std;

char *tmp_name(void){
    static char name[30]; // The name we are generating
    static int sequence = 0; // Sequence number for last digit
   
    ++sequence; // Move to the next file name
    strcpy(name, "tmp");
    
    // Put in the sequence digit
    name[3] = sequence + '0';
    
    // End the string
    name[4] = '\0';
    
    return(name);
}
int main(){
    char name1[100];
    char name2[100];

    strcpy(name1, tmp_name());
    strcpy(name2, tmp_name());
    
    cout << "Namel: "<< name1 << '\n';
    cout << "Name2: "<< name2 << '\n';
    return(0);
}