#include <algorithm>
#include <iostream>
#include <utility>

using namespace std;

// define functions
void addition(pair<int, int> number);
void subtraction(pair<int, int> number);
void multiplication(pair<int, int> number);
void division(pair<int, int> number);

int main()
{
    int operation = 0;
    int number1;
    int number2;

    cout << "Welcome to Calculator made using STL containers." << endl;
    cout << "********************************" << endl;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Choose the type of operation you want to use, choose a number" << endl;
    cout << "1. Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n";
    cout << "Operation Number: ";
    cin >> operation;

    switch (operation)
    {
    case 1:
        addition(make_pair(number1, number2));
        break;
    case 2:
        subtraction(make_pair(number1, number2));
        break;
    case 3:
        multiplication(make_pair(number1, number2));
        break;
    case 4:
        division(make_pair(number1, number2));
        break;
    default:
        cout << "Incorrect Operator type" << endl;
        break;
    }
    return 0;
}

// function declaration
void addition(pair<int, int> number)
{
    int result = number.first + number.second;
    cout << "Result: " << result << endl;
}

void subtraction(pair<int, int> number)
{
    int result = number.first - number.second;
    cout << "Result: " << result << endl;
}

void multiplication(pair<int, int> number)
{
    int result = number.first * number.second;
    cout << "Result: " << result << endl;
}

void division(pair<int, int> number)
{
    // check if the seconmd member is zero
    if (number.second != 0)
    {
        int result = number.first / number.second;
        cout << "Result: " << result << endl;
    }
    else
    {
        cout << "Cannot divide by zero";
    }
}
