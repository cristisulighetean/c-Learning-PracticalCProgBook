

/******************************************
 * 
Design a structure to store time and date.
Write a function to find the difference between two times in
minutes.
 * 
 * *************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;


struct timeStamp
{
    // hour, min, sec, day, month, year
    unsigned int hour:6;
    unsigned int min:6;
    unsigned int sec:6;
    unsigned int month:6;
    unsigned int day:6;
    unsigned int year;

}stamps[5];

int getTime(timeStamp stamp1, timeStamp stamp2){
    int time = 0; //total diference

    // add minutes to total time
    time += (abs(stamp1.min - stamp2.min)); 

    // add h to total time
    time += abs(stamp1.hour - stamp2.hour) * 60.0;

    return time; 

}


int main(){
    
    stamps[0].hour = 21;
    stamps[0].min = 30;

    stamps[1].hour = 18;
    stamps[1].min = 10;

    cout << getTime(stamps[1], stamps[0]);


    
    return(0);
}

