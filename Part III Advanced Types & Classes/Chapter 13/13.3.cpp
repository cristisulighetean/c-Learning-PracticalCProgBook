/***********************************************
 * 
Write a class to implement a simple queue. A queue is very similar to a stack
except the data is removed in first-in-first-out (FIFO) order.
Member functions:
void queue::put(int item); // Insert an item in the queue
int queue::get(void); // Get the next item from the queue
Sample usage:
queue a_queue;
a_queue.put(1); // Queue contains: 1
a_queue.put(2); // Queue contains: 1 2
a_queue.put(3); // Queue contains: 1 2 3
cout << a_queue.get() << '\n'; // Prints 1, queue contains 2 3
cout << a_queue.get() << '\n'; // Prints 2, q
 * 
***********************************************/

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class queue
{
private:
    int start, end;
    int data[MAX_SIZE];
public:
    void put(int item);
    int get(void);
    queue(/* args */);
    ~queue();
};

queue::queue(/* args */)
{
    start = 0;
    end = 0;
}

queue::~queue()
{
}

void queue::put(int item){
    data[end] = item;
    ++end;
}

int queue::get(void){
    if(start == end){
        cout << "Queue is empty" << endl;
        return(0);
    }
    else {
        int item = data[start];
        ++start;
        return(item);
    }
}


int main(){

    queue qq1;

    qq1.put(10);

    cout << qq1.get() << endl;

    cout << qq1.get() << endl;




    return (0);
}
  