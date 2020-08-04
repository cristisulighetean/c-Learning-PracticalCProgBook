
/******************************************
 * 
Write a macro that returns true if its parameter
is divisible by 10 and false otherwise.
 * 
 * *************************************/

#include <iostream>

using namespace std;

#define DIV(x) ( if(x%10==0)return(true))

int main(){
    
    int x = 122;

    cout << DIV(x);

    
    return(0);
}

