/***********************************************
 * 
You are asked to write a booking program for the veterinarian: Dr. Able Smith,
PHD (Pigs, Horses, Dogs). Define a class type for each animal. Each class should keep track
of the number of animals that have been defined using that class in a private static variable.
Define a function that returns the total number of animals (all three types combined).
 * 3 classes Pigs, Horses, Dogs
 * each class must have a var that defines the number of classes def
 * function that totals all the animals
 * 
***********************************************/

#include <iostream>

using namespace std;

class pig
{
private:
    static int totalPigs;
    friend int totalAnimals(void);
public:
    
    pig(){++totalPigs;};
    ~pig(){--totalPigs; };
};



class dog
{
private:
    static int totalDogs;
    friend int totalAnimals(void);

public:
    dog(){++totalDogs;};
    ~dog(){ --totalDogs;};
};




class horse
{
private:
    static int totalHorses;
    friend int totalAnimals(void);
public:
    horse(){++totalHorses;};
    ~horse(){ --totalHorses; };
};


int pig::totalPigs = 0;             //initialization of total pigs
int dog::totalDogs = 0;             //initialization of total dogs
int horse::totalHorses = 0;         //initialization of total horses


int totalAnimals(void){
    //total all animals from the 3 classes
    return(horse::totalHorses + dog::totalDogs + pig::totalPigs); 
}

int main(){

    pig pig1;
    dog dog1;
  
    cout << "total animals: " << totalAnimals() << endl;

    pig pig2;
    horse h2;

    cout << "total animals: " << totalAnimals() << endl;



  
    return (0);
}
  

