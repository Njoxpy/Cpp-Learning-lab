- [Introduction](#introduction)
- [Function Declaration](#function-declaration)
- [Function Types](#function-types)
- [Function Definition](#function-definition)
- [Function Call](#function-call)
- [Function Parameters](#function-parameters)
  - [Default Parameters](#default-parameters)
  - [Multiple Parameters](#multiple-parameters)
- [Function Arguments](#function-arguments)
- [Pass By Value Vs Pass By Reference](#pass-by-value-vs-pass-by-reference)
- [Local And Global Variables](#local-and-global-variables)
- [Declaring Functions](#declaring-functions)
- [Organizing Functions In Files](#organizing-functions-in-files)
- [Return Values](#return-values)
- [Function Overloading](#function-overloading)
- [Inline Functions](#inline-functions)
- [Recursive Functions](#recursive-functions)
- [Function Pointers](#function-pointers)
- [Lambda Expressions](#lambda-expressions)
- [Errors](#errors)
- [Best Practices for Functions](#best-practices-for-functions)

<a name="top"></a>

## Introduction

- Functions zinakuwezesha kuweza kugawanyisha programu yako(code zako) katika vipande amabvyo ni rahisi kumaintain na kuwezesha code zako kuwa readable maintainable na hata kuwa reusable yaani zinaktumika tena katika programu zingine.

## Function Declaration

- Function declaration: Inaspecify jina la function yako, return type, parameters kama zitakuepo kutokana na uwepo wa function inatoa taarifa kwa compiler yako kwanza kuna function na kuna aina nyingi za function katika `C++`, Ili kuweza kutengeneza function yako utaanza na return type kisha ikifuatiwa na jina la function yako kisha mabano na ndani ya mabano yako kutakuwa na paremeters baaada ya hapo itafuatiwa na mabano singasinga na nadni ya mabano hayo ndio function body kwamba vitu vyote ambavyo unataka function yako ifanye ndio vitakuwa ndani ya function yako hiyo.

## Function Types

- Hi ni moja kati ya section muhimu sana katika `C++` ila bado kuwa machanhanyiko mkubwa sana hapa ni muhimu kujua je kuna ian ngapi za function katika program yako na kwa namna gani zinafanya kazi

1. **Void functions**: Ni function ambazo hazi rudishi thamani(value).Zinatumika kuandika program ambazo hazirudishi jibu(result), au tunaweza tukasema ni function ambazo return type yake ni void yaani tupu hairudishi kitu chochote. Mfano

```cpp
void greet() {
    std::cout << "Hello, World!" << std::endl;
}
```

2.**Functions with Parameters**:Ni aina za function ambazo zinachukua parameters ambazo zitatumika kufanya kazi(operation) ndani ya program yako. Mfano: Tunaweza tukawa na function yetu inaitwa kujumlisha ambayo inachukua parameters mbili ambazo ni namba ya kwaza(a) na namba ya mbili(b). Kama function sio void ina maana kwamba itarudisha value fulani kwenye program yako hivyo unaweza ukawa na function ambayo inarudisha data type fulani mfano wake ni return type int, return type float , return type bool na hata pia double.

```cpp
int jumlisha(int a, int b) {
    return a + b;
}
```

3.**Functions with Return Value:**: Function zenye return value, ni aina ya function ambzo zinarudisha jibu katika program yako baada ya kufanya kazi fulani ya programu yako. Mfano

```cpp
int square(int num) {
    return num * num;
}
```

4.**Recursive Functions:**: Ni aina za function ambazo znajiita zenyewe either katika directly way au indirectly way Mfano:

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

## Local And Global Variables

***Local Variable***

- Pale ambapo unafanya declaration ya variable yotyote kwenye program yako inaweza ikawa local kama unaweza kupata access ndani ya hiyo variable tu ambayo ipo.Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    int number = 100;
    return 0;
}
```

Kupitia mfano hapo juu unaweza ukapata acess ya integer number kwenye scope tu ambayo integer yako ipo na hiyo variable ikiwa ni loca; variables eneo ambalo variable yako ipo kwenye program yako ndio tunaita `local scope`.Integer number ipo kwenye main function tu nje ya hapo haitapata value yako,Mfano tunataka kuapata value ya number nje ya main function:

    ## Global Variable

- Global variable ni ile variable yako ambayo unaweza pata access yake ukiwa sehemu yoyote kwenye program yako pia ni variable ambayo inakuwa declared nje ya function yoyote au class.Global variables zina global scope, maana kwamba unaweza pata access ya ukiwa sehemu yoyote ya program yako,pamoja na siurce files kama zinakuwa declared.

Mfano:

```cpp
#include <iostream>

using namespace std;

// Global variable declaration
int globalVar = 10;

int main() {
    // Accessing globalVar inside the main function
    cout << "Value of globalVar inside main: " << globalVar << endl;

    // Modifying globalVar
    globalVar = 20;

    // Accessing globalVar after modification
    cout << "Value of globalVar after modification: " << globalVar << endl;

    return 0;
}

```

Katika mfano huu, `globalVar` imekuwa declared nje ya function yoyote,ambacho imefanya imekuwa global variable.Inaweza kuwa accessed na kuwa modfied pia ndani tya main function bila tatizo lolote.

## Declaring Functions

- Declaring function i moja kati ya case nzuri sana inayotmika kwenye upande wa local and global variables,Mfano Vipi endapo tutafanya declaration ya function yetu baada ya main function:

```cpp
// working with functions

#include <iostream>

using namespace std;

int main()
{
    greetUser();
    return 0;
}

void greetUser()
{
    cout << "Welcome";
}
```

Output tunayopata ni hii

```cpp
error: 'greetUser' was not declared in this scope
    9 |     greetUser();
      |     ^~~~~~~~~
```

Tumepata compilation function kwamba function yetu haipo visible kwa main function kwa hiyo solution yake ni kwamba always fanya declaration ya function kabla ya main function.Solution zipo mbili ya kwanza ni kufanya declaration ya `greetUser()` function kabla ya main function na kutokana na hii ni sawa na kuambia compiler kwamba kuna function fulani ipo katika program yangu ila declaratio yake ipo hapa juu,Mfano:

```cpp
// working with functions

#include <iostream>

using namespace std;

// declare your function,make sure to terminate
// function declaration(function prototype)
void greetUser();

int main()
{
    greetUser();
    return 0;
}

// function definition
void greetUser()
{
    cout << "Welcome";
}
```

Solution ya pili unafanya normal declaration ya function kwamba function yako yote inakuwa ndani nje ya main function.

```cpp
// working with functions

#include <iostream>

using namespace std;

void greetUser()
{
    cout << "Welcome";
}

int main()
{
    greetUser();
    return 0;
}

```

Function declaration ni sawa na function prototype.

## Organizing Functions In Files

- Jinsi project yako inazidi kuwa kubwa inabidi uweze kufanya organization ya projects zako katika files kwa ajili ya function zako, pia ni namna ya kufwata good practices na clean code procedures.

- Project inavyokuwa code inakuwa na line of code nyingi hivyo ili uweze kupangilia project zako ziweze kukaa vizuri tutatumia files,kwamba functions nyingi katika project yako zinakuwa katika files.Kwanini Files?
    1. Files zinakuwa ndogo na rahisi kuweza kufanya mabadiliko.
    2. Reusability.Kama tuna function fulani katika file jingine hivyo tnaweza kutumia tena hilo file kwenye project nyingine.Kutokana na uwezo wa kutenganisha file kuwa na header file na source file(implentation file),header files zinasaidia code resusability.Unaweza ukawa na zaidi ya moja header file kutumia declaration.

Ili kuweza kufanya organization ya file zako, create folder na ndani ya hilo folder tengeneza files mbili moja kwa ajili ya header files (function declaration) na file lingine kwa ajili ya implementation(implementation file) ndani ya implementation file kunakuwa na function definition.Jina la folder lako hakikisha nalipa descriptive name, `utility`

```sh
mkdir utils


touch greet.cpp
```

Kumbuka kwa `greet.cpp` ni file kwa ajili ya actual implementation ya function yako yaani function definition, katika `main.cpp` kulikuwa na ile function definition hivyo nenda cut ile function kisha ilete kwenye `greet.cpp`.

```cpp
void greetUser()
{
    cout << "Welcome";
}
```

Hakikisha unaweka header files `#include <iostream>` na pia usisahau `using namespace std;`

```cpp
#include <iostream>

using namespace std;

void greetUser()
{
    cout << "Welcome";
}
```

Tengeneza header file kwa ajili ya function declaration, hili file huwa linakuwa na extension ya `.hpp` au `.h`

```sh
touch greet.hpp
```

Baada ya file kuwa created strcture yako ya folder la utils inabidi liwe hivi ![Utils folder](/assets/header%20files%20view.PNG)

Kwenye file la greet.hpp ndio tunaweka function declaration.

```cpp
void greetUser();
```

Baada ya hapo inabidi file lako la function declaration liwe included ndani ya main.cpp file hivyo,tumia #include directive ila kwasababu tuna target header file ambalo lipo kwenye project yetu tutatumia " " double quotes kufanya reference ya file ambalo lipo kwenye hii project

```cpp
#include <iostream>
#include "utils/greet.hpp"

using namespace std;

int main()
{
    greetUser();
    return 0;
}


```

Kwenye file letu lipo vizuri ila kuna tatizo kidogo endapo tukitumia header file katika sehemu mbalimbali tutapata built problems,hivyo kuapata solution ya hilo tatizo inabidi baadhi ya header files ziwe include kwenye header file.Kwa kutumia ifndef(if not defined) kupitia ifndef tunadefine new library ambayo ni UTILS na ndani ya hiyo utils tunatengeneza constant inaitwa greet.

```cpp
#ifndef UTILS_GREET
```

Baada ya hapo kama folder halijawa defined inabidi tufanye definition kwa kutumia preprocessor keyword ambayo ni define na hapao tunadefine library inaitwa utils ikiwa na constants inaitwa greet.

```cpp
#define UTILS_GREET
```

Mwishoni mwa file letu tutaweka directive ambayo inaashilia kwamba file ndio mwisho.

```cpp
#endif
```

Kijumla file letu inabidi liwe hivi.

```cpp
#ifndef UTILS_GREET
#define UTILS_GREET

void greetUser();

#endif
```

Najua umewahi kuona `#indef`, `#define` na `#endif` lines,Hizo line zinaitwa `header guards` au `include guards`. Zinazuia file ambazo zina same header file ili zisiweze kuwa included mara nyingi katika same translation unit,ambapo inaweza kupelekea errors.

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

2.Not Returning Values:

- For functions with a non-void return type, forgetting to return a value or not returning the correct type of value can result in unexpected behavior.

```cpp
int addNumbers(int a, int b) {
    // Missing return statement
    // return a + b;
}
```

3.Ignoring Function Parameters:

- Ignoring or misusing function parameters can lead to logical errors in the program.

```cpp
int addNumbers(int a, int b) {
    // Using the wrong parameter
    return a + 5;
}
```

[⬆️ Return to Top](#top)
