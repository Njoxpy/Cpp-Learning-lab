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

## Introduction

- Arrays ni aina ya data ambayo inatumika kuhifadhi kundi(list) la data za aina moja tu,Mfano maksi za wanafunzi, majina ya wanafunzi.Maksi za wanafunzi zote zinaweza kuwa integers tu, majina ya wanafunzi yanakuwa katika strings tu.Tunaweza kuandika programu ambayo itawezesha wanafunzi wetu waweze kuingiza marks zao za somo la `introduction to C++` basi itabidi tutumie array ambayo itahifadhi maksi za wanafunzi wote katika darasa letu basi hapa arrays itatumika, pia kupitia marks hizo za wanafuzni tunaweza tukapata wastani wa wanafunzi wote.

- Kama tutatumia variables badala ya array msimbo(code) wetu utakuwa hivi,kwamba kila maksi ya mwanafunzi itakuwa na variable yake!

```cpp
    int mwanafunzi1 = 10;
    int mwanafunzi2 = 45;
    int mwanafunzi3 = 68;
    int mwanafunzi4 = 90;
```

- Kama tungetumia variable basi tungetumia muda mrefu tuweze kufanya declaration ya variables zetu ila kutokana na uwepo wa arrays tunarahishisha kazi.
- Basi tukitumia array itakuwa rahisi zaidi

  ```cpp
    int Maksi_za_wanafunzi[4] = {10, 45, 68, 90};
  ```

## Declaration

```cpp
Sintaksia:

Type_Name Array_Name[Declared_Size];
```

- Katika `C++` ili tuweze kufanya declaration ya array,tunataka kutengeneza array ya maksi za wanafunzi wanne ambao wana marksi tofauti.

- Since array inakuwa na data ambazo zote ni sawa kwa members wote hivyo marks zetu tunataka ziwe katika `int` integer, anza na int keyword ikifuatiwa na jina la array yako na square brackets `[]` square brackets ndio inatambulisha kwenye interpreter yetu kwa hi ni array.Kwamba hizo ni arrays na ndani ya hayo mabano huwa ni idadi ya maksi ambazo unataka ziwe ndani ya array yako, kwa upande wetu idadi ya marks ni za wanafunzi wanne hivyo ndani ya hiyo square bracket kutakuwa na 4,hii inamaanisha kwamba kuna member wanne katika array.

```cpp
#include <iostream>

using namespace std;

int main(){
    int maksi[4];
    return 0;
}
```

## Initialization

- Baada ya kufanya declaration ya thamani(value) zako katika array kinachofuata ni kuzipa thamani(value) ambapo kila mwanafunzi anakuwa na marks zake ambazo zinahifadhiwa ndani ya arrays kama array member baada ya kufanya declaration kisha tumia assignment operator ya = ikifuatiwa na braces na ndani ya braces ndio utaweka maksi za wanafuzni hao wanne!

```cpp
#include <iostream>

using namespace std;

int main()
{
    int maksi_za_wanafunzi[4] = {10, 45, 68, 90};
    return 0;
}
```

## Accessing Elements

- Kupata access ya value ya member wa array tunatumia `indexing`, array ziko katika zero index kwamba ili kuweza kupata acess ya thamani ya mwanafunzi wa kwanza katika array tutaanza katika index ya zero ni kama tunahesabu kuanzia sifuri. Mfano wa array yetu `int maksi_za_wanafunzi[4] = {10, 45, 68, 90};` ila kuweza kupata thamani(value) ya mwanafunzi wa kwanza katika array yetu,tutaanza na jina la array ikiufatiwa na square brackets na ndani ya square bracket tuta specify sehemu ambapo hiyo value yetu ipo ila kumbuka kwamba array ni zero indexed.

```cpp
    int maksi_za_wanafunzi[4] = {10, 45, 68, 90};
    // kupata thamani ya member wa kwanza yaani 10 katika array
    cout << maksi_za_wanafunzi[0] << endl;
    // output: 10

    // kupata thamani ya member wa pili katika array
    cout << maksi_za_wanafunzi[1] << endl;
    // output: 45 
```

- Kama utajaribu kupata access ya member wa array ila index itakuwa kubwa kuliko idadi ya member wa array yako haitawezekana ila kuna baadhi ya interpreter zitakupa garbage value pia value ambayo ni garbage inatofautiatana kutokana na IDE hivyo usishangae kuona mbona majibu tofauti.Angalia mfano:

```cpp
    int maksi_za_wanafunzi[4] = {10, 45, 68, 90};
    cout << maksi_za_wanafunzi[5];
    // output: 611
```

- Ili kupata member(element) ya mwisho katika array yako utachukua (urefu)length wa array kisha utatoa na moja.

```cpp

```

<!-- Why does array prints out a random thamani(value) when you try to acess a value at a certain index that is out of range? -->
## Multidimensional Arrays

- Multidimensional Arrays ni zile arrays ambazo ndani ya array kuna arrays,mfano:

```cpp

```

## Relationship Between Arrays and Pointers

- Pitia [hapa](/pointers/pointers.md)

## Array Size and sizeof Operator

## Array Manipulation Functions

## Common Mistakes People Make When Working With Arrays

- Too many initilizers, moja katika kosa watu wanafanya ni kuandika arrays ihifahi kiasi fulani cha data ila members wa array wanazidi idadi ya arrays ambazo zinakuwa stored.

```cpp
int marks[4] = {10, 34, 5, 6,67};
cout << marks;
// output: error: too many initializers for 'int [4]'
```

- Kufanya allocation ya space kwa ajili ya array,ila member waliopo ndani ya array yako ni wachache ukifananisha na namna ambavyo array yako imekuwa declared.

```cpp
    int maksi_za_wanafunzi[4] = {10, 45, 68};
```

- Kufanya allocation ya array yako bila kufanya declaration ya idadi yako ya member wa array ambao wanakuepo,hii inapelekea interpreter kufanya allocation ya space kwa ajili ya computer yako ila space inayotumika ni chache.

```cpp
    int maksi_za_wanafunzi[] = {10, 45, 68};
```

- Kufanya declaration ya array yako ila unaacha tu bila kufanya kitu chochote ambapo interpreter inafanya allocation ya space kwenye memory ila hio space haitumiki kufanyia chochote.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int maksi_za_wanafunzi[] = {10, 45, 68};
    return 0;
}

// output
/*
 warning: unused variable 'maksi_za_wanafunzi' [-Wunused-variable]
    7 |     int maksi_za_wanafunzi[] = {10, 45, 68};
*/
```

## Best Practices

## Common Pitfalls

- The indexes of an array always start with 0 and end with the integer that is one
less than the size of the array.
- The most common programming error made when using arrays is attempting to reference a nonexistent array index.

[⬆️ Rudi Juu][def]

[def]: #top
