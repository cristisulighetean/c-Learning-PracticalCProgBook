#include <iostream>

using namespace std;

int celsius;

int main(){

    for (celsius = 0; celsius <= 100; ++celsius){
        cout << celsius << " " << celsius * (9/5) + 32  << endl;
    }

    return (0);
}