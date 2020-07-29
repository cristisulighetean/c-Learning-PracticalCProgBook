#include <iostream>

int integer; // an integer
float floating; // a floating-point number

int main( ){
    floating = 1.0 / 2.0; // assign "floating
    integer = 1 / 3; // assign integer 0
    floating = (1 / 2) + (1 / 2); // assign floating
    floating = 3.0 / 2.0; // assign floating
    integer = floating; // assign integer 1
    return (0);
}