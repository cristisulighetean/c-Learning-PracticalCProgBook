/***********************************************
 * 
Write a function that takes a single string as its argument and returns a pointer
to the first nonwhite character in the string
 * 
***********************************************/

#include <iostream>

using namespace std;

char *data(char *stringData){
    while (*stringData != ' ')
    {
        ++stringData;
    }
    return (stringData);
}

int main(){

    char str[100] = "   this is a life";
  
     char *ptr_func;
     *ptr_fun = data(*str);

    return (0);
}
