/***********************************************
 * 
Write a class where each instanc
e of the class can access a stack-not one stack
per instance, but one stack period. Any instance of the class can lock the stack for its own
exclusive use and unlock it later. Define member functions to perform the lock and unlock
functions.
As an added attraction, make the unlock function check to see that the current instance of the
class was the same instance that locked the stack in the first place.
 * 
***********************************************/

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class stack
{
private:
    //with lockMode & owner we check the unlock, lock process (must be private)
    static bool lockMode;               //mode of the stack
    static int owner;                   //represents the current owner
    static int countInstance;                   //this counts the available instances of stack
    static int bigStack[MAX_SIZE];      //the stack
    static int count;                   //counter for the elements in the stack 
    int instance;                       //represents the no of instance of the class
    friend void initStack(void);
    
public:
    void lock(void);
    void unlock(void);
    void put(int item);
    int pop(void);
    stack(){
        ++countInstance;
        instance = countInstance;   //every class has a number to lock-unlock the stack
    };
    ~stack(){
        --countInstance;
    };

};

int stack::bigStack[MAX_SIZE] = {0};    //initialize array with 0
int stack::countInstance = 0;                   //initialize instances with 0
bool stack::lockMode = false;           //initialize mode
int stack::owner = 1;                   //initialize owner
int stack::count = 0;                   //items in stack 

void stack::lock(void){
    //lock the stack to the #instance
    if(lockMode == false ){
        lockMode = true;
        owner = instance;
        cout << "Stack is locked by " << instance << endl;
    }
    else if(lockMode == true && owner == instance){
        cout << "Stack is already locked by this instance " << endl;
    }
    else if(lockMode == true && owner != instance){
        cout << "The stack is currently locked by instance " << owner << endl;
    }
    
}
void stack::unlock(void){
    //unlock the stack to the #instance
    if(lockMode == true && owner == instance ){
        lockMode = false;
        cout << "Stack was unlocked by " << instance << endl;
    }
    else if(lockMode == true && owner != instance){
        cout << "You can not unlock the stack" << endl;
        cout << "The stack is currently locked by instance " << owner  << endl;
    }

    else if(lockMode == false ){
        cout << "Stack is currently unlocked " << endl;
    }

}
void stack::put(int item){
    /* Check if the stack is unlocked by the same instace
    * in order to perform the put operation */
   if ((lockMode == false ) || (lockMode == true && owner == instance )){
       //perform put
       bigStack[count] = item;
       ++count;
       cout << "Operation performed" << endl;

   }
   else if(lockMode == true){
        cout << "The stack is currently locked by instance " << owner << endl;
    }
}
int stack::pop(void){
    /* Check if the stack is unlocked by the same instace
    * in order to perform the pop operation */
   if ((lockMode == false ) || (lockMode == true && owner == instance )){
       //perform pop
       if (count != 0){
       --count;
       cout << "Operation performed" << endl;
       return(bigStack[count]);
       }
       else{
            cerr << "No numbers in stack" << endl;
            return (404);

       }
   }
   else if(lockMode == true ){
        cerr << "The stack is currently locked by instance " << owner << endl;
        return (404);
    }
    

}




int main(){

    stack stack1;
    stack stack2;
    stack stack3;

    stack1.lock();
    stack1.unlock();

    stack1.put(100);
    stack1.put(70);

    cout << stack1.pop() << endl;

    stack1.unlock();

    int item;

    stack2.put(10);

    stack3.put(80);

    cout << stack2.pop() << endl;

    cout << stack2.pop() << endl;

    cout << stack2.pop() << endl;


    cout << stack2.pop() << endl;

    


    return (0);
}
  

