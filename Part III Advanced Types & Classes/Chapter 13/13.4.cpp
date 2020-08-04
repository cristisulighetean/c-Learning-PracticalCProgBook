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


int main(){



    return (0);
}
  