/*********************************************************
 * 
 * This is a program that clasifies a percentage of
 * correctnes to a grade
 * 0-60 - F
 * 61-70 - D
 * 71-80 - C
 * 81-90 - B
 * 91-100 - A
 * 
 **********************************************************/

#include <iostream>

using namespace std;

int grade;

int main(){

    //enter grade
    cout << "Enter grade: ";
    cin >> grade;


    while (grade >= 0  &&  grade <= 100)
    {
        if (grade >= 0 && grade <= 60)
            cout << "F" << endl;
        else if (grade >= 61 && grade <= 70)
        {
            cout << "D"<< endl;
        }
        else if (grade >= 71 && grade <= 80)
        {
            cout << "C"<< endl;
        }
        else if (grade >= 81 && grade <= 90)
        {
            cout << "B"<< endl;
        }
        else if (grade >= 91 && grade <= 100)
        {
            cout << "A"<< endl;
        }
        
        //enter new grade
        cout << "Enter grade: ";
        cin >> grade;
        
    }

    return(0);
}