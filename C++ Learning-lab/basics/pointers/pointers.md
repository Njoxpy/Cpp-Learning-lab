<!-- general explanation of the pointers should be in the foloowing formats
1. Introduction
2. Pointer declaration
  - Advantages and disantages of pointers
  - the indirection operator
  - the address operator
  - Diagramatic representation of pointers
3. Constant pointers
   - Data constant
   - pointer constant
   - bOth pointer and data are constant
4. Passing pointers to a function
5.Dynamic memory allocation
6. New
7. Delete
8. Pointers and arrays
9. array Of pointers
8.
-->

# Pointers

- [Introduction](#introduction)

- [Declaration](#declaration)

- [Constant Pointers](#constantpointers)

- [Pointers Best Practices](#bestpracticesforpointers)

- [Dynamic Memory Allocation](#dynamic-memory-alocation)

- [Advantages and Disadvtages Of Pointers](#advantages-and-disadvantages-of-pointers)

- [Array and Pointers Relationship](#relationship-between-pointers-and-arrays)

- [Pointer Arithmetic](#pointer-arithmetic)

- [Smart Pointers](#smart-pointers)
  - [Unique Pointers](#unique-pointers)
  - [Shared Pointers](#shared-pointers)
    <a name="top"></a>

## Introduction

## Declaration

## ConstantPointers

## BestPracticesForPointers

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

## Advantages and Disadvantages of Pointers

## Errors

## Dynamic Memory Alocation

## Pointer Arithmetic

## Relationship Between Pointers and Arrays

## Smart Pointers

- Dynamically reallocation katika cpp inawezekana kutokana na uwepo wa delete keyword, kwa mara ya kwanza tutaweza kuallocate memory kwa ajili ya pointers zetu ila inabidi kudeallocate memory kwenye pointer zetu

```cpp
int main(){
  int* x = new int;
  delete x;

  return 0;
}
```

- Assume kwamba tuna poinetrs kama elfu moja hivi kwa hiyo utakuwa ngumu katika kufanya memory deallocation sasa katika instance kama hii ndion inabidi kutumia smart pointers,
- Whenevr we allocate memory at the [heap](/C++%20Learning-lab/intermediate/memory_management/memory.md#), ni lazima tukkumbuke kutumia delete operator kfanya deallocation,kama hautafanya hivyo memory ambayo imekuwa allocated haita kuwepo mbeleni,pia jinsi ambayo tuna allocate more and more memory program yetu inapelekes ku consume meory kwa kiasi kikubwa sana na kupelkea kurun out of memory and `memory leak`, ni muhimu zipi ni [best practices](/C++%20Learning-lab/basics/pointers/pointers.md)
- pale ambapo unfanya jkazi na pointers katika programu yetu
  Kuna muda unakuta kwamba katika programu yako ambayo umenadika kuna pointers karibia elfu moja au labda inaweza ikawa umepewa kazi ya kumaintain program fulani hivyo itakuwa ngumu sana kufanya deallocation kwa pointers zote katika programu yetu kwa hiyo kwenye instance kama hii hapa ndio tunatumia `smart pointers` kuna aina mbili za smart pointers ambazo ni unique and shared pointers katika C++.

## Unique Pointers

- **smart pointers**,Ni aina ya pointers ambazo zina own kiasi fulani cha memory ambayo inapoint to(kind of pointer that owns a piece of memory it points to) ni kama `mwekezaji` ila anachukua asilimia chache.

<!-- remember to include the diagramatic representation of the pointer -->

- Hatuwezi tukawa na unique pointer mbili ambazo zote zimepoint kwenye same location.
- Ili tuweze kutumia unique pointers katiak program yetu ni muhimu kuinclude file katika standard libraray ambalo linaitwa `memory`, kupitia memory standard libraray kuna `unique-ptr` ambayo ni builtin [class](/C++%20Learning-lab/intermediate/object-oriented-programming/oop.md) kupitia unique pointer hakuta kuwa na hata kuallocate memory na pia kutumia delete operator kwa jili ya kuadeallocate memory kwenye programu

- Ili uweze kutumia unique pointer lazima ufanya kutumia header file katika stnadard library a,=mbayo ni `#include <memory>` ndani ya memory header file kuna type ambayo inatwa unique pointer class ambayo ni builtin function ndani ya main function katika programu yako tutaumia `unique_ptr<>` ndani ya mabano katika unique pointer tutaspecify aina ya pointer ambayo tunataka kutengeneza , pointer hiyo inaweza kuwa `int` au `string` baada ya hapo acha nafasi andika jina la variable ambayo unataka iwe create as a unique pointer itaweza ikawa ni number as a variable au nything else but is should be descriptive kiasi kwamba hata mtu mwingine akiwa anaangalia anajua umefanya nini, kwa upande wangu variable nitaipa jina la `x` baadya hapo tengeneza mabano ndani ya mabano tutatumia `new operator` kutengeneza pointer ya integer ila inategemeana wewe umetengeneza pinter ya aina gani, ndani yahayo mabano yako adnika data type ya pointer yako int.Basi kupitia hio programu yetu tumeweza ku create unique pointer ndani ya hiyo uqniue pointer kuna some builtin function functions ambazo zikoamhususi kwaajili ya kudelete(deallocation f the memory) ambazo zimekuwa created. Pia tunaweza kufanya dereferencing katika pointer yetu.

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
<!-- submit a request to codeblock open source on github that when working with unique pointers am getting this error
C:\Users\Njox\Desktop\c++\compPointers.cpp|9|error: no match for 'operator<<' (operand types are 'std::ostream {aka std::basic_ostream<char>}' and 'std::unique_ptr<int>')|-->

## Shared Pointers

- Kutokana na uwepo wa shared pointers tunaweza kuwa na pointer mbili ambazo zina point to the same memory location,kw aupnade wa unique pointers hatuwezi kuwa na two pointers ambazo zzina point kwa same memory locationn ila tukiwa na shared pointers tunaweza tukwa na pointers ambazo zinshare the same memory location na ndio maana zinaitwa shared pointers.
- Jinsi ya kutengeneza shared pointers ni same na jinsi y akutengeneza unique pointers kwa upnade wa syntax ila kuna baadhi ya vitu ni tofauti.

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

<!-- diagramatic prsentation of the sahred presentation
- How we can add animated video about sharde pointers into my respository so the we a user get into my respository will be able to understand about shared pointers in cpp -->

[⬆️ Return to Top](#top)
