#include <iostream>
#define SQR(x) ((x) * (x))

using namespace std;

int main( )
{
    int counter; // counter for loop
    for (counter = 0; counter < 5; ++counter) {
        cout << "x " << (counter+1) << " x squared " << SQR(counter+1) << endl;
    }
    return (0);
}