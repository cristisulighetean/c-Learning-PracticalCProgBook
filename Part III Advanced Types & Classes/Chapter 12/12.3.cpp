

/******************************************
 * 
    Design an airline reservation data structure
    that contains the following data:
    Flight number
    Originating airport code (3 characters)
    Destination airport code (3 characters)
    Departure time
    Arrival time
    Write a program that lists all planes leaving from two airports
    specified by the user.
 * 
 * *************************************/

#include <iostream>
#include <string>

using namespace std;

struct airlineSchedule
{
    unsigned int flightNumber;
    string orgAir;
    string destAir;
    struct 
    {
        unsigned int hour:6;
        unsigned int min:6;
    }departureTime;
    
    struct 
    {
        unsigned int hour:6;
        unsigned int min:6;
    }arrivalTime;

};

void checkPlanes(airlineSchedule air[], string airPort1, string airPort2){
    for (int i = 0; i < sizeof(air); i++)
    {
        if (air[i].orgAir == airPort1 || air[i].orgAir == airPort1)
            //print a detaild view of the flight
            cout << "Bingo" << endl;
    }
    
}


int main(){
    
    //Declare multiple reservations with a for
    airlineSchedule air[10];
    for (int i = 0; i < 3; i++)
    {
        air[i].departureTime.hour = 21;
        air[i].departureTime.min = 15;

        air[i].arrivalTime.hour = 0;
        air[i].arrivalTime.min = 35;

        air[i].flightNumber = 123;

        air[i].destAir = "NVE";
        air[i].orgAir = "DCM";


    }
    
    cout << air[1].orgAir << endl;
    
    return(0);
}


