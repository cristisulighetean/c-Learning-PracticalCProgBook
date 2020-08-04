/********************************************************
* Stack *
* A set of routines to implement a simple integer *
* stack. *
* *
* Procedures *
* stack_init -- initialize the stack *
* stack_push -- put an item on the stack *
* stack_pop -- remove an item from the stack *
********************************************************/

#include <iostream>
#include <stdlib.h>

const int STACK_SIZE = 100; //Maximum size of the stack

using namespace std;
//The stack itself
struct stack
{
    int count;
    int data[STACK_SIZE];
};


/*************************Initialize the stack**************************/

inline void stack_init(struct stack &the_stack){
    the_stack.count = 0; //Zero the stack
}

/*********************************************************
* stack_push -- push an item on the stack *
* *
* Warning: We do not check for overflow *
* *
* Parameters *
* the_stack -- stack to use for storing the item *
* item -- item to put in the stack *
*********************************************************/

inline void stack_push(struct stack &the_stack, const int item){
    the_stack.data[the_stack.count] = item;
    ++the_stack.count;
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

inline int stack_pop(struct stack &the_stack){
    --the_stack.count;
    return (the_stack.data[the_stack.count]);
}


// A short routine to test the stack
main()
{
    struct stack a_stack; // Stack we want to use
    stack_init(a_stack);

    // Push three values on the stack
    stack_push(a_stack, 1);
    stack_push(a_stack, 5);
    stack_push(a_stack, 10);

    cout << stack_pop(a_stack) << endl;
    cout << stack_pop(a_stack) << endl;

    return(0);
}
    
