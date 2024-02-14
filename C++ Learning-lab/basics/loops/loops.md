## Loops

- [Introduction](#introduction)
- [while Loop](#while-loop)
- [do-while Loop](#do-while-loop)
- [for Loop](#for-loop)
- [Range Based Loops](#range-based-loops)
- [break and continue Statements](#break-and-continue-statements)
- [Common Mistakes](#common-mistakes)

<a name="top"></a>

## Introduction

- Loop ni maelekezo (instructions) kweye programu ambayo inasababisha statement kujirudia mara baada ya muda fulani.Kwenye `cpp` kuna aina tatu za loop ambazo ni `for loop` `while loop` na `do while loop`, statement katika program yako ambayo unataka ijirudie mara kwa mara inaitwa loop body na kitendo cha statement kujirudia tunaita `iteration`
- Maswali mawili ya kujiuliza pale ambapo unahitaji kutumia loop ni `je loop body inabidi iwaje?` na `kwa muda gani loop yako inabidi ijirudie katika program yako?`

## while Loop

- Utofauti ukubwa uliopo kati ya ya `do while` na `while` kwenye kucontrol expression za bulliani(boolean) inavyokuwa checked.    Pale ambapo `while` statement inakuwa executed katika program yako, boolean expression inakuwa checked kabla ya loop body inavyokuwa excecuted.Kama boolean expression itakuwa ni `false` then body haitakuwa executed kabisa.
- Kitu cha kwanza kinachotokea pale ambapo `while loop` inakuwa executed ni kwenye kucontrol boolean expression zinavyokuwa evaluated.Kama boolean expression itakuwa evaluated kwenda false basi body ya hiyo loop haitakuwa executed

## do-while Loop

- Ukiwa na `do-while loop`, body ya loop inakuwa executed kwanza na na boolean expression inakuwa checked baada ya loop body kuwa executed angalau mara moja.Kwa hiyo do-while statement mara mara nyingi inakuwa executed kwenye loop body angalau mara moja.Baada ya hapo `do-while` na `while` loop ziankuwa na tabia moja.Kwenye do while loop lazima statement iwe executed hata mara moja kwa sababu statement inakuwa executed kwanza kisha iteration inaeendelea ila kwa upande wa while loop statement inaweza hata isiwe executed kabisa katika program yako.

**Syntax of the while Statement**
![do and while loop](/assets/do%20and%20while%20loop.PNG)

```cpp
 while (Boolean_Expression)
 Statement
```

## for Loop

- For loop katika C++ tunatumia kwa ajili kuifanya execution ye code mara nyingi, chukulia mafano umeambiwa uandike program amabyo utaweza kuleta display ya neno "C++" mara 4, basi hapa ndio tunatumia for loop badala ya kuandika kila mstari wa line "C++" basi badala ya kaundika progrma hivi

```cpp
#include <iostream>

using namespace std;

int main() {
    // Print "C++" four times without using a loop
    cout << "C++\nC++\nC++\nC++\n";
    return 0;
}

```

Badala ya kuandika hivyo katika kutumia for loop inabidi iwe hivi,

```cpp
#include <iostream>

using namespace std;

int main() {
    // Print "C++" four times
    for (int i = 0; i < 4; ++i) {
        cout << "C++" << endl;
    }
    return 0;
}

```

Ili kuweza kufanya declaration ya for loop tutaanza na for keyword ikifuatiwa na mabano na ndani ya mabano kunakuwa na variable initilaization(kama haijawa declared), inafuatiwa na condition yako ambayo inaweza kuwa evaluated kama ni kweli au sikweli kisha inafuatiwa na pia condition inayokuwa ndani ya loop yako ndio utaamua kwamba muda gani loop yako itaishia, expression ya mwisho ndio utadetermine je kwa muda gani variable yako itabadilika vipi baada ya kufanya repetetion kwenye program yako.

```cpp
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 4; ++i) {
        cout << "C++ ";
    }
    return 0;
}

```

`for (int i = 0; i < 4; ++i) {` hii line inaanza na declaration ya ya variable int i = 0 a,mbapo imekuwa initialized kuwa sifuri, na loop itaendelea hadi i itakapo kuwa ni ndogo(less than) 4,katika kila iteration `i` inakuwa incremented na moja yaani inaongezewa moja.Ndani ya loop kuna line `cout << "C++" kuweza kuprint "C++" kwenye standard output(kwenye console), na hiyo line iatakuwa executed mara 4 kutokana na loop na pia conditions zetu. kwa kila statement itakayo kuwa ndani ya loop body yako pia iatkuwa executed kutokana na condition.

> Kila mchezaji anapojiandaa kwa "for loop", wanajiweka tayari kufanya mazoezi ya kupiga mpira kwenye lango.
Wanapojiandaa kwa "for loop", wanaelewa kuwa watahitaji kurudia hatua hiyo mara kadhaa, kama ilivyoamuliwa na kocha.
Wakati wa "for loop", mchezaji hupiga mpira kwenye lango mara kadhaa, kulingana na idadi iliyowekwa.
Baada ya mchezaji kumaliza kufanya mazoezi (yaani, kurudiwa kwa "for loop"), wanaondoka uwanjani wakiwa wamejifunza na kuimarisha ujuzi wao.

## Range Based Loops

- Katika modern C++ kuna fetuare ambayo imeanzishawa ambayo ni range for based loop na range based inatumika pale ambapo tunataka kufanya execution ya block ya code multiple times ila kwenye list items kwa kwenye arrays. Mfano tuna array amabyo inahitwa marks ambayo inahifadhi idadi ya marks amabzo wanafunzi wanazo. Mfano:

```cpp
#include <iostream>

int main() {
    int maksi[4] = {10, 20, 30, 40};

    // Iterate over the elements of the array using a range-based for loop
    for (int num : maksi) {
        std::cout << num << " ";
    }

    return 0;
}

```

int num inafanya declaration ya variable ambayo itachukua value ya kila element ya array maksi katika kila iteration. : maksi inaspecify range ya kufanya iteration, katika case yetu array maksi ndani ya loop, std::cout << num << " "; itaprint kila element ambayo itafuatiwa na nafasi.

Hivyo kama tunataka kufanya iteration kwenye hii array tuatumia for loop ili kuweze kuapata kila maksi ambazo zipo kwenye array yetu na kuweza kuprint kwenye newline.

## break and continue Statements

## Common Mistakes

[⬆️ Return to Top](#top)
