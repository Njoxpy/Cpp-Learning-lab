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

2. Automatic Memory Allocation. Memory kwa jili ya local variable inakuwa llocated pale program inakuwa ndani ya scope ambayo imekuwa declared na inakuwa deallocated pale ambapo program ina exit ile scope yake.Na hii mara nyingi ndio inaitwa stack memory.

```cpp
void foo() {
    int num = 10; // memory for num is allocated automatically
    // ...
} // memory for num is deallocated upon exiting foo()

```

3. Dynamic Memory Allocation. Memory allocation na deallocation inakuwa inafanywa na programmer mwenyewe kwa kutumia `new` na `delete` operators. Memory allocation katika dynamic inakuwa allocated kutoka kwenye heap. 

### Stack Memory

- Stack ni data structure ambayo natumika katika C++, stack inatumika kwa ajili ya local variables, fnction parameters, temporary data storage. Memory inkuwa automatically allocated na kuwa deaallocated pale amabpo function inakuwa called.

### Heap Memory

- Heap ni eneo katika memory ambalo linakuwa allocated kwa ajili ya dynamic memory allocation wakati wa execution ya program yako.Kinyume na stacl, ambayo inatumika kwa ajili ya automatic memory allocation, heap inakupa kibali kwa ajili ya dynacmic memory alloaction memory inakuwa allocated na kuwa deallocated wakati wa runtime pale inapotumika.

- Sifa za Heap memory 

Key characteristics of heap memory in C++ include:

  1. Dynamic Memory Allocation: Memory allocation katika heap ni dynamic, ikinmaanisha kwamba memory inakuwa lloacted na kuwa deallocated pale inapohitajika wakati wa kufanya execution kwa kutumia new na delete operator.

  2. Size Flexibility: Heap inatoa kibali kwa jkili ya kufanya alloacation ya memory block ambayo size yake inakuwa determined wakati wa runtime.Flexibility ni muhimu pale ambapo pale unafanya kazi na data structure ya variable size au pale ambapo size ya data yako haujui wakati wa compilation.

  3. Lifetime Control: Memory inayokuwa lloacted katika heap inabaki hadi pale ambapo inakuwa deallocated na kwa kutumia delete operator au hadi pale program itakavyofanya termination ila kwa imekuwa created kwa kutumia new operator inabidi iwe deallocated kwa kutumia delete keyword katika program yako.

  4. Manual Memory Mnagement: Kinyume na styack memory, ambayo inakuwa managed na compiler, heap memory inahitaji amnual management na programmer. Ni kazi ya programmer kufanya kufanya alloaction pale ambapo inahitajika na na pia kufanya deallocation pale ambapo inahitajika,kinyime na hapo itapelekea kupata memory leaks.

## Pointers and Memory

## Dynamic Memory Allocation

- Dynamic Memory Allocation katika C++ inakuwa managed na programmerv  mwenyewe katika compiler hizo ni muhimu kuzingatia safe procedures kwa jaili ya kufanya allocation na deallocation ya variables katika C++ kinyume na hapo utasababisha memory leak.
Dynamic memory alloaction aktika C++ inampa programmer kuweza kufanya alloaction ya memory wakati wa runtime badala ya wakati wa compile time.

- Dynamic memory alloaction zinfanyika nadani ya `heap` data stricture katika C++, Pia hakikisha umepitia kipande cha [pointers](/C++%20Learning-lab/basics/pointers/pointers.md) kuweza kujua pointers ni nini na zinafanyaje kazi, katika dynamic memory allocation tunatumia pointers ili kuweza kutebngeneza new variable tunatumia `new` kewyord kwa ajili ya kutengeneza variable yaani kufanya allocation na ili kuweza kufanya deallocation ya object yako ambayo imkuwa created katika programming utatumia `delete` keyword ili kufa nya memory deallocation katika C++.

### new and delete Operators

### malloc and free Functions

## Memory Leaks

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



    Memory leaks: Unreleased memory blocks that cause performance degradation and crashes. Use smart pointers or RAII principles to avoid them.
    Double free: Deleting memory block twice, leading to undefined behavior. Use smart pointers or ensure unique ownership.
    Dangling pointers: Accessing deallocated memory, resulting in crashes. Use smart pointers or manage pointer lifecycles carefully.
