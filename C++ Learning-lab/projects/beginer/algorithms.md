## Algorithm: Simple Calculator in C++

1. Start

2. Include necessary libraries
    - #include <iostream>

3. Define functions for basic operations:
    - int addition(int number1, int number2)
    - int subtraction(int number1, int number2)
    - int multiplication(int number1, int number2)
    - int division(int number1, int number2)

4. Define the main function:
    - int main()

5. Declare variables for user input:
    - int x
    - int y

6. Display messages to prompt user input:
    - "Enter first number:"
    - Read the input into variable x

    - "Enter second number:"
    - Read the input into variable y

7. Perform arithmetic operations using the defined functions:
    - int sum = addition(x, y)
    - int diff = subtraction(x, y)
    - int product = multiplication(x, y)
    - int quotient = division(x, y)

8. Display the results:
    - "The sum is: " + sum
    - "The difference is: " + diff
    - "The product is: " + product
    - "The quotient is: " + quotient

9. End

Functions:
- addition(int number1, int number2)
    - Return the sum of number1 and number2

- subtraction(int number1, int number2)
    - Return the difference of number1 and number2

- multiplication(int number1, int number2)
    - Return the product of number1 and number2

- division(int number1, int number2)
    - Check if number2 is zero
        - If true, display "Cannot divide by zero" and return a special value (e.g., 0)
        - If false, return the quotient of number1 divided by number2

