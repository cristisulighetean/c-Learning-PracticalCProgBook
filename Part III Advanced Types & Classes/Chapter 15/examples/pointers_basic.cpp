#include <iostream>

using namespace std;

int main(){

    int thing_var;

    int *thing_ptr; //this is a declaration of a pointer

    thing_var = 2;

    cout << "Thing: " << thing_var << endl;

    thing_ptr = &thing_var;  //make the pointer point to a thing

    *thing_ptr = 3; // thing_ptr points to thing_var so
                    // thing_var changes to 3
    
    cout << "Thing: " << thing_var << endl;

    cout << "Thing: " << *thing_ptr << endl;


    return (0);
}
