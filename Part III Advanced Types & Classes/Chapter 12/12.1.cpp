

/******************************************
 * 
Design a data structure to handle the data for a mailing list
 * 
 * *************************************/

#include <iostream>

struct mail
{
    char name[30];
    char address1[30];
    char address2[30];
    char city[20];
    char state[20];
    unsigned int zipcode;

}mailList[10];


using namespace std;

int main(){
    
    mailList[0].zipcode = 123456;

    cout << mailList[0].zipcode;

    
    return(0);
}

