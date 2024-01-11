- [Introduction](#introduction)
  <a name="top"></a>
- [Function Declaration](#function-declaration)

- [Function Types](#function-types)

- [Function Definition](#function-definition)

- [Function Call](#function-call)

- [Function Parameters](#function-parameters)

  - [Default Parameters](#default-parameters)
  - [Multiple Parameters](#multiple-parameters)

- [Function Arguments](#function-arguments)

- [Pass By Value Vs Pass By Reference](#pass-by-value-vs-pass-by-reference)

- [Return Values](#return-values)

- [Function Overloading](#function-overloading)

- [Inline Functions](#inline-functions)

- [Recursive Functions](#recursive-functions)

- [Function Pointers](#function-pointers)

- [Lambda Expressions](#lambda-expressions)

- [Errors](#errors)

- [Best Practices for Functions](#best-practices-for-functions)

## Introduction

- Functions zinakuwezesha kuweza kugawanyisha programu yako(code zako) katika vipande amabvyo ni rahisi kumaintain na kuwezesha code zako kuwa readable maintainable na hata kuwa resisable yaani zinaktumika tena katika programu zingine.

## Function Declaration

- Function declaration: Inaspecify jina la function yako, return type, parameters kama zitakuepo kutokana na uwepo wa function inatoa taarifa kwa compiler yako kwanza kuna function na kuna aina nyingi za function katika `C++`

## Function Types

- Hi ni moja kati ya section muhimu sana katika `C++` ila bado kuwa machanhanyiko mkubwa sana hapa ni muhimu kujua je kuna ian ngapi za function katika program yako na kwa namna gani zinafanya kazi

1. **Void functions**: Ni function ambazo hazi rudishi thamani(value).Zinatumika kuandika program ambazo hazirudishi jibu(result). Mfano

```cpp
void greet() {
    std::cout << "Hello, World!" << std::endl;
}
```

2.**Functions with Parameters**:Ni aina za function ambazo zinachukua arguments au parameters ambazo zitatumika kufanya kazi(operation) ndani ya program yako. Mfano

```cpp
int jumlisha(int a, int b) {
    return a + b;
}
```

3. **Functions with Return Value:**: Function zenye return value, ni aina ya function ambzo zinarudisha jibu katika program yako baada ya kufanya kazi fulani ya programu yako. Mfano

```cpp
int square(int num) {
    return num * num;
}
```

4. **Recursive Functions:**: Ni aina za function ambazo znajiita zenyewe either katika directly way au indirectly way Mfano:

```cpp
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
```

## Function Definition

- Function definition(ufafanuzi wa kazi.): Inacontain namna jinsi ya kufanya function na function body ina nini ndani yake na inafanyaje kazi,ambapo kuna statements ndani yake na hizo statement zipo ndani ya curly braces {}

```cpp
#include <iostream>

// Function declaration
int addNumbers(int a, int b);

int main() {
    // Input numbers
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Function call
    int sum = addNumbers(num1, num2);

    // Display the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
```

## Function Call

- Function call: Ili uweze kurun function, unahitaji kuita(call) kwa kutumia jina la function yako ikifiuatiwa na mabano (). Kma function itakuwa na parameters , unawezka na arguments (actual values) ndani ya mabano(parantheses).

```cpp
// syntax
function_name(argument1, argument2, ..., argumentN);
```

argument ni vitu ambavyo function yako inachukua inaweza ikawa ni int au string ila kumbuka kuangalia return type ya jina la function yako ni ipi ila kama funciton yako haina argument yoyote unaweza kuacha empty. Mfano wa function ambayo inatumika kufanya jumlisha(addition)

```cpp
#include <iostream>
int add(int x, int y) {
    return x + y;
}
// ili kuweza kuita function yako utaanza na jina la function ikifuatiwa na arguments ambazo zinahitajika katika function yako
int main(){
    int a = 5, b = 7;
    int sum = add(a, b);
    return 0;
}
```

Hapa a na b ni integer mbili ambazo zinakuwa (zinapitishwa) passed kama argument kwenye function yetu ya `add` na function hiyo ndio inarudisha jibu la a na b ambalo linakuwa limehifadhiwa(stored) ndani ya sum variable. Kumbuka kwamba aina na idadi ya arguments ambazo function zinachukua ianbidi ziwe sawa number za argument ambazo zinapitishwa mda wa kuitwa function, kinyume na hapo italeta `error`

## Function Parameters

- Information can be passed to functions as a parameter. Parameters act as variables inside the function.
- Taarifa amabzo zinaweza kuwa ppased kwenye function kama parameter.Paremeter zina act kama variables ndani ya function.
- Parameters zinakuwa specified baada ya function name ndani ya parenthesis.Unaweza ukaweka parametres nyingi uanzotaka kwenye function yako anaweza add kiasi cha function parameters ambazo unataka kwenye program yako.
  syntax

```cpp
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
```

## Default Parameters

- Unaweza pia ukawa na function ambayo ina deafult parameter,parameter yenye default value tunatumia equal sign = Mfano hapo chini kuanfunction yenye default parametesr tukianza na message variable ambayo ni string default value yake ni `"Hello"` na `repeatCount` yake ni 1 by default.

```cpp
#include <iostream>

// Function with default parameters
void printMessage(string message = "Hello, World!", int repeatCount = 1) {
    for (int i = 0; i < repeatCount; ++i) {
        cout << message << endl;
    }
}

int main() {
    // Calling the function without providing parameters (default values will be used)
    printMessage(); // Output: Hello, World!

    // Calling the function with custom values
    printMessage("Custom Message", 3);
    // Output:
    // Custom Message
    // Custom Message
    // Custom Message

    return 0;
}

```

Kumbuka kwamba pale ambapo function yako itakuwa na default parameters unaweza call function yako pila klupassaargument zako ila ukicall function yako na kupass arguments nyingine zile deafult arguments zitakuwa overwritten aktika program yako.

## Multiple Parameters

- Ndani ya functin unaweza uakaweka function nyingi kiasi ambacho wewe unataka katika program yako
  **NOTE** Idadi ya parameters ianbidi iwe sawa na idadi ya aguments ambazo zimekuwa passed kwenye function na pia ziwe katiaka order.

## Function Arguments

- Katika C++, function arguiments ni values au variables ambazo znakuwa passed kwenye function pale unavyoitwa (call).Hizi arguments zinatoa input kwenda kwenye function, kuwezesha function kufanya computation za operesheni zake kutokana va values.

```cpp
#include <iostream>

// Function declaration with parameters (arguments)
void printSum(int a, int b);

int main() {
    int x = 5, y = 7;

    // Function call with arguments
    printSum(x, y);

    return 0;
}

// Function definition with parameters (arguments)
void printSum(int a, int b) {
    std::cout << "Sum: " << a + b << std::endl;
}

```

- Katika mfano huu , function ya printSum inachukua integer parameters ambazo ni mbili (int a na int b).Pale ambapo function iatitwa katika main fucntion ikiwa na arguments za x na y, itatoa jibu la sum ya value mbili.

## Return Values

## Function Overloading

## Inline Functions

## Recursive Functions

## Function Pointers

## Lambda Expressions

## Best Practices for Functions

## Pass By Value Vs Pass By Reference

## Errors

1. Missing or Incorrect Function Prototypes:

   Not declaring or providing incorrect function prototypes before using a function in the code can lead to compilation errors. Make sure to declare functions before calling them, or use header files to provide prototypes.

```cpp
// Missing function prototype
int addNumbers(int a, int b);

int main() {
    int result = addNumbers(3, 4);
    return 0;
}

int addNumbers(int a, int b) {
    return a + b;
}

```

2. Not Returning Values:

- For functions with a non-void return type, forgetting to return a value or not returning the correct type of value can result in unexpected behavior.

```cpp
int addNumbers(int a, int b) {
    // Missing return statement
    // return a + b;
}
```

3. Ignoring Function Parameters:

- Ignoring or misusing function parameters can lead to logical errors in the program.

```cpp
int addNumbers(int a, int b) {
    // Using the wrong parameter
    return a + 5;
}
```

[⬆️ Return to Top](#top)
