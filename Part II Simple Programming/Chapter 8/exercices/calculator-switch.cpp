#include <iostream>

using namespace std;

int result; // the result of the calculations
char oper_char; // operator the user specified
int value; // value specified after the opera

int main( ){
    result = 0; // initialize the res
    // loop forever (or until break reached)
    while (true) {
        
        cout << "Result: " << result << '\n';
        cout << "Enter operator and number: ";
        cin >> oper_char >> value;
        
        if ((oper_char == 'q') || (oper_char == 'Q'))
            break;
        
        switch (oper_char) {
            case '+':
                result += value;
                break;
            case '-':
                result -= value;
                break;
            case '*':
                result *= value;
                break;
            case '/':
                if (value == 0) {
                    cout << "Error:Divide by zero ";
                    cout << "----> operation ignore " <<endl;
                } 
                else
                    result /= value;
                break;
            default:
                cout << "Unknown operator " << endl;
                break;
        }
    }
    return (0);
}