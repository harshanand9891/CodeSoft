#include<iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
cin.ignore();
    cout << "Choose an operation (+ for addition, - for subtraction, * for multiplication, / for division): ";
    cin >> operation;

    double result;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
    } else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
    } else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Invalid operation. Please enter +, -, *, or /." << endl;
    }

    return 0;
}
