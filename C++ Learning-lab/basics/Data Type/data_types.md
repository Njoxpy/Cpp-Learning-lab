# Data types

- Data types
    - [Introduction](#introduction)
    - [Types of data types](#types-of-data-types)
        - [primitive data types](#primitive-data-types)
        - [Derived data types](#derived-data-types)
        - [User defined data types](#user-defined-data-types)
    - [Advantages](#advantages)
    - [Disavantage](#disadvantage)


# Introduction
- Data types hutumika kuamua ukubwa na aina ya data inayoweza kutunzwa
- Variables na arrays ni makontena katika programu yetu ambayo hutunza data mbalimbali. Sasa, kulingana na datatype uliyotumia operating system ya kompyuta ina tenga nafasi inayoweza kuhifadhi hiyo data.
- kwa mfano tuangalie hii programu:

    ```cpp
     int age = 13;
     ```

- Hapa, variable ``age`` ni ya data type ``int`` . Hii inamaanisha kwamba variable yetu inaweza kuhifadhi integer yenye byte 2 au 4

# Types of data types
1. **Primitive Data types:** Hizi ni data types ambazo zinaweza kutumika moja kwa moja kudeclare variables. Primitive data types kwenye C++ ni:
    - Integer
    - Character
    - Boolean
    - Floating point(float)
    - Double floating point (double)
    - Void

2. **Derived Data types:** Hizi ni datatypes ambazo zimeundwa kutokea kwa primitive data types. Nazo ni;
    - Function
    - Array
    - Pointer
    - Reference

3. **User defined data types:** Hizi ni datatypes ambazo hutengenezwa na programmer mwenyewe. Hizi user defined datatypes kwenye C++ ni;
    - Class
    - Structure
    - Union
    - Enumeration
    - Typedef defined Datatype

# Datatype Modifier
Datatype modifier hutumika pamoja na primitive data types kumodify urefu wa data ambayo datatype husika inaweza kuhifadhi. Data type modifier kwenye C++ ni;
   - Signed
   - Unsigned
   - Short
   - Long

Jedwali hapa chini linaonyesha range ya ukubwa wa primitive data types na ukubwa wa modified primitive data types:

<table>
    <tr>
        <th>Data Type</th>
        <th>Size(byte)</th>
        <th>Range</th>
        <th>
    </tr>
    <tr>
        <td>short int</td>
        <td>2</td>
        <td>-32,768 mpaka 32,767</td>
    </tr>
    <tr>
        <td>unsigned short int</td>
        <td>2</td>
        <td>0 mpaka 65,535</td>
    </tr>
    <tr>
        <td>unsigned int</td>
        <td>4</td>
        <td>0 mpaka 4,294,967,295</td>
    </tr>
    <tr>
        <td>int</td>
        <td>4</td>
        <td>-2,147,483,648 mpaka 2,147,483,647</td>
    </tr>
    <tr>
        <td>long int</td>
        <td>4</td>
        <td>-2,147,483,648 mpaka 2,147,483,647</td>
    </tr>
    <tr>
        <td>unsigned long int</td>
        <td>4</td>
        <td>0 mpaka 4,294,967,295</td>
    </tr>
    <tr>
        <td>long long int</td>
        <td>8</td>
        <td>-(2^63) mpaka (2^63)-1</td>
    </tr>
    <tr>
        <td>unsigned long long int</td>
        <td>8</td>
        <td>0 mpaka 18,446,744,073,709,551,615</td>
    </tr>
    <tr>
        <td>signed char</td>
        <td>1</td>
        <td>-128 mpaka 127</td>
    </tr>
    <tr>
        <td>unsiged char</td>
        <td>1</td>
        <td>0 mpaka 255</td>
    </tr>
    <tr>
        <td>float</td>
        <td>4</td>
        <td>-3.4x10^38 to 3.4x10^38</td>
    </tr>
    <tr>
        <td>double</td>
        <td>8</td>
        <td>-1.7x10^308 mpaka 1.7x10^308</td>
    </tr>
    <tr>
        <td>long double</td>
        <td>12</td>
        <td>-1.1x10^4932 mpaka 1.1x10^4932</td>
    </tr>
    <tr>
        <td>wchar_t</td>
        <td>2 or 4</td>
        <td>1 wide character</td>
    </tr>

</table>

```
Note:
Thamani za range zilizopo katika jedwali hapo juu zinatofautiana na aina ya compiler. Kwenye  mfano hapo juu tumetumia GCC 32 bit
```

Ukitaka kupata size ya data type tofauti kwenye computer yako tumia programu hii:
```cpp
#include <iostream>
using namespace std;

int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   
   return 0;
}
```

# typedef Declarations
typedef hutumika kuyapa majina mapya data types. ifuatayo ni sintaksia rahisi kufafanua aina mpya ya data type kwa kutumia typedef
```cpp
typedef type newname;
```

kwa mfano, programu ifuatayo inaiambia compiler kuwa saa ni jina jingine la int;
```cpp
typedef int saa;
```

hivyo, declaration ifuatayo ni sahii na inatengeneza integer iitwayo urefu;
```cpp
saa urefu;
```
# Advantages:
1. Data types zinatupa njia ya kupanga data ndani ya programu yetu, hivyo hutusaidia kuelewa na kutunza program yetu kwa urahisi.
2. kila data type ina range ya thamani inayoweza kutunza, hivyo hutupatia udhibiti sahihi juu ya data gani inaweza kutunzwa.
3. Data types zinapunguza makosa ndani ya program kwa kuweka sheria kali juu ya jinsi data zinaweza kutumika.
4. C++ ina aina mbalimbali za datatypes, hivyo humuwezesha developer kuchagua datatype inayoofa matumizi yake.

# Disadvantage:
1. Matumizi yasiyo sahihi ya data type huleta makosa ndani ya programu.
2. Data types kama long doubles or char arrays huchukua nafasi kubwa, hivyo zikitumika sana zinatumia hifadhi kubwa na hupunguza uwezo wa compiler 

   




