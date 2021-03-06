/***********************************************
 * 
Write a parity class. This class allows the program to put any number of items
into it and returns TRUE if an even number of items is put in and FALSE if an odd number is
used.
Member functions:
void parity::put(void); // Count another element
int parity::test(void); // Return TRUE(1) if an even number of
puts have been done. Return FALSE(O)
for an odd number. 
 * 
***********************************************/

#include <iostream>

using namespace std;

class parity
{
private:
    int count;
public:
    void put (void){ ++ count;}
    bool test (void){
        if (count % 2 == 0) return(true);
    else return(false);
    }
    parity(){count = 0;};
    ~parity(){};
};


int main(){

    parity parTest;

    for (int i = 0; i < 5; i++)
    {
        parTest.put();
        cout << parTest.test() << endl;

    }
    

    return (0);
}
  