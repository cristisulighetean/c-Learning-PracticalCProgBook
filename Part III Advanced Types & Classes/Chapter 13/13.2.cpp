/***********************************************
 * 
Write a "checkbook" class. You put a list of numbers into this class and get a
total out.
Member functions:
void check::add_item(int amount); // Add a new entry to the checkbook
int check::total(void); // Return the total of all items
 * 
***********************************************/

#include <iostream>

using namespace std;

class checkbook
{
private:
    int totalVal;
public:
    checkbook(void){totalVal = 0;};
    ~checkbook(){};

    void add(void){
        int value;
        cout << "Value: ";
        cin >> value;
        totalVal += value;
    };
    void total(void){
        cout << "Total:" << totalVal << endl;
    };
};


int main(){

    checkbook check1;

    check1.add();

    check1.add();

    check1.add();

    check1.total();

    check1.add();

    check1.add();

    check1.total();



    return (0);
}
  