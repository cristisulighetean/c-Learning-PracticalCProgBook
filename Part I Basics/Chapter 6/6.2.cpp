/*********************************************************
 * 
 * Modify the previous program to print out a + or
 * - after the letter grade based on the last digit of the score 
 * 1-3 -
 * 4-7 none
 * 8-9 +
 * F is only an F
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
            cout << "D";
        }
        else if (grade >= 71 && grade <= 80)
        {
            cout << "C";
        }
        else if (grade >= 81 && grade <= 90)
        {
            cout << "B";
        }
        else if (grade >= 91 && grade <= 100)
        {
            cout << "A";
        }

        //add a plus or minus after
        if (grade % 10 >= 1 && grade % 10 <= 3  && grade > 60 )
            cout << "-" << endl;
        else if (grade % 10 >= 8 && grade % 10 <= 9 && grade > 60)
            cout << "+" << endl;
        else
            cout << endl;


        //enter new grade
        cout << "Enter grade: ";
        cin >> grade;
        
    }

    return(0);
}