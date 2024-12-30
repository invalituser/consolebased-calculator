#include <iostream>
using namespace std;

int main() {
        char a;
        long double number1, result, number2;
        cout << "Welcome to calculator!";
    while(true){
        cout << "Enter one of there operations : '+', '-', '/', '*'\n";
        cout << "Enter: "; cin >> a;

            if(a == '+' || a == '-' || a == '/' || a == '*'){
                break;
            } else{
                cout << "Enter proper operation!\n";
            }
    }
    
    
    switch (a) {
        case '+': 
            cout << "Enter number1: "; cin >> number1; cout << endl;
            cout << "Enter number2: "; cin >> number2; cout << endl;
            result = number1 + number2;
            cout << "Your result is: " << result << endl; 
        break;

        case '/':
            cout << "Enter number1: "; cin >> number1; cout << endl;
            cout << "Enter number2: ";

            while (true){
                cin >> number2;
                if(number2==0){
                    cout << "Wrong input, please enter proper value: ";
                } else {
                    break;
                }
            }
            result = number1/number2;
            cout << "Your result is: " << result << endl;
        break;

        case '-':
            cout << "Enter number1: "; cin >> number1; cout << endl;
            cout << "Enter number2: "; cin >> number2; cout << endl;
            result = number1-number2;
            cout << "Your result is: " << result << endl;
        break;

        case '*':
            cout << "Enter number1: "; cin >> number1; cout << endl;
            cout << "Enter number2: "; cin >> number2; cout << endl;
            result = number1*number2;
            cout << "Your result is: " << result << endl;
        break;
        
        default: 
            cout << "Invalit operation, please re-enter correct operation!" << endl;
        
    }
}
