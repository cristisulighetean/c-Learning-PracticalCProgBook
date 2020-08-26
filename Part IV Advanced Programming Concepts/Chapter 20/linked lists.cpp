#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class linkedList                        //Main class of a linked list
{
public:
    void add_list(const char item);
    class linkedList_element            //Class containing the linked list element 
    {
    private:
        //Pointer to the next element 
        linkedList_element *next_ptr;
        friend class linkedList;        
    public:
        //Data in this element
        char data[30];

        linkedList_element(){};
        ~linkedList_element(){};
    };
    //First element in the list
    linkedList_element *first_ptr;

    //Initialize the linked list
    linkedList(void){first_ptr = NULL;};
    ~linkedList(){};
};

void linkedList::add_list(const char item){
    //Point to next item in the list
    linkedList_element *new_ptr;

    new_ptr = new linkedList_element;
    strcpy((*new_ptr).data, item);
    (*new_ptr).next_ptr = first_ptr;
    first_ptr = new_ptr;
}


int main(){

    linkedList list;
    list.add_list('Dan');
    




    return (0);
}


