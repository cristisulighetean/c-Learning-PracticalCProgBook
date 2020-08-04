#include <iostream>
#include <string>

using namespace std;

int main(){

    struct bin
    {
        int parts;
        int lots[10];
        string lotCode;
    }bin1;
    
    bin1.lotCode = "345F5F3S";
    bin1.parts = 500;
    bin1.lots[0] = 10;

    cout << bin1.lotCode << " " << bin1.parts << " " << bin1.lots[0] << endl;

    bin bin2;
    bin2.parts = 50;
    cout << bin2.parts;
}