# Arrays

- [Arrays](#arrays)
  - [Introduction](#introduction)
  - [Declaration](#declaration)
  - [Initialization](#initialization)
  - [Accessing Elements](#accessing-elements)
  - [Multidimensional Arrays](#multidimensional-arrays)
  - [Relationship Between Arrays and Pointers](#relationship-between-arrays-and-pointers)
  - [Array Size and sizeof Operator](#array-size-and-sizeof-operator)
  - [Array Manipulation Functions](#array-manipulation-functions)
  - [Common Mistakes People Make When Working With Arrays](#common-mistakes-people-make-when-working-with-arrays)
  - [Best Practices](#best-practices)
  - [Common Pitfalls](#common-pitfalls)

### Introduction

- Arrays ni data type ambayo inatumika kuhifadhi data za aina moja tu na data hizo zinabidi ziwe za type moja,mfano: majibu ya wanafunzi, namba, miaka ya watu.
- Mfano tunaweza kuandika programu ambayo itawezesha wanafunzi wetu waweze kuingiza marks zao za somo la `introduction to C++` basi itabidi tutmie arrays ambazo zitahifadhi amrks za wanafunzi wote katika darasa letu basi hapa arrays itatumika, pia kupitia marks hizo za wanafuzni tunaweza tukapata wastani wa wanafunzi wote.
- namna ambavyo tutaumia variables

```cpp
int student1 = 10;
int student2 = 45;
int student3 = 68;
int student4 = 90;
int student5 = 45;
```

- Kama tungetumia variable basi tungetumia muda mrefu tuweze kufanya declaration ya variables zetu ila kutokana na uwepo wa arrays tunarahishisha kazi.
- Basi tukitumia arrays itakuwa simple zaidi
  ```cpp
  int student[4] = {10, 45, 68, 90, 45};
  ```

### Declaration

```cpp
Syntax:

Type_Name Array_Name[Declared_Size];
```
- Katika `C++` ili tuweze kufanya declaration ya arrays,assume tunataka kutengeneza array ya maksi za wanafuzni watano ambayo wana marks tofauti
- Since array inakuwa na data ambazo zote ni same kwa members wote hivyo marks zetu tunataka ziwe katika `int` integer, anza na ibnt keyword ikifuatiwa na jina la array yako na square brackets `[]` square brackets ndio inatambulisha kwamba hizo ni arrays na ndani ya hizo btrackets huwa ni idadi ya marks ambazo unataka ziwe ndani ya array yako, kwa upande wet idadi ya marks ni za wanafunzi watano hiyo ndani ya hiyo square bracket kutakuwa na 4, kumbuka kama tayari umepitia string ni kwamba ni zero indexing numbers zinakuwa counted kuanzia zero,hiyo kama ni marks za wanafunzi watano ndani ya square bracket yako itakuwa ni nne kwa sababu zinakuwa counted kuanzia sifuri.

```cpp
// basic structure of the C++ program
#include <iostream>

using namespace std;

int main(){
    int marks[4];
    return 0;
}
```

### Initialization

- Baada ya kufanya basic declaration ya values zako katika arrays kinachofuata ni kuzipa values ambapo kila mwanafunzi anakuwa na marks zake ambazo zinahifadhiwa ndani ya arrays kama array member baada ya kufanya declaration then tumia = ikifuatiwa na braces na ndani ya braces ndio utaweza marks zxa wanafuzni hao watano katika program yako

```cpp
#include <iostream>

using namespace std;

int main(){
    int marks[4] = {10, 45, 68, 90};
    return 0;
}
```

### Accessing Elements
- Ili uweze kupata access ya array values tunatumia `indexing` indexing, array ziko katika zero index kwamba ili kuweza kupata acess ya first value katika array tutanza katika index ya zero ni kama tunafanya hesabu tunaanza kuhesabu kuanzia zero. Mfano wa array yetu `int marks[5] = {12, 45, 65, 76, 83}` ila kuweza kupata values ya mwanafuzni wa kwanza katika array yetu,tutaanza na jina la array ikufatiwa na sqaure brackets na ndani ya sqaure bracket tuta specify shemu ambapo hiyo value yetu ipo ila kumbuka kwamba array ni zero indexed,kuapta value ya second array
```cpp
int marks[5] = {10, 34, 5, 6};
cout << marks[1];
// output: 34
```
- Kama utajaribu kupata acces ya member fulani wa array kwa kufanya index ambazo haipo utapata jibu ial sio best practices kufanya hivyo.
```cpp
int marks[5] = {10, 34, 5, 6, 78};
cout << marks[23];
// output: 1
```

<!-- Why does array prints out a random values when you try to acess a value at a certain index that is out of range? -->
### Multidimensional Arrays

- Multidimensional Arrays ni zile arrays ambazo ndani ya array kuna arrays au naweza nikasema kwamba ni sawa na hesabu za matrix

### Relationship Between Arrays and Pointers

### Array Size and sizeof Operator

### Array Manipulation Functions

## Common Mistakes People Make When Working With Arrays

- Too many initilizers, moja katika kosa watu wanafanya ni kuandika arrays ihifahi kiasi fulani cha data ila members wa array wanazidi idadi ya arrays ambazo zinakuwa stored

```cpp
int marks[4] = {10, 34, 5, 6,67};
cout << marks;
// output: error: too many initializers for 'int [4]'
```

- Ukiallocate more space for the array ila data ambazo umeweka ndani ya array yako ni chache hakuna shida,ila data zako zitachukua more memory kwa ajili ya programu ambapo memory hiyo haitumiki kwa hiyo ni waste of the memory and resources.

```cpp
int marks[5] = {10, 34, 5, 6};
cout << marks;
```

## Best Practices

### Common Pitfalls
- The indexes of an array always start with 0 and end with the integer that is one 
less than the size of the array.
- The most common programming error made when using arrays is attempting to reference a nonexistent array index. 

[⬆️ Rudi Juu](#top)
