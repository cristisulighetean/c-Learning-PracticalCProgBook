/***********************************************
 * 
Two classes share a file. Other areas of the program need to know when this
file is busy. Create a function that returns 1 when the file is being used by either of these two
classes.
 * 
***********************************************/
#include <iostream>

using namespace std;


class friendClass
{
private:
    static int file ;
    static int count;
    int instance;
    
public:
    void testFile(void);
    void work(void);
    friendClass(){ 
        ++count;                //increment count at the declaration of class
        instance = count;       //instance is a local var for each class denoting the no 
        file = instance;        //everytime a new instance is declared, it is working on that file
    };  
    ~friendClass(){ --count; };  //decrement count at the declaration of class
};

int friendClass::count = 0;         //initialization of count
int friendClass::file = 0;          //initialization of file


void friendClass::testFile(void){
    cout << "Class " << file << " is working on the file" << endl;
}

void friendClass::work(void){
    file = instance;
}




int main(){

    friendClass test1;

    test1.testFile();

    friendClass test2;

    test2.testFile();
    test1.work();
    test2.testFile();
  
    return (0);
}
  