/***********************************************
 * 
Define a class that will hold the set of integers from 0 to 31. An element can be
set with the set member function and cleared with the clear member function. It is not an
error to set an element that's already set or clear an element that's already clear. The function
test is used to tell whether an element is set.
Member functions:
void small_set::set(int item); // Set an element in the set
void small_set::clear(int item); // Clear an element in the set
int small_set::test(void); // See whether an element is set
Sample usage:
small_set a_set;
a_set.set(3); // Set contains [3]
a_set.set(5); // Set contains [3,5]
a_set.set(5); // Legal (set contains [3,5])
cout << a_set.test(3) << '\n'; // Prints "1"
cout << a_set.test(0) << '\n'; // Prints "0"
a_set.clear(5); // Set contains [3]
 * 
***********************************************/

#include <iostream>

using namespace std;

const int SET_SIZE = 31;

class smallSet
{
private:
    bool data[SET_SIZE] ;

public:
    void set(int item);
    void clear(int item);
    void test(int item);
    smallSet();
    ~smallSet(){};
};

smallSet::smallSet(/* args */)
{
    //initialize set to zero
    for (int i = 0; i < SET_SIZE; i++)
    {
        data[i] = false;
    }  
}


void smallSet::set(int item){
    data[item] = true; 
}

void smallSet::clear(int item){
    data[item] = false; 
}

void smallSet::test(int item){

    if (data[item] == true){
        cout << "The set contains " << item << endl;
    }
    else
        cout << "The set does not contains " << item << endl;
        
}

int main(){

    smallSet set1;

    set1.set(1);

    set1.test(1);

    set1.test(5);

    set1.test(6);


    return (0);
}
  