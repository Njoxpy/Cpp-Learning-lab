# Memory Management in C++

- [Introduction](#introduction)
- [Memory Allocation](#memory-allocation)
  - [Stack Memory](#stack-memory)
  - [Heap Memory](#heap-memory)
- [Pointers and Memory](#pointers-and-memory)
- [Dynamic Memory Allocation](#dynamic-memory-allocation)
  - [new and delete Operators](#new-and-delete-operators)
  - [malloc and free Functions](#malloc-and-free-functions)
- [Memory Leaks](#memory-leaks)
- [Smart Pointers](#smart-pointers)
- [RAII (Resource Acquisition Is Initialization)](#raii-resource-acquisition-is-initialization)
- [Memory Allocation Strategies](#memory-allocation-strategies)
- [Memory Management in Containers and Data Structures](#memory-management-in-containers-and-data-structures)
- [Memory Safety](#memory-safety)
- [Memory Debugging Tools](#memory-debugging-tools)
- [Exception Safety](#exception-safety)
- [Memory Management Best Practices](#memory-management-best-practices)
- [Common Pitfalls](#common-pitfalls)

<a name="top"></a>

## Introduction

Memory management in C++ involves allocating and deallocating memory for objects and data structures. C++ provides several mechanisms for memory management, including:

- Memory management katika C++ inahusisha allocating na deallocating memory kwa ajili ya objects na data structures wakati wa runtime katika program yako.Katika C++ kuna njia mbalimbali za memory management.

- Kuna utofauti kati ya compile time na runtime katika programming,Compile time ni kipindi kile ambacho source code za program zinakuwa trasanslated kwenda katika machine code au bytecode na compiler. Ila runtime ni kipindi ambacho compiled code inakuwa executed na compiler.

*Kwanini memory management ni muhimu katika C++* Kumbuka kwamba arrays zinahifadhi data za same type, kwa hiyo mud mwingi memory inakuwa alklocated kwa ajili ya array wakati wa declraration. Kuna muda mwingine pia inaweza ikatekea exact memory haijawa determined hadi pale muda wa runtime. Ili kuweza kuzuia situation kama hii, tunafanya declaration ya array ambayo inakuwa na maximum size lakini memory itakuwa unuse yaani haitatumika. Kuweza kuzuia wastage ya memory, tunatumia new operator ili kufanya allocation ya memory dynamiccally wakati wa runtime.

## Memory Allocation

- Memory Allocation ni moja kati ya concept muhimu sana kwenye upande wa memory management. Kuna aina tatu za memory allocationb katika C++,

1. Static Memory Allocation. Memory kwa ajili ya variables,inkuwa allocated wakati wa kuwa compiled na inakuwa deallocated pale program inatoka kwenye scope ambayo imekuwa declared.

```cpp
int main() {
    int num = 10; // memory for num is allocated statically
    // ...
    return 0;
} // memory for num is deallocated upon exiting main()
```

2.Automatic Memory Allocation. Memory kwa jili ya local variable inakuwa llocated pale program inakuwa ndani ya scope ambayo imekuwa declared na inakuwa deallocated pale ambapo program ina exit ile scope yake.Na hii mara nyingi ndio inaitwa stack memory.

```cpp
void foo() {
    int num = 10; // memory for num is allocated automatically
    // ...
} // memory for num is deallocated upon exiting foo()

```

3.Dynamic Memory Allocation. Memory allocation na deallocation inakuwa inafanywa na programmer mwenyewe kwa kutumia `new` na `delete` operators. Memory allocation katika dynamic inakuwa allocated kutoka kwenye heap.

### Stack Memory

- Stack ni eneo katika memory ambalo  linatumika katika C++ na C, stack inatumika kwa ajili ya local variables, function parameters na temporary data storage. Memory inakuwa automatically allocated na kuwa deaallocated pale amabpo function inakuwa called,, na hata pia pale ambapo baada ya kufanya declaration ya local variable na kitu program yetu kutoka nje ya local variable hapo deallocation inafanywa na compiler yenyewe.Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    // declare local variable
    int age = 20;

    void greetUser(){
        cout << "Hello Welcome!" << endl;
    }
    return 0;
}
```

Mfano kwenye program yetu hapo juu kuna local variable ambayo ni `age` na pia kuna function ambayo ni `greetUser()` local variable yetu age baada ya kuwa declared inahifadhiwa kwenye stack kwasababu ni local na pia allocation inafanyika kwenye stack baada ya hapo void ya `greetUser()` baada ya function kuwa declared memory allocation imekuwa allocated na baada ya function kuitwa kwenye progtram yetu au hata kama itakuwa na return value hapo chini deallocation ya program yetu itatokea.

- Sifa mojawapo ya stack memory allocation baaada ya kuwa executed inakuwa flashed nje ya memory kwenye stack automatically.Hivyo value yoyote inayohifadhiwa ndani ya stack inakuwa acessed kabla ya kuwa executed hauwezi kupata access ya code yako.

## Sifa Za Stack

- Stack memory inakuwa managed na sytem. Stack ni eneo katika memory ambalo linakuwa managed na system,linakuwa na fixed size na size inakuwa determined za operating system au inakuwa automatically determined na compiler.
- Stack ni eneo ambalo local variables na function call information zinakuwa stored.
- Memory allocation na deallocation katika stack inafanyawa na compiler yenyew tofauti na heap memory, pia memory deallocation zinafanyika pale ambapo kutakuwa na function calls pamoja na returns.
- Access kwenye stack zipo faster ukifananisha na heap memory kwa sababu ni rahisi na pia zinapredicatble alloaction mechanism na pia kuna dealloaction mechanism.
- Size ya stack is ndogo ukifananisha na heap memory katika program yako.
Mfano wa Stack Allocated variables ni pamoja na function parameters na local variables.
- Stack memory ina space ndogo ukifananisha na heap memory.
- Memory allocation na deallocation ni haraka ukifananisha na heap memory allocation.

```cpp
int main()
{
  // All these variables get memory
  // allocated on stack
  int a;
  int b[10];
  int n = 20;
  int c[n];
}
```

### Heap Memory

- Heap ni eneo katika memory ambalo linakuwa allocated kwa ajili ya dynamic memory allocation wakati wa execution ya program yako.Kinyume na stacl, ambayo inatumika kwa ajili ya automatic memory allocation, heap inakupa kibali kwa ajili ya dynacmic memory alloaction memory inakuwa allocated na kuwa deallocated wakati wa runtime pale inapotumika.

```cpp
int main()
{
   // This memory for 10 integers
   // is allocated on heap.
   int *ptr  = new int[10];
}
```

```cpp
#include <iostream>
using namespace std;
 
int main()
{
 
    int a = 10; // stored in stack
    int* p = new int(); // allocate memory in heap
    *p = 10;
    delete (p);
    p = new int[4]; // array in heap allocation
    delete[] p;
    p = NULL; // free heap
    return 0;
}
```

- Sifa za Heap memory

  1. Dynamic Memory Allocation: Memory allocation katika heap ni dynamic, ikinmaanisha kwamba memory inakuwa lloacted na kuwa deallocated pale inapohitajika wakati wa kufanya execution kwa kutumia new na delete operator.

  2. Size Flexibility: Heap inatoa kibali kwa jkili ya kufanya alloacation ya memory block ambayo size yake inakuwa determined wakati wa runtime.Flexibility ni muhimu pale ambapo pale unafanya kazi na data structure ya variable size au pale ambapo size ya data yako haujui wakati wa compilation.

  3. Lifetime Control: Memory inayokuwa lloacted katika heap inabaki hadi pale ambapo inakuwa deallocated na kwa kutumia delete operator au hadi pale program itakavyofanya termination ila kwa imekuwa created kwa kutumia new operator inabidi iwe deallocated kwa kutumia delete keyword katika program yako.

  4. Manual Memory Mnagement: Kinyume na styack memory, ambayo inakuwa managed na compiler, heap memory inahitaji amnual management na programmer. Ni kazi ya programmer kufanya kufanya alloaction pale ambapo inahitajika na na pia kufanya deallocation pale ambapo inahitajika,kinyime na hapo itapelekea kupata memory leaks.

  5. Memory alloaction na deallocation kwenye heap zinafanywa kwa kutumia `new` `delete`, `malloc` pamoja na `freeze`.

![Heap ans Stack Structure](/assets/stack%20heap.png)

## Pointers and Memory

## Dynamic Memory Allocation

- Dynamic Memory Allocation(DMA) katika C++ inakuwa managed na programmerv  mwenyewe katika compiler hizo ni muhimu kuzingatia safe procedures kwa jaili ya kufanya allocation na deallocation ya variables katika C++ kinyume na hapo utasababisha memory leak.
Dynamic memory alloaction aktika C++ inampa programmer kuweza kufanya alloaction ya memory wakati wa runtime badala ya wakati wa compile time.

- Dynamic memory alloaction zinfanyika nadani ya `heap` data stricture katika C++, Pia hakikisha umepitia kipande cha [pointers](/C++%20Learning-lab/basics/pointers/pointers.md) kuweza kujua pointers ni nini na zinafanyaje kazi, katika dynamic memory allocation tunatumia pointers ili kuweza kutebngeneza new variable tunatumia `new` kewyord kwa ajili ya kutengeneza variable yaani kufanya allocation na ili kuweza kufanya deallocation ya object yako ambayo imkuwa created katika programming utatumia `delete` keyword ili kufa nya memory deallocation katika C++.

### new and delete Operators

### malloc and free Functions

- Katika C++, `malloc()` na `free()` ni functions a,bazo zinatumika kwa ajili ya kuifanya dynamic memory alloaction na deallocation.Lakini, ni sehemu ya C standard library,!C++ standard libraray. Kwenye C++ kuan alternative kama new na delete operators kwa ajili ya memory management.Ila kwenye upnade wa C++ `delete` pamoja na `new` operator ndio zinakuwa prefered sana kwa ajili ya C++, ila pia unaweza ukatumia malloc pamoja na free.

 1. Malloc():

- Malloc inasimamam badala ya memory allocation, inatumika kwa ajili ya kufa nya alloacation ya memory juu ya heap..
- Syntax ya malloc ipi hivi

 ```cpp
 void* malloc(size_t size);
 ```

 Size ni number(idadi) ya bytes kwa ajili ya kufanya allocation.Function kwa ajili ya malloc inarudisha pointer mwanzoni allocated block kama utakuwa successful or `NULL` kama allocation haitawezekana.

 2.Free():

- Free() inatumika kwa ajili ya kufanya deallocation ya memory ambayo nyuma imekuwa allocated dynamically kwa kutumia `malloc()` au `calloc()` au `realloc()`.
- Syntax yake iko hivi.

 ```cpp
 void free(void* ptr);
 ```

ptr ni pointer kwenye memory block ambayo inatakiwa kuwa deallocated.Baada ya kuita `free()` memory inakuwa available for ajili ya subsequent alocations.

Mfano namna matumizi ya malloc pamoja na free katika C++

```cpp
#include <iostream>
#include <cstdlib> // Include the necessary header for malloc and free

int main() {
    // Allocate memory for an array of 5 integers
    int* array = (int*)malloc(5 * sizeof(int));
    if (array == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        array[i] = i * 10;
    }

    // Print the array
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Free the allocated memory
    free(array);

    return 0;
}

```

Katika mfano hapo juu, malloc() imetumika kwa ajili ya kufanya alloaction ya memory ya array yenye integers 5. Memory kisha inakuwa initailized, printed na mwishowe kuwa deaallocated kwa kutumia `free()`.

Ni muhimu kumbuka kwamba, kutumia `new` na `delete` ndio inakuwa prefered kuzidi `malloc()` na `free()`, especially pale unavyofanya kazi kwa jili ya classes na objects.

## Utofauti kati Ya Stack na Heap Allocations

1. Katika Stack,allocation na de-allocation inakuwa inafanywa na compiler yenyewe lakini kwenye heap memory allocation na deallocation inafanywa na programmer mwenyewe.

2. Handling heap frame ni cost ukifananisha na stack frame.

3. Stack ipo faster sana ukifanananisha na heap.

## Memory Leaks

- Memory Leaks inatokea katika C++ pale ambapo memory ambayo ni dynamically allocated wakati wa program execution inakkuwa not properly deallocated pale ambapo haihitajiki. Hii inaweza ikapelekea  depletion ya memory, program kuweza kuchukua resources na hata kupelekea program kucrush,Hizi ni baadhi ya vitu ambavyo vinasababisha memory leak katika C++ and mbinu za kuzuia.

1. Kusahau kufanya deallocation ya memory yako: Pale ambapo unafanya dynamic deallocation ya memory kwa kutumia `new` operator au `malloc`, inabidi ukumbuke pia kufanya deallocation ya memory yako ambapo itakuwa haitumiki katika program yako.Mfano:

```cpp
int *ptr = new int;
// Code that uses ptr
delete ptr; // Memory deallocation

```

2.Lost Pointers: Kama utasahau

## Smart Pointers

## RAII (Resource Acquisition Is Initialization)

## Memory Allocation Strategies

## Memory Management in Containers and Data Structures

## Memory Safety

## Memory Debugging Tools

## Exception Safety

## Memory Management Best Practices

## Common Pitfalls

[⬆️ Return to Top](#top)
