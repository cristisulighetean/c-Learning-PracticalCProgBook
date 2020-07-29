#include <iostream>

int term; //term used in 2 expressions
int main(){
    term = 3 * 5;
    std::cout << "Twice "<< term << " is " << term*2<<"\n";
    std::cout << "Three times "<< term << " is " << term*3<<"\n";
    //floating point division
    std::cout << "The answer is " << (1.0 / 3.0) << "\n";
    
    return(0);
}