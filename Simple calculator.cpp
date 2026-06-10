#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    void getData() {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    void calculate(char op) {
        switch(op) {
            case '+':
                cout << "Result = " << num1 + num2;
                break;

            case '-':
                cout << "Result = " << num1 - num2;
                break;

            case '*':
                cout << "Result = " << num1 * num2;
                break;

            case '/':
                if(num2 != 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Error! Division by zero is not allowed.";
                break;

            default:
                cout << "Invalid Operator!";
        }
    }
};

int main() {
    Calculator calc;
    char op;

    calc.getData();

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    calc.calculate(op);

    return 0;
}
