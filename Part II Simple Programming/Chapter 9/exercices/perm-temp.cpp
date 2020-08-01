#include <iostream>

using namespace std;

int main(){

    int counter;

    for (counter = 0; counter < 3; counter++)
    {
        int temp = 1;
        static int permanent = 1;

        cout << "Temporary= " << temp << 
        " Permanent= " << permanent << endl;
        ++temp;
        ++permanent;
    }
    
    return (0);
}