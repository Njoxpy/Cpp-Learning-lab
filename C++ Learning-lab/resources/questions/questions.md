## Questions

- [Questions](#questions)
- [Basics](#basics)
- [Arrays](#arrays)
- [What will be the address of the indexed variable your\_array\[3\]](#what-will-be-the-address-of-the-indexed-variable-your_array3)
- [Control Flow](#control-flow)
- [Functions](#functions)
- [Pointers](#pointers)
- [Strings](#strings)
- [Variables](#variables)
- [Intermediate](#intermediate)
- [Algorithms](#algorithms)
- [Data Structures](#data-structures)
- [Enumerations](#enumerations)
- [Errors](#errors)
- [Memory Management](#memory-management)
- [Object Oriented](#object-oriented)
- [Structures](#structures)
- [Templates](#templates)
- [Advanced](#advanced)

## Basics

## Arrays

- Describe the difference in the meaning of int a[5] and the meaning of
  a[4]. What is the meaning of the [5] and [4] in each case?
- . Write some C++ code that will fill an array a with 20 values of type int read
  in from the keyboard. You need not write a full program, just the code to do
  this, but do give the declarations for the array and for all variables
- Suppose you have the following array declaration in your program:
  int your_array[7];
  Also, suppose that in your implementation of C++, variables of type int use
  2 bytes of memory. When you run your program, how much memory will
  this array consume? Suppose that when you run your program, the system
  assigns the memory address 1000 to the indexed variable your_array[0].
  What will be the address of the indexed variable your_array[3]
-

## Control Flow

## Functions

## Pointers

## Strings

## Variables

- What is a variable, and why is it essential in programming?
- Differentiate between local and global variables in C++.
- How do you declare and initialize variables in C++?
- Discuss the role of data types in determining the type of variables.
- What is the significance of the const keyword when declaring variables?
- Explain the difference between automatic, static, and dynamic variables.
- How does the lifetime of a variable impact its usage in a program?
- Discuss the rules and best practices for naming variables in C++.
- Provide examples of variable declarations with appropriate data types.
  What is a data type, and why is it important in C++?
- Explain the purpose of the int data type in C++.
- What is the range of values that an int can represent in C++?
- How do you use the sizeof operator to determine the size of an int variable?
- Discuss the differences between signed and unsigned integers.
- Explain the concept of integer overflow and how it can be mitigated.
- Provide examples of arithmetic operations using int variables.
- Describe the role of casting in converting between different data types, including int.
- Discuss the significance of the % (modulo) operator with respect to integers.
- How does C++ handle division of integers, and what are the potential issues?

## Intermediate

## Algorithms

## Data Structures

## Enumerations

## Errors

## Memory Management

## Object Oriented

## Structures
-  Given the following structure and structure variable declaration:
struct TermAccount
{
 double balance;
 double interest_rate;
 int term;
 char initial1;
 char initial2;
};
TermAccount account;
what is the type of each of the following? Mark any that are not correct.
a. account.balance
b. account.interest_rate
c. TermAccount.term
d. savings_account.initial1
e. account.initial2
f. account

- Consider the following type definition:
struct ShoeType
{
 char style;
 double price;
};
Given this structure type definition, what will be the output produced by 
the following code?
ShoeType shoe1, shoe2;
shoe1.style ='A';
shoe1.price = 9.99;
cout << shoe1.style << " $" << shoe1.price << endl;
shoe2 = shoe1;
shoe2.price = shoe2.price/9;
cout << shoe2.style << " $" << shoe2.price << endl;

- Here is an initialization of a structure type. Tell what happens with each 
initialization. Note any problems with these initializations.
struct Date
{
 int month;
 int day;
 int year;
};
a. Date due_date = {12, 21};
b. Date due_date = {12, 21, 20, 22};
c. Date due_date = {12, 21, 20, 22};
d. Date due_date = {12, 21, 22};
- Write a definition for a structure type for records consisting of a person’s 
wage rate, accrued vacation (which is some whole number of days), and 
status (which is either hourly or salaried). Represent the status as one of 
the two char values 'H' and 'S'. Call the type EmployeeRecord.
- Give a function definition corresponding to the following function 
declaration. (The type ShoeType is given in Self-Test Exercise 2.)
void read_shoe_record(ShoeType& new_shoe);
//Fills new_shoe with values read from the keyboard.

## Templates

## Advanced
