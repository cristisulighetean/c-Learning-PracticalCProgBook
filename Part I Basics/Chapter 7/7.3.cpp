/*********************************************************
 * 
 * A serial transmission line can transmit 960
 * characters per second. Write a program that will calculate how
 * long it will take to send a file, given the file's size. Try it on a
 * 400MB (419,430,400 byte) file. Use appropriate units. (A
 * 400MB file takes days.)
 * 
 **********************************************************/

#include <iostream>

using namespace std;

int const RATE = 960;
int const byte_1 = 1048576;     //size of one MB

int main(){

    long sizeOfFile;

    cout << "Enter the file size(in MB): ";
    cin >> sizeOfFile;

    cout << "It will take " << (sizeOfFile * byte_1) / RATE / 60  << " minutes to transmit" << endl;

    return(0);
}