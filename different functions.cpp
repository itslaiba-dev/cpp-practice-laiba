#include <iostream>
using namespace std;


int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition = " << add(num1, num2) << endl;
    cout << "Subtraction = " << subtract(num1, num2) << endl;
    cout << "Multiplication = " << multiply(num1, num2) << endl;

    if(num2 != 0)
        cout << "Division = " << divide(num1, num2) << endl;
    else
        cout << "Division not possible (cannot divide by zero)" << endl;

    return 0;
}
