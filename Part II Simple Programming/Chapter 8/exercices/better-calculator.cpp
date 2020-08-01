#include <iostream>

using namespace std;

int result, value;
char oper_char;

int main(){
    //this is a better version of the calculator using a switch & while statements

    result = 0; //initialize the result

    //loop forever or until break is reached
    while (true)
    {
        cout << "Enter operator & number(h - help): ";
        
        //get operator & value
        cout << "Operator: ";
        cin >> oper_char;

        
        if (oper_char != 'h' && oper_char != 'H') {
            if (oper_char == 'q' || oper_char == 'Q')
                break;
            cout << "Value :";
            cin >> value;
        }
         
        //if(oper_char == 'q' || oper_char == 'Q')
        //    break;
        

        switch (oper_char)
        {
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
            if (value == 0){
                cout << "Error: Division by 0 ---> Operation ignored" << endl;
            }
            else{
                result /= value;
            }
            break;
        case 'h':
        case 'H':
            cout << "Operator Meaning" << endl;
            cout << "+ - Add" << endl;
            cout << "- - Substract" << endl;
            cout << "* - Multiply" << endl;
            cout << "/ - Divide" << endl;
            continue;

        default:
            cout << "Unknown operator " << oper_char << endl;
            continue;

        }
        cout << "Result: " << result << endl;
    }
    


    return (0);
}