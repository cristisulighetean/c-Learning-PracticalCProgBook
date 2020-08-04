/********************************************************
* Stack *
* A file implementing a simple stack class *
********************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

const int STACK_SIZE = 100;

/********************************************************
* Stack class *
* *
* Member functions *
* init -- initialize the stack *
* push -- put an item on the stack *
* pop -- remove an item from the stack *
********************************************************/

//The stack itself

class stack
{
private:
    int count;
    int data[STACK_SIZE];
public:
    //Initialize the stack constructor (init-python)
    stack(void);

    //Push an item on the stack
    void push(const int item);

    //Pop an item off the stack
    int pop(void);
};

/********************************************************
* stack::stack -- initialize the stack *
* This is the constructor function
***** **************************************************/

stack::stack(void){
    count = 0;
}

/********************************************************
* stack::push -- push an item on the stack *
* *
* Warning: We do not check for overflow *
* *
* Parameters *
* item -- item to put in the stack *
********************************************************/

inline void stack::push(const int item){
    data[count] = item;
    ++count;
}

/*********************************************************
* stack_pop -- get an item off the stack *
* *
* Warning: We do not check for stack underflow *
* *
* Parameters *
* the_stack -- stack to get the item from *
* *
* Returns *
* the top item from the stack *
*********************************************************/

inline int stack::pop(void){
    --count;
    return(data[count]);
}

stack::~stack(void){
    if (count != 0){
        cerr << "Destroying a non empty stack" << endl;
    }
}

int main(){

    stack a_stack;

    //Push 3 values to the stack
    a_stack.push(31);
    a_stack.push(66);
    a_stack.push(222);

    //Pop 2 values from the stack
    cout << a_stack.pop() << endl;
    cout << a_stack.pop() << endl;


    return(0);
}


