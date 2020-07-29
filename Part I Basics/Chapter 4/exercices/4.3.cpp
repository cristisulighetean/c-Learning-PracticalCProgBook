/***************************************************
 * Write a program to compute the area and
perimeter of a rectangle 3 inches wide by 5 inches long. What
changes must be made to the program so it works for a
rectangle 6.8 inches wide by 2.3 inches long?
****************************************************
 */
#include <iostream>

int main(){

    float area, perimeter;
    perimeter = 3 * 2 + 5;
    area = 1/2 * (3*5);
    std::cout << "Area: "<< area << "\n";
    std::cout << "Perimeter: "<< perimeter << "\n";


    return (0);
}