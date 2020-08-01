/******************************************
 * 
 * Print a checkerboard (8-by-8 grid). Each square
should be 5-by-3 characters wide. A 2-by-2 example follows:
    +-----+-----+
    |     |     |
    |     |     |
    |     |     |
    |     |     |
    +-----+-----+
    |     |     |
    |     |     |
    |     |     |
    |     |     |
    +-----+-----+
 * 
 * *************************************/

#include <iostream>
#include <string>

using namespace std;


int main(){

    const string topLevel = "+-----+-----+";
    const string lines = "|     |     |";

    for (int j = 0; j < 2; j++){
    
        cout << topLevel << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << lines << endl;
        }
    }
    cout << topLevel << endl;



    
    return(0);
}