#include <iostream>

using namespace std;

void add(double num1, double num2)
{
    cout << "Result: " << num1 + num2 << endl;
}

void subtract(double num1, double num2)
{
    cout << "Result: " << num1 - num2 << endl;
}

void multiply(double num1, double num2)
{
    cout << "Result: " << num1 * num2 << endl;
}

void divide(double num1, double num2)
{
    if (num2 != 0)
    {
        cout << "Result: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
    }
}

int main()
{
    double num1, num2;
    char operation;
    bool validOperation = false;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    while (!validOperation)
    {
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        switch (operation)
        {
        case '+':
            add(num1, num2);
            validOperation = true;
            break;
        case '-':
            subtract(num1, num2);
            validOperation = true;
            break;
        case '*':
            multiply(num1, num2);
            validOperation = true;
            break;
        case '/':
            divide(num1, num2);
            validOperation = true;
            break;
        default:
            cout << "Invalid operation! Please try again." << endl;
        }
    }

    return 0;
}
