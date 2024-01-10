## Structures

- [Structures](#structures)
- [Introduction to Structures](#introduction-to-structures)
- [Declaring Structures](#declaring-structures)
- [Accessing Structure Members](#accessing-structure-members)
- [Unpacking Structures](#unpacking-structures)
- [Nested Structures](#nested-structures)
- [Array of Structures](#array-of-structures)
- [Pointer to Structures](#pointer-to-structures)
- [Functions with Structures](#functions-with-structures)
- [Passing Structures to Functions](#passing-structures-to-functions)
- [Dynamic Allocation of Structures](#dynamic-allocation-of-structures)
- [Structures and Classes](#structures-and-classes)
- [Best Practices](#best-practices)

## Introduction to Structures

- Structures are used to create custom data types in C++, with structures we can define custom data types called ADT(Abstract Data Types), abstraction is the general model of something.

## Declaring Structures

- Struct ni muhimu sana kwa mfano tuna function yetu inaitwa display customer details baada ya kuwa called ndani ya hiyo funtion zipo parameter 4 ambazo zinadisplay customer details, ila ili kuweza kusave mda wako unaweza na pia kama Bob anavyosema kwamba `The best function is that with no parameters at all`, badala ya kuwa na function tunatumia ambayo tunapush details kama customerID, customerName, customerEmail na isRegistered tutakuwa na struct ambayo itatuwezesha kufanya yote hayo, badala ya kuwa na hiyo function tutatumai strcut na ndani ya strcut tutakuwa na hao member wanne(4).
- Start with the struct keyword ikifuatiwa na jina la struct yako ila kumbuka struct yako inabidi iwe katika PascaLCase `PascalNaming conventions` baada ya hapo tumia braces and ndani ya btraces zako define data ambazo zinahitajika.
**Syntax for structs**
```cpp
Syntax
struct Structure_Tag
{
 Type_1 Member_Variable_Name_1;
 Type_2 Member_Variable_Name_2;
};
```
<!-- syntax for structs -->
```cpp
#include <iostream>

using namespace std;

struct Customers
{
    int id;
    string name;
    string email;
    bool isRegistered;
};

int main(){
  return 0;
}
```

- Kumbuka structure yako inaweza ikawa kwenye global scope au local scope, nimeweka iwe katika global scope ili niweze kureuse struct yako ndani ya main function.
- Njia nyingine za kuweza kuzipa values struct zako ni kuweka default values kwa mfano hapo chini katika struct yetu `Customer` tumeweka default value kwenye customer id.

```cpp
#include <iostream>

using namespace std;

struct Customers
{
    int id = 13;
    string name;
    string email;
    bool isRegistered;
};

int main(){
  return 0;
}
```

## Accessing Structure Members

- Kuna namna nyingine ambayo unaweza kupass values zako katika array yako kwa kutumia kwenda kwenye object katika njia nyepesi zaidi kwa kutumia curl braces

```cpp
#include <iostream>

using namespace std;

struct Customers
{
    int id = 13;
    string name;
    string email;
    bool isRegistered;
};

int main(){
  // passing values into curl braces
  Customers customer = {13, "Njox", "mdudu@gmail.com", true}
  return 0;
}
```

- Hakikisha pale unavyopass values by default ni muhimu kuzingatia values zipi zimekuwa assigned na values zipi hazijakuwa assigned.
- Accessing structure members kwenye program yetu tutaumia dot (.) operator ila kwan za inabidi kucreate a instance ya class yetu ambyo ni object.Anza na jina la struct yako iliyokuwa created ikifuatiwa na object ambayo unatka iwe created.

```cpp
#include <iostream>

using namespace std;

// define struct
struct Customers
{
    int id;
    string name;
    string email;
    bool isRegistered;
};

int main()
{
    // create an instance of object from Customer
    Customers customer;

    // give values


    // print customer details
    cout << "ID: " << customer.id << endl << "Name: " << customer.name << endl  << "E-mail: " << customer.email << endl;
    return 0;
}
```

- Ili kuapata access ya members wa hiyo structure tumia dot operator kutoka kwenye instance ya hiyo object

```cpp
customer.id = 221;
customer.name = "Godbless Nyagawa";
customer.email = "godblessnyagawa@gmail.com";
```

## Unpacking Structures

- Ili kuweza kupata values ya kila member wa object ya `customer`, tutacreate new variable ambayo kila variable itahifadhi value yake katika program yako, Mfano wa value ambayo itahifadhi jin ala customer wetu

```cpp
int customerName = customer.name;
string customerName = customer.name;
cout << customerName;
```

- Njia hapo juu ni sawa ila sio best practices kwa sababu ina consume mda kwa hiyo badala ya kutumia njia hiyo unaweza ukatumia unpacking kupata kila value, kwenye C++ wanaita `structured  binding` upande wa Jvascript wanita `desctructuring` upande wa Python wanaita `unpacking`.
- Ili kuweza kufanya desctructuring kwenye structure yetu anza na `auto` keyword ikifuatiwa na sqaure brackets(mabano) ndani ya hayo mabano andika variables zote kwa kila member ambaye yuko katika object yako katika oder inayotakiwa kinyume na hapo uatapata error baada ya kuandika kuandika variables zako tengeneza curl braces {} zako na ndani ya curl braces yako pass jina la object yako ambayo iko katika program yako.

```cpp
auto [id, name, email, isRegistered] {customer};
// you can print individual members
cout << id;
```

## Nested Structures

## Array of Structures

## Pointer to Structures

## Functions with Structures

## Passing Structures to Functions

## Dynamic Allocation of Structures

## Structures and Classes

## Best Practices

- Use Pascal Case naming convention, katika programming kuna naming conventions nyingi sana ila kwenye upande wa structures tutaumia Pascal naming convention mfano; Kila neno linalo anxza linakuwa capitalized
  `struct CustomerDetails`
- Whenever we create an instance of the class is the good practices to initialize it's memember

```cpp
#include <iostream>

using namespace std;

// define struct
struct Customers
{
    int id;
    string name;
    string email;
};

int main()
{
    // create an instance of object from Customer
    Customers customer;

    // initialize it's members
    cout << customer.name;
    // output:
    return 0;
}
```

- Kuna baadhi ya code editors kama hujaweka values kwenye struct members wako kama ni int huwa iankuwa by default ambayo ni zero.
