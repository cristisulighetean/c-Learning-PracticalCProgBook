#include <iostream>

using namespace std;

class base
{
public:
    void a(void){cout << "base a called" << endl;}
    virtual void b(void){cout << "base b called" << endl;}
    virtual void c(void){cout << "base c called" << endl;}

    base(){};
    ~base(){};
};

class derived: public base
{
public:
    void a(void){cout << "derived a called" << endl;}
    void b(void){cout << "derived b called" << endl;}
    derived(){};
    ~derived(){};
};

void do_base(base &a_base){
    cout << "Call functions in the base class" << endl;
    a_base.a();
    a_base.b();
    a_base.c();

}

int main(){

    derived a_derived;

    cout << "Call functions in derived class" << endl;

    a_derived.a();
    a_derived.b();
    a_derived.c();

    do_base(a_derived);

    return(0);
}