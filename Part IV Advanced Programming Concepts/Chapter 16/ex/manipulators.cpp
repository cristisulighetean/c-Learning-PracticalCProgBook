#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int number = 12; // A number to output
    float real = 12.34; // A real number
    
    cout << "123456789012345678901234567890\n"; // Output ruler
    cout << number << "<-\n";
    cout << setw(5) << number << "<-\n";
    cout << setw(5) << setfill('*') << number << "<-\n";
    cout << setiosflags(ios::showpos|ios::left) << setw(5) <<
    
    number << "<-\n";
    cout << real << "<-\n";
    
    cout << setprecision(1) << setiosflags(ios::fixed) << real << "<-\n";
    cout << setiosflags(ios::scientific) << real << "<-\n";
    
    return (0);
}