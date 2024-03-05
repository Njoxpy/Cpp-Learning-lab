# Structures

- [Structures](#structures)
- [Introduction to Structures](#introduction-to-structures)
- [Declaring Structures](#declaring-structures)
- [Arrays And Structs](#arrays-and-structs)
- [Accessing Structure Members](#accessing-structure-members)
- [Structured Binding](#structured-binding)
- [Nested Structures](#nested-structures)
- [Comparing Structures](#comparing-structures)
- [Working With Methods](#working-with-methods)
- [Operator Overloading](#operator-overloading)
- [Array of Structures](#array-of-structures)
- [Pointer to Structures](#pointer-to-structures)
- [Functions with Structures](#functions-with-structures)
- [Passing Structures to Functions](#passing-structures-to-functions)
- [Dynamic Allocation of Structures](#dynamic-allocation-of-structures)
- [Structures and Classes](#structures-and-classes)
- [Best Practices](#best-practices)

<a name="top"></a>

## Introduction to Structures

- Structures katika programming zinatumika kutengeneza custom data types au tunaweza tukasema ADT(Abstract data type), abstraction kwa ajili ya student.Absstraction ni general model ya kitu!

## Declaring Structures

- Struct ni muhimu sana kwa mfano tuna function yetu inaitwa `displayCustomerDetails` na pia hiyo function inachukua parameter funtion zipo parameter 4 ambazo zinadisplay customer details, ila ili kuweza kusave mda wako unaweza na pia kama Bob anavyosema kwamba `The best function is that with no parameters at all`, badala ya kuwa na function tunatumia ambayo tunapush details kama customerID, customerName, customerEmail na isRegistered tutakuwa na struct ambayo itatuwezesha kufanya yote hayo, badala ya kuwa na hiyo function tutatumai strcut na ndani ya strcut tutakuwa na hao member wanne(4).
- Anza with the struct keyword ikifuatiwa na jina la struct yako ila kumbuka struct yako inabidi iwe katika PascaLCase `PascalNamingConventions` baada ya hapo tumia braces and ndani ya braces zako define data ambazo zinahitajika.
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

- Baada ya kufanya defintion ya struct zako,interpreter haitafanya memory allocation ya members wako wa struct hadi pale ambapo struct itatengenezwa kama umbile(object) kwenye program yako kwa kutengeneza umbile(struct) ambalo litachukua properties ambazo zipo kwenye struct yako.Muda mwingine struct zako zinaweza zikawa na default value.

```cpp
struct Mwanafunzi
{
    int miaka;
    string jina;
    string jinsia = "Female";
};
```

Kwenye upande wa jinsia kuna default value ambayo ni "Female".

## Accessing Structure Members

- Kuna namna nyingine ambayo unaweza kupass values zako katika array yako kwa kutumia kwenda kwenye umbile(object) katika njia nyepesi zaidi kwa kutumia curl braces

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

- Kuna namna nyingine ya kutengeneza instance ya struct yako

```cpp
#include <iostream>

using namespace std;

struct Customers
{
    int id = 13;
    string name;
    string email;
    bool isRegistered;
} customer;

int main(){

  customer.id = 13;
  customer.name = "Njox";
  return 0;
}
```

- Hakikisha pale unavyopass values by default ni muhimu kuzingatia values zipi zimekuwa assigned na values zipi hazijakuwa assigned.
- Accessing structure members kwenye program yetu tutaumia dot (.) operator ila kwan za inabidi kucreate a instance ya class yetu ambyo ni umbile(object).Anza na jina la struct yako iliyokuwa created ikifuatiwa na umbile(object) ambayo unatka iwe created.

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
    // create an instance of umbile(object) from Customer
    Customers customer;

    // give values

    // print customer details
    cout << "ID: " << customer.id << endl << "Name: " << customer.name << endl  << "E-mail: " << customer.email << endl;
    return 0;
}
```

- Ili kuapata access ya members wa hiyo structure tumia dot operator kutoka kwenye instance ya hiyo umbile(object)

```cpp
customer.id = 221;
customer.name = "Godbless Nyagawa";
customer.email = "godblessnyagawa@gmail.com";
```

## Arrays And Structs

| Feature          | Arrays                            | Structs                             |
|------------------|-----------------------------------|-------------------------------------|
| **Definition**   | Collection of elements of the same type, accessed by index. | User-defined data type that can hold elements of different types, accessed by name. |
| **Data Type**     | Homogeneous (all elements must be of the same type). | Heterogeneous (elements can be of different types). |
| **Size**          | Fixed size once declared.          | Size can vary, as it's determined by the sum of the sizes of its members. |
| **Memory Layout** | Contiguous memory allocation.      | Members are stored in separate memory locations. |
| **Access**        | Access elements using index (e.g., `arr[0]`). | Access members using their names (e.g., `structVar.member`). |
| **Initialization**| Can be initialized using an initializer list. | Members can be initialized individually or using an initializer list. |
| **Usage**         | Useful for storing and processing a collection of homogeneous elements. | Suitable for grouping related data with different data types. |
| **Example**       | `int numbers[5] = {1, 2, 3, 4, 5};` |
|                  | `struct Point { int x; int y; };`  |
|                  | `Point p = {10, 20};`              |

## Structured Binding

- Ili kuweza kupata values ya kila member wa umbile(object) ya `customer`, tutacreate new variable ambayo kila variable itahifadhi value yake katika program yako, Mfano wa value ambayo itahifadhi jina la customer wetu

```cpp
int customerName = customer.name;
string customerName = customer.name;
cout << customerName;
```

- Njia hapo juu ni sawa ila sio best practices kwa sababu ina consume mda kwa hiyo badala ya kutumia njia hiyo unaweza ukatumia structured binding kupata kila value, kwenye C++ wanaita `structured  binding` upande wa Javascript wanita `desctructuring` upande wa Python wanaita `unpacking`.

- Ili kuweza kufanya desctructuring kwenye structure yetu anza na `auto` keyword ikifuatiwa na sqaure brackets(mabano) ndani ya hayo mabano andika variables zote kwa kila member ambaye yuko katika umbile(object) yako katika oder inayotakiwa kinyume na hapo uatapata error baada ya kuandika kuandika variables zako tengeneza curl braces { } zako na ndani ya curl braces yako pass jina la umbile(object) yako ambayo iko katika program yako.

```cpp
auto [id, name, email, isRegistered] {customer};
// you can print individual members
cout << id;
```

## Nested Structures

- Nested structure ni kwamba ndani ya structure moja kunakuwa na structure nyingine ambayo imepitishwa katika struct mama,kwenye mfano wetu wa customer tunaweza tukawa na struct ya `email` ambayo imekuwa nested badala ya kuandika hivi

```cpp
struct Customers
{
    int id;
    string name;
    string workEmail;
    string emailPersonal;
    bool isRegistered;
};
```

Kwamba kunakuwa na struct kwa ajili ya email kwa ajili ya kazi na struct kwa email ambayo ipo kwa personal use,tunatumia nested struct kwamba kunakuwa na struct kwa ajili ya email kisha tunapitisha struct kwa ajili ya e-mail ndani ya Customers struct! Mfano

```cpp
struct Email
{
    string workEmail;
    string emailPersonal;
};
```

Baada ya struct email kutengenezwa kisha tunapitisha ndani ya Customers struct.

```cpp
struct Customers
{
    int id;
    string name;
    Email email; // email struct nested
    bool isRegistered;
};
```

Kutoka kwenye mfano hapo juu,tumepitisha Email struct kwenda kwenye Customers struct kwa hiyo tunakuwa na Email struct pamoja na jina la hiyo nested struct ambayo ni email.

Ili kuweza kupitisha value zako kwenye struct yako hakikisha Customer object imekuwa created na Email object imekuwa created pia.

```cpp
    Email email;
    Customers customers;
```

Baada ya hapo ili kuweza kutumia email member(work and personal email) lazima iwe initialized kwanza kama hapo juu `Email email;` ili kupitisha value zetu kwenye customer struct itakuwa hivi.

```cpp
    Customers customers{
        12,                                    // customer ID
        "Ronald",                              // customer name
        {"ronald@gmail.com", "ron@gmail.com"}, // Email struct with work email and personal email
        true,                                  // email is registered or not
    };
```

Kwamba customers object inakuwa na member wafuatao ,id, name, email ila kwenye email ni struct object hivyo tutatumia mabano singasinga kupitisha value ambapo object yetu email ina email kwa ajili ya work na personal `{"ronald@gmail.com", "ron@gmail.com"}` kisha baada ya hapo member mwingine ni bool value.

Ili kuweza kupata access ya work email na personal email iwe printed kwenye screen itakuwa hivi.Tutaumia dot operator kuweza kupata access ya object email kisha tutatumia tena dot operator kuweza kupata access ya personal au work email, au unaweza access email object moja kwa moja kisha ukatumia dor operator kupata work email pamoja na personal email.

```cpp
    cout << "Work E-Mail: " << customers.email.workEmail << endl;
    cout << "Personal E-Mail: " << customers.email.emailPersonal << endl;
    // Output Work E-Mail: ronald@gmail.com
    // Personal E-Mail: ron@gmail.com
```

## Comparing Structures

-Huwezi kufanya comparison ya structure moja na structure nyingine ila unaweza kufanya comparison ya individual comparion ya member moja na mwingine.

```cpp
#include <iostream>
#include <vector>

using namespace std;

struct Email
{
    string workEmail;
    string emailPersonal;
};

struct Customers
{
    int id;
    string name;
    Email email; // email struct nested
    bool isRegistered;
};

int main()
{
    Email email;
    Customers customer1{
        12,
        "Ronald",
        {"ronald@gmail.com", "ron@gmail.com"},
        true,
    };

    Customers customer2{
        12,
        "Ronald",
        {"ronald@gmail.com", "ron@gmail.com"},
        true,
    };

    if (customer1.email.emailPersonal == customer2.email.emailPersonal && customer1.email.workEmail == customer2.email.workEmail && customer1.id == customer2.id && customer1.name == customer2.name && customer1.isRegistered == customer2.isRegistered)
    {
        cout << "Equal " << endl;
    }

    return 0;
}

```

## Working With Methods

- Katika C++,unaweza ukadefine methods au kwa jina lingine zinaitwa member functions kwa ajili ya struct kama ambavyo unaweza ukawa na methods kwenye class.Utofauti kati ya struct na class katika C++ ni kwamba member wa struct ni public by default.Hapo chini ni mfano unaoelezea namna ya kufanya kazi na methods katika struct.

```cpp
#include <iostream>
#include <string>

using namespace std;

// Define a struct called Person
struct Person
{
    string name;
    int age;

    // Method to print the details of the person
    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Method to increment the age by a given value
    void incrementAge(int years)
    {
        age += years;
    }
};

int main()
{
    // Create an instance of the Person struct
    Person person1;
    person1.name = "John";
    person1.age = 25;

    // Call the printDetails method
    cout << "Before increment:" << endl;
    person1.printDetails();

    // Call the incrementAge method
    person1.incrementAge(5);

    // Call printDetails again to see the updated age
    cout << "After increment:" << endl;
    person1.printDetails();

    return 0;
}

```

## Operator Overloading

-

## Array of Structures

- Ili kuweza kutumia array of structures basi hapa tutatumia `vectors`, vectors ni dynamic arrays kwamba zinaongeneza na kupungua size bila ya kufanya hardconding yaani automatic.Ili kuweza kutumia hizo vector lazima header file iwepo `#include <vector>`, kwenye mfano pale juu tumetmia customer kama ni object yetu ila hapa tunaweza tukawa na na customer object ambayo inaweza ikachukua vitu vingine na hivyo vitu tunahifadhi ndani ya vector yetu,kutumia vector tunaanza na vector keyword na ikifuatiwa na <> ndani ya <> tunapitisha jina la object yetu au struct yetu ila sisi struct yetu ni Customers baada ya hapo nje ya <> litafuatia jina la vector yetu ambayo ni cutomers,ila vector inaoffer function inaitwa `push_back` ambayo inakuwezesha wewe kuweza kupitisha values zako.

```cpp
#include <iostream>
#include <vector>

using namespace std;

struct Customers
{
    int id;
    string name;
    string email;
    bool isRegistered;
};

int main()
{
    vector<Customers> customers;
    customers.push_back({23, "Neicore", "neicore@gmail.com", false});
    cout << customers[0].email;
    return 0;
}
```

Ili kuweza kufanya iteration katika vector tunatumia `for range` loop.

```cpp
#include <iostream>
#include <vector>

using namespace std;

struct Customers
{
    int id;
    string name;
    string email;
    bool isRegistered;
};

int main()
{
    vector<Customers> customers;
    customers.push_back({222, "Ronald", "ronald@gmail.com", true});
    customers.push_back({245, "Neicore", "neicore@gmail.com", false});

    for (auto customer : customers)
    {
        cout << customer.email << endl; 
        // Output: ronald@gmail.com 
        // neicore@gmail.com
    }
    return 0;
}
```

## Pointer to Structures

## Functions with Structures

## Passing Structures to Functions

## Dynamic Allocation of Structures

## Structures and Classes

## Best Practices

- Use Pascal Case naming convention, katika programming kuna naming conventions nyingi sana ila kwenye upande wa structures tutaumia Pascal naming convention mfano; Kila neno linalo anxza linakuwa capitalized
  `struct CustomerDetails`

- Whenever we create an instance of the class is the good practices to initialize it's memember kinyume na hapo utapata garbage value(junk value).Kwenye upnade wa string always huwa inakuwa initilaized kuwa empty string hivyo hakuna haja ya kuwa initialized.

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
    // create an instance of umbile(object) from Customer
    Customers customer;

    // initialize it's members
    cout << customer.name;
    // output:
    return 0;
}
```

Kuna baadhi ya code editors kama hujaweka values kwenye struct members wako kama ni int huwa inakuwa by default ambayo ni zero.

[⬆️ Return to Top](#top)
