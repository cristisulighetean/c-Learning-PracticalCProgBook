#include <iostream>
#include <string>

using namespace std;

int main(){

    string fullName = "Dana";
    cout << fullName.length() << "\n"; // get the length of the string
    cout << fullName.at(2) << "\n"; //get the ch ar location 2 which is n
    cout << fullName.substr(2,3) << "\n"; //get substring of n including the specified pos
    
    return(0);
}