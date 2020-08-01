#include <iostream>


int data[5]; // the data to count 3 and 7 in
int the_index; // index into the data

using namespace std;

int main( ) {
    int seven_count = 0;
    int three_count = 0;
    cout << "Enter 5 numbers\n";

    cin >> data[0] >> data[1] >> data[2] >> data[3] >> data[4];
    
    //cout << data[3] << endl;
    
    for (the_index = 0; the_index <= 4; the_index++){
        
        cout << data[the_index] << endl;
        
        if (data[the_index] == 3)
            ++three_count;
        if (data[the_index] == 7)
            ++seven_count;
    }
    
    cout << "Threes " << three_count << " Sevens " << seven_count << '\n';
 
    return (0);
}