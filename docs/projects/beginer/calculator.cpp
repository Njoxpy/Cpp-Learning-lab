#include <iostream>

using namespace std;

int addition(int number1, int number2)
{
    return number1 + number2;
}

int subtraction(int number1, int number2)
{
    return number1 - number2;
}

int multiplication(int number1, int number2)
{
    return number1 * number2;
}

int division(int number1, int number2)
{

    if (number2 == 0)
    {
        cout << "Cannot divide by zero";
        return 1;
    }
    else
    {
        return number1 / number2;
    }
}

int main()
{
    int x;
    int y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    int sum = addition(x, y);
    int sub = subtraction(x, y);
    int mult = multiplication(x, y);
    int div = division(x, y);

    cout << "\n\n\n";

    cout << "Results:" << endl;
    cout << "  Addition: " << x << " + " << y << " = " << sum << endl;
    cout << "  Subtraction: " << x << " - " << y << " = " << sub << endl;
    cout << "  Multiplication: " << x << " * " << y << " = " << mult << endl;

    if (y != 0)
    {
        cout << "  Division: " << x << " / " << y << " = " << div << endl;
    }
    else
    {
        cout << "  Division: Cannot divide by zero" << endl;
    }

    return 0;
}
