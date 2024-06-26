# Pointers

- [Introduction](#introduction)
- [Declaration](#declaration)
- [Constant Pointers](#constantpointers)
- [Passing Pointers To Functions](#passing-pointers-to-functions)
- [Dynamic Memory Allocation](#dynamic-memory-alocation)

- [Advantages and Disadvtages Of Pointers](#advantages-and-disadvantages-of-pointers)

- [Array and Pointers Relationship](#relationship-between-pointers-and-arrays)

- [Pointer Arithmetic](#pointer-arithmetic)

- [Smart Pointers](#smart-pointers)
  - [Unique Pointers](#unique-pointers)
  - [Shared Pointers](#shared-pointers)

- [Pointers Best Practicess](#pointers-best-practicess)

    <a name="top"></a>

## Introduction

Pointer ni special variable ambayo inachukua address ya variable nyingine katika memory.Mfano tunaweza tukawa na variable ambayo inaitwa age na values yake ni 10 ila katika memory variable ni kama label ya variable yako ila hiyo variable ambayo ni age inakuwa na location yake katika memory.Hivyo tunaweza tukafanya declaration ya variable nyingine mabayo tunaita pointer ambayo inachukua address ya age variable.

**Kwanini Pointers?**

1. Passing Large objects: Katika program yetu tunaweza tukawa na function kwa ajili ya kufanya kazi fulani ila kama inafanya passing ya data ambazo ni kubwa inabidi kutumia pointer ili kuweza kurahisisha kazi yako.

2. Dynamic Memory Allocation. Katika sehemu ya memory management nimeeleza vizuri kuhusu [memory management](/C++%20Learning-lab/intermediate/memory_management/memory.md) na kwa kwa namna gani unaweza ukatumia kwa ajili ya kufanya memory alloaction, dynamic memory alloaction katika C++ ni pale ambapo memory yetu inakuwa adjusted kutokana na inputs ambazo zinakuwa ndani ya program yako.Kufanya dynamic memory allocation katika C++ tunatumia `new` keywpord kwa ajili ya kufanya alloaction na `delete` keyword kwa ajili ya kufanya deallocation.

3. Enabling Polymorphism.

## Declaration

Pointer ni variable ambayo imechukua address ya variable nyingine katika memory. Variable katika C++ ina address yake katika memory na ili kuweza kupata address ya variable yako katika memory tunatumia ampresand operator au tunaita *address of operator*: Angalia mfano hapo chini

```cpp
#include <iostream>

using namespace std;

int main(){
    int age = 20;
    cout << "Address of age is: " << &age;
    // output: 0x89787ff8ec
    return 0;
}
```

Address ya variable inakuwa katika hexadecimal number. Value ya address ya pointer yangu hapo juu inaweza ikawa inatofautiana na yako katika computer yako na pia address ya variable yako huwa inabadilika hivyo usishange kwamba mara ya kwnza ukirun msimbo wako unapata output tofauti.

Kufanya declaration ya integer pointer tutuanza na int keyword ikifuatiwa na nyota yaani asterisk kisha tutaipa pointer yetu jina lako kama ambayo unazipa variable zingine majina ila ni muhimu kuzingatia kwa jina la pointer yako liwe meaningfull na pia liwe descriptive, hivyo integer pointer yetu tutaipa jina la ptr na tutafanya initilaization ya address ya age kutoka kwenye mfano pale juu.

```cpp
    int* ptr = &age;
```

Kwenye mfano hapo juu tmefanya declaration ya pointer variable ptr ambayo ni integer ila imechukua memory location(address) ya integer age.

integer pointer yetu ina point kwa integer pointer, endapo tujijaribu kubadili integer yetu kuwa double au float kwenye age tutapata error: Mfano

```cpp
#include <iostream>

using namespace std;

int main()
{
  // badili int kuwa double
    double age = 20;
    cout << "Address of age is: " << &age;
    // output: 0x89787ff8ec

    int *ptr = &age;

    return 0;
}
```

```cpp
error: cannot convert 'double*' to 'int*' in initialization
   10 |     int* ptr = &age;
      |                ^~~~
      |                |
      |                double*
```

Hivyo kama umetengeneza integer data type na kutengeneza pointer yake ni muhimu pointer variable yako iwe sawa na ile ya data type yako.Je baada ya kufanya declaration ya pointer yako tunaweza kufa ya nini ya pointer yako?

Ili kuweza kupata value au data(value) ya pointer yako tutatumia `indirection(dereference operator)`, indirection operator inaanza na * (nyota) asterisk ikifuatiwa na jina integer pointer yako au kama umetumia float inaweza ikawa float pointer, kwa kutumia dereference operator  utapata value ya integer pointer yako.

```cpp
    cout << *ptr; // 20
```

Kwenye njia ya kawaida kama umefa nya declaration ya variable age na kuipa value labda 10 unaweza kubadili ya kuweka value iwe 30, Mfano:

```cpp
int age = 20;
age = 30;
cout << age; // 30
```

Kwenye upande wa pointers unaweza kufanya kitu kama hivyo kwa kutumia dereference operator ili uweze kupata value ya kisho utaipa value nyingine.Kitendo ya kubadili value ya integer pointer kunapelekea kunadilika kwa value ya age pia, Mfano

```cpp
*ptr = 30;
cout << *ptr; // 30
cout << "\n";
cout << age; // 30

```

## ConstantPointers

- Kwenye upande wa constants katika pointers tunaweza tukawa na vitu vitatu

1. Data is Constant: Hapa data ni constant ila pointers sio constant.Kwa hiyo unaweza ukafanya declaration ya variable yako labda x sawa na 20 ila ukatengeneza integer pointer ambayo itapoint kwenye x integer na hiyo pointer integer yako inaweza ikawa constant hivyo endapo ukajaribu kufanya dereference ya variable yako na kuipa value kama 30 haitawezekana kwa sababu kitendo hicho ni sawa na kuwa na constant yako ambayo ni x ni sawa na kufanya const ya x kuwa 30 hivyo haitawezekana. Angalia mfano jisni ya declaration ya pointer ambayo data zake ni constant.

```cpp
#include <iostream>

using namespace std;

int main()
{
    // constant pointers

    // 1. data is constant
    const int x = 20;
    const int* ptr = &x;

    cout << *ptr;
    return 0;
}
```

Kumbuka tumesema kwamba pointer ni ile variable ambayo inachukua adrres ya variable nyingine katika memory hiyo kama data zetu za pointer ni constant hiyo pointer yetu inauwezo wa kuweza kufanya pointing katika variable nyingine katika program yetu.

```cpp
    int y = 10;
    ptr = &y;
```

2. Pointer ni constant. Pointer ni constant ila data sio constant.Ili kuweza kudefine pointer ambayo ni constant katika program yako utafanya njia ya kawaida ya kufanya declration ial kwenye ile data type yako ambayo ni pointer, mfano kwenye integer pointer baada ya asterisk itafuta const keyword ikimaanisha kwamba pointer yako ni constant.Kumbuka kama pointer yetu ni constant hatuwez kubadili value yake na value yake tunapata kwa kutumia &.

```cpp
    int x = 20;
    int *const ptr = &x;
```

Kutokana na kuwa na constant pointer hatuwezi kubadili address ya constant pointer yetu.Mfano hao chini kufanya hiyo tutapata error.

```cpp
    int x = 20;
    int *const ptr = &x;
    
    int y = 30;
    ptr = &y;
```

error

```cpp
error: assignment of read-only variable 'ptr'
   14 |     ptr = &y;
      |     ~~~~^~~~
```

3. Both Data na pointer ni constant.Katika situation kama hii pointer yetu inakuwa constant na pia data zetu ni constant. Hivyo hatuwezi kubadili chochote katika program yetu.

```cpp
    const int x = 20;
    const int *const ptr = &x;
```

## Advantages and Disadvantages of Pointers

## Errors

## Passing Pointers To Functions

- Mwanzo kabisa hapo juu nimeandika kwamba pointers zinaweza zikatumika kwa ajili ya kufanya passing large objects kwa kutumia reference kwenye data.Mfano tutatengeneza function yetu kwa ajili ya kufanya addition kisha tutacall function yetu inside.

```cpp
#include <iostream>

using namespace std;

// addition
int addition(int* number1, int* number2, int* result){
    *result = *number1 + *number2;
    return *result;
}

int main(){
    int number1, number2, result;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    addition(&number1, &number2, &result);

    cout << result;

    return 0;
}
```

## Relationship Between Pointers and Arrays

- Ukifanya declaration ya array yako katika C++, Mfano:

```cpp
    int numbers[] = {10, 20, 30};
    cout << numbers;
```

Baada ya kufanya cout ya numbers utapata pointer ambayo inapoint kwenye element ya kwanza katika array yako ambayo ni number[] array.Ukitumia indirectional operator utapata value ya array yako ila ya first element.

```cpp
    int numbers[] = {10, 20, 30};
    cout << *numbers; // 10
```

Pia tunaweza tukawa na integer pointer ambayo inapoint kwenye array yetu ya first element kwa sababau ni pointer.Hivyo ukitumia imdirectional operator tutapata value ya first element kwenye array ila ukitumia reference operator tutapata address ya first element kwenye array.

## Dynamic Memory Alocation

- Application ya pili ya pointers ni kwenye dynamic memory allocation,Array ili iweze kutumika inabidi iwe initiliazed kwamba member wangapi wake kwenye array yetu ili kuweza kutumia memory vizuri na hata kama array ispo kuwa initialized bado ni practice mbaya kwa sababu interprter inafanya allocation ya memory kubwa kwa sababau haijui je ni kiasi gani cha memory kinahitaji kwa ajili ya program yako basi hapa ndio dynamic memory allocation inatumika,kwamba wakati wa runtime wa program yetu tunafanya llocation ya space ya baada ya program kuwa executed tuna free up space.

```cpp
   int* numbers = new int[10];
```

Kwenye mfano hapo juu ndio namna dynamic memory allocation inavyofanyika kwenye program yetu,Tumefanya declaration na initialization ya array pointer,tunaanza na new operator  kisha target_type ambayo inaweza ikawa integer au characters,ila target type yetu ni integer na ndani ya mabanao tunaweka intial size, `new int[10]` hii itarudisha integer pointer na kisha inabidi tuhifadhi kwenye integer pointer inaitwa numbers,kmbuka kufanya declaration ya pointer yako kwa kutumia * kinyume hapo haitawezekana kwa sababu itaonekana kama unataka kufanya conversion ya integer pointer array kwenda integer.

- Dynamic memory allocation katika C++ inatokea kwenye sehemu ya memory inaitwa heap au free stack,tunavyofanya allocation ya pointer yetu katika program yako anayehusika kwa ajili ya kufree space katika memory yako ni wewe programmer na sio mtu mwingine endapo unashindwa kufreespace katika memory yako itapelekea program kucrash na pia kusababisha memory leak,hakikisha unapitia sehemu hii ya [memory management](/C++%20Learning-lab/intermediate/memory_management/memory.md) kuweza kujua zaidi kuhusu memory allocation.Hivyo ni muhimu kufanya deallocation ya pointer yako baada ya kufanya allocation kwa kutumia delete operator.

```cpp
#include <iostream>

using namespace std;

int main()
{
    // allocation using new operator
    int *numbers = new int[10];
    // deallocation using delete operator
    delete[] numbers;
    return 0;
}
```

Kwa sababu kazi ya kufanya deallocation inafanywa na programmer,kufanya deallocation tunatumia delete operator ikifuatiwa na jina pointer yetu ambayo ni numbers ila kwa sababu ni integer pointer array lazima kuweka square brackets baada ya delete operator,pia ni vizuri kufanya reset ya pointer yako kuwa nullptr baada ya kufanya allocation na deallocation,Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    // allocation using new operator
    int *numbers = new int[10];
    // deallocation using delete operator
    delete[] numbers;
    // reset to nullptr
    numbers = nullptr;
    return 0;
}
```

- Static memory allocation: Wakati wa declaration  wa  variable yako anayehusika na kufanya memory alloaction sio wewe bali ni compiler.

```cpp
   int numbers[1000];
```

Declartion ya array yetu imefanyika na hiyo array inachukua members 1000 na yote haya yanafanyyika katika sehemu ya memory ambaye inaitwa stack kwamba kitendo cha kufanya allocation na deallocation ya memory kwenye program yako kinafanywa na compiler yenyewe na sio program,program inakuwa executed ila pale ambapo kutakuwa na return statement kwenye program yako hapo ndio memory inakuwa deallocated(allocated) kwenye program yako.

## Pointer Arithmetic

Pointer arithmetic katika C+ inakupa uwezo wa kifanya arithmetic operations katika pointers. Pale unapo perform aithmetic katika pointer, jibu linatokana na na size ya aina ya data ambayo pointer yako inapoint kwenye hiyo data.

- Adding and Subtracting Integers from Pointers

```cpp
#include <iostream>

using namespace std;

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int *ptr = array; // Pointer to the first element of array

    // Adding an integer to a pointer moves the pointer forward
    ptr = ptr + 1; // Now points to the second element (20)

    // Subtracting an integer from a pointer moves the pointer backward
    ptr = ptr - 1; // Now points back to the first element (10)

    // Accessing elements using pointer arithmetic
    cout << *ptr << endl; // This will print 10

    // Adding more than 1
    ptr = ptr + 3; // Now points to the fourth element (40)

    // Subtracting more than 1
    ptr = ptr - 2; // Now points to the second element (20)

    cout << *ptr << endl; // This will print 20


    return 0;
}
```

Array inaanzia katika index ya 0 na endapo ukajaribu kama index ya element ambayo ipo nyuma ya element ambayo ipo index ya sifuri utapata garbage value.

- Increment and Decrement Operators

```cpp
#include <iostream>

using namespace std;

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int *ptr = array; // Pointer to the first element of array

    // Incrementing a pointer moves it to the next memory location of its type
    ptr++; // Now points to the second element (20)

    // Decrementing a pointer moves it to the previous memory location of its type
    ptr--; // Now points back to the first element (10)

    cout << *ptr << endl; // This will print 10

    return 0;
}
```

- Pointer Arithmetic with Arrays

```cpp
#include <iostream>

using namespace std;

int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int *ptr = array; // Pointer to the first element of array

    // Using pointer arithmetic to access elements
    cout << *(ptr + 2) << endl; // This will print 30

    // Equivalent to:
    cout << array[2] << endl; // This will also print 30

    return 0;
}
```

- 

- Don't delete the pointer twice
  `example:`

```cpp
int main(){
  int* x = new int;
  delete x;
  delete x;

  return 0;

  // error: malloc: xxxx error for object
  //  error: malloc xxx set a breakpoint
}
```

- Rember to deallocate meory of the pointers in the program using the delete opertory but as the program gets bigger or we may be maintaining legacy application so it's the best practices to use smart pointers to save time and code refactoring and clean code.

- Dynamically reallocation katika cpp inawezekana kutokana na uwepo wa delete keyword, kwa mara ya kwanza tutaweza kuallocate memory kwa ajili ya pointers zetu ila inabidi kudeallocate memory kwenye pointer zetu

```cpp
int main(){
  int* x = new int;
  delete x;

  return 0;
}
```

- Assume kwamba tuna poinetrs kama elfu moja hivi kwa hiyo utakuwa ngumu katika kufanya memory deallocation sasa katika instance kama hii ndion inabidi kutumia smart pointers,
- Whenevr we allocate memory at the [heap](/C++%20Learning-lab/intermediate/memory_management/memory.md#), ni lazima tukkumbuke kutumia delete operator kfanya deallocation,kama hautafanya hivyo memory ambayo imekuwa allocated haita kuwepo mbeleni,pia jinsi ambayo tuna allocate more and more memory program yetu inapelekes ku consume meory kwa kiasi kikubwa sana na kupelkea kurun out of memory and `memory leak(program is consuming more and more memory)`, ni muhimu zipi ni [best practices](/C++%20Learning-lab/basics/pointers/pointers.md)
- pale ambapo unfanya jkazi na pointers katika programu yetu
  Kuna muda unakuta kwamba katika programu yako ambayo umenadika kuna pointers karibia elfu moja au labda inaweza ikawa umepewa kazi ya kumaintain program fulani hivyo itakuwa ngumu sana kufanya deallocation kwa pointers zote katika programu yetu kwa hiyo kwenye instance kama hii hapa ndio tunatumia `smart pointers` kuna aina mbili za smart pointers ambazo ni unique and shared pointers katika C++.

## Smart Pointers

- Kuna aina mbili ya smart pointers ambapo kuna uniqe pointer pamoja na shared pointer.

## Unique Pointers

- **Unique pointers**,Ni aina ya pointers ambazo zina own kiasi fulani cha memory ambayo inapoint to(kind of pointer that owns a piece of memory it points to) ni kama `mwekezaji` ila anachukua asilimia chache. Hatuwezi tukawa na unique pointer mbili ambazo zote zimepoint kwenye same location.

- Ili tuweze kutumia unique pointers katika program yetu ni muhimu kuinclude file katika standard library ambalo linaitwa `memory`, kupitia memory standard libraray kuna `unique-ptr` ambayo ni builtin [class](/C++%20Learning-lab/intermediate/object-oriented-programming/oop.md) kupitia unique pointer hakuta kuwa na hata kuallocate memory na pia kutumia delete operator kwa jili ya kuadeallocate memory kwenye programu

- Ili uweze kutumia unique pointer lazima kutumia header file katika standard library ambalo ni `#include <memory>` ndani ya memory header file kuna type ambayo inatwa unique pointer class ambayo ni builtin function ndani ya main function katika programu yako tutatumia `unique_ptr<>` ndani ya mabano katika unique pointer tutaspecify aina ya pointer ambayo tunataka kutengeneza , pointer hiyo inaweza kuwa `int` au `string` baada ya hapo acha nafasi andika jina la variable ambayo unataka iwe created kama unique pointer itaweza ikawa ni number as a variable au anything else ambacho ni valid katika C++ but is should be descriptive kiasi kwamba hata mtu mwingine akiwa anaangalia anajua umefanya nini, kwa upande wangu variable nitaipa jina la `x` baada ya hapo tengeneza mabano ndani ya mabano tutatumia `new operator` kutengeneza pointer ya integer ila inategemeana wewe umetengeneza pointer ya aina gani, ndani yahayo mabano yako adnika data type ya pointer yako int.Basi kupitia hio programu yetu tumeweza ku create unique pointer ndani ya hiyo unique pointer kuna some builtin function functions ambazo zikoamhususi kwaajili ya kudelete(deallocation f the memory) ambazo zimekuwa created. Pia tunaweza kufanya dereferencing katika pointer yetu.

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> x(new int);
    cout << x;

    // dereferencing
    *x = 20;
    cout << *x;

    return 0;
}

```

- **NOTE**
  - Kupitia uniqe pointers hatuwezi kuperfrom arithemetic operation yoyote katika programu yetu.Ila tunaweza kufanya dereference.
- Kam unatumia codeblock kuandiak code yako kuna error inakuwa ukiwa unadeal na unique pointer pale unapotaka kupata memory location ya pointer yako unaweza ukatumai code editor nyingine ili kuweza kuepuka hili.

## Shared Pointers

- Kutokana na uwepo wa shared pointers tunaweza kuwa na pointer mbili ambazo zina point to the same memory location,kw aupnade wa unique pointers hatuwezi kuwa na two pointers ambazo zzina point kwa same memory locationn ila tukiwa na shared pointers tunaweza tukwa na pointers ambazo zinshare the same memory location na ndio maana zinaitwa shared pointers.
- Jinsi ya kutengeneza shared pointers ni same na jinsi y akutengeneza unique pointers kwa upnade wa Sintaksia ila kuna baadhi ya vitu ni tofauti.

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main()
{

    shared_ptr<int> x(new int);
    cout << x;

    // but with shared pointers we can a pointer pointing tio the same location

    shared_ptr<int> y(x);
    cout << y;

    return 0;
}

```

- Pia tunaweza kuangalia kama je shared pointers zina share the same memory loaction kwa kutumia if statement in cpp.

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main()
{

    shared_ptr<int> x(new int);
    cout << x;

    shared_ptr<int> y(x);
    if(x == y)
    {
        cout << "Zipo sawa";
    }
    else
    {
        cout << "Hazipo sawa";
    }
    // Zipo sawa
    return 0;
}
```

## Pointers Best Practicess

- Ni muhimu kufanya initialization ya pointer yakoi wakti wa kufa ya declaration kinyume na hapo italeta garbage value na kupelekea kupata memory leak.au unaweza ukafanya intiliaztion ya pointer variable kuwa null pointer(nullptr), null pointer katika C++ ni pointer ambayo haipoint sehemu yoyote. na mbeleni tunaweza kuangalia kama ni nullptr au sio.Ila zamani walitumia NULL au 0.

```cpp
int* ptr = nullptr;
```

[⬆️ Return to Top](#top)
