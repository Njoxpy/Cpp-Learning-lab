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

- Kitu ambacho tunaweza kufanya kwenye for loop tunaweza pia kufanya kwa kutumia while loop ila sintaksia yake ndio itakuwa tofauti kidogo kwenye program yako.Mfano hapa tunatengeneza program ambayo itatuwezesha kuandika program ambayo itatatupa namba kuanzia 0 hadi 5,kwa kutumia for llop itakuwa kama hivi kwenye program yetu.

```cpp
#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

Je kwa kutumia while loop program yetu itakuwaje? Kwenye upande wa while loop tunaanza na while keyword ikifuatiwa na boolean expression ya code yako kwamba endapo expression itakuwa kweli au ikweli hivyo statement yako itakuwa executed ila kama sio haitakuwa executed, kwenye for loop tumeweza kufanya declaration ya llop variable ila kwenye upnade wa while loop tunfanya declaration ya loop variable nje kabla ya while statement!

```cpp
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}
```

Kwenye mfano hapo juu tumeanza na declaration ya loop variable kisha while keyword kisha ndani ya while statement itaingia condition au boolean expression baada ya hapo nadni ya while loop itakaa statement ambayo unataka iwe executed kwenye program yako ikifuatiwa na increment au decreement kutokana na statement yako yaani boolea n expression yako ilivyo endapo condition zitakuwa meet basi tutapata jibu sahihi kinyume na hapo itapelekea kupata infinite loop.

Swali
> When to use while loop and for lop during execution of code?

***When to use For Loop:***

1.Tunatumia for loop katika program kama number of iterations tunazijua kwamba kama tunajua mara ngapi tunataka statement iwe executed kwenye code yako ndio tunatumia for loop.

2.For loop ipo clean, consice na pia ni rahisi kuelewa kipi kimefanyika kwenye program yako ukifananisha na while loop kwenye program yako.

***When to Use While Loop***

2. Handling input validation:While loops zinatumika sana kwa ajili ya kufanya validation ya input, pale ambapo utaomba mtumiaji kuweka input hadi pale ambapo data za uhakika zitaingizwa kwenye program yako.

- Utofauti ukubwa uliopo kati ya ya `do while` na `while` kwenye kucontrol expression za bulliani(boolean) inavyokuwa checked.    Pale ambapo `while` statement inakuwa executed katika program yako, boolean expression inakuwa checked kabla ya loop body inavyokuwa excecuted.Kama boolean expression itakuwa ni `false` then body haitakuwa executed kabisa.
- Kitu cha kwanza kinachotokea pale ambapo `while loop` inakuwa executed ni kwenye kucontrol boolean expression zinavyokuwa evaluated.Kama boolean expression itakuwa evaluated kwenda false basi body ya hiyo loop haitakuwa executed

## do-while Loop

- Ukiwa na `do-while loop`, body ya loop inakuwa executed kwanza na na boolean expression inakuwa checked baada ya loop body kuwa executed angalau mara moja.Kwa hiyo do-while statement mara mara nyingi inakuwa executed kwenye loop body angalau mara moja.Baada ya hapo `do-while` na `while` loop ziankuwa na tabia moja.Kwenye do while loop lazima statement iwe executed hata mara moja kwa sababu statement inakuwa executed kwanza kisha iteration inaeendelea ila kwa upande wa while loop statement inaweza hata isiwe executed kabisa katika program yako.

- Kupitia uwepo wa do while loop kwenye prigram yako ni kwamba statement ndani ya do inabidi iwe executed kwanza angalau mara moja kwenye program yako ila kwenye while loop statement inaweza ikawa executed au isiwe executed kabisa kwenye program yako.

```cpp

```

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

Badala ya kuandika hivyo katika kutumia for loop inabidi iwe hivi,loop yet itaanza na counter variable na uwepo wa counter variable ndiyo itatuwezesha kwamba mara ngapi loop yetu itakuwa executed , hivyo inabidi kuwe na initialization ya ya variable yako ambapo kwa upande wangu `int i = 0` baada hapo inafuatiwa na boolean expression au tunaweza tukasema condition kwamba incase kwamba i inaweza ikawa sawa na boolean expression  yetu au sio sawa na kama ni sawa boolean expression itakuwa true na kama sio swa boolean expression itakuwa false.Hivyo endapo boolean expression itakuwa false then hakuna kitakachokuwa executed kwenye code yetu ila kama ni true baada itaingia ndani ya `for loop`, mfano counter variable yetu `i = 0` na boolean expression au condition yetu `i , 4` hapa ni kweli `i < 4` ambapo i = 0, na ukiangalia kweli 0 < 1, 0 < 2, na kuendelee. Expression inayofuatiwa na je kwa namna gani inaweza ikabadilika kila baada ya repetition katika code yako!(How i it gonna change after each repetion into your code), kwenye code yetu tunaweza tukasema kwamba kila baada ya repetion i iwe inaongezewa moja yaani incrementation na hapa ni muhimu kuwa makini kwa sababu kama loop yako itakuwa evaluated kuwa kwelie na counter variable yako inaweza ikawa increment au decrement ukishindwa kufanya evaluation vizuri inaweza kupelekea `infinite loop!`, ila kwenye mfano wetu i itakuwa increment yaani kila baada ya repetition i itakuwa moja kisha 2, kisha 3, kisha 4, kisha 5 ila kutokana na uwepo wa loop condition yetu i itakuwa evaluated hivi.

```cpp
0 < 5; True
1 < 5; True
2 < 5; True
3 < 5; True
4 < 5; True
5 < 5; False
6 < 5; False
```

```cpp
#include <iostream>

using namespace std;

int main() {

    // for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "C++ \n";
    }
    
    return 0;
}

```

Angalia hapo juu baada ya i kuwa evaluted baada ya incrementation na kuwa false baada loop yetu haitakuwa executed tena kwenye loop yetu ina maana loop yetu itakuwa terminated.Na endapo ukikosea badala kuweka incrementation unaweka decrementation basi utapata infinite loop kwa sababu statement itakuwa evaluetd kwenda true lifetime.Mfano:

```cpp
#include <iostream>

using namespace std;

int main() {

    // for loop
    for (int i = 0; i < 5; i--)
    {
        cout << "C++ \n";
    }
    
    return 0;
}

```

Simple Syntax

```cpp
for(counter_variable(loop variable); boolean_expression(condition), incrementation or decrementation){
    // code to be executed;
}
```

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

- Katika modern C++ kuna fetuare ambayo imeanzishawa ambayo ni range for based loop na range based inatumika pale ambapo tunataka kufanya execution ya block ya code multiple times ila kwenye list items kama kwenye arrays. Mfano tuna array amabyo inahifadhi marks ambayo inahifadhi idadi ya marks amabzo wanafunzi wanazo. Mfano:Ili kupata marks ya kila mwanafunzi loop yetu itakuwa kama hivi

```cpp
#include <iostream>

using namespace std;

int main() {

    int students[] = {2, 20, 30};
    for (int i = 0; i < 3; i++)
    {
        cout << students[i] << endl;
    }
        
    return 0;
}
```

Ila moja kati ya shida ya code ya hapo juu ni kwamba imekuwa hard-coded kwamba vipi kama mbeleni kwenye array yetu mabyo inaitwa students itabadilishwa na kuwa na mwanafunzi mwingine ambaye labda marks zake zitakuwa 23, itabidi kubadili loop variable.Badala kufanya hard-coding ya size ya array basi inabidi kutafuta size ya array kwa kutumia function ya `sizeof` operator. size of operator inaleta kiasi cha bytes a,bazo zimekuwa llocated kwenye array yetu,array yetu ni students, na pia kuna integers 3 na kila integer inachukua 4 bytes, hivyo kwenye size of operator itakuwa hivi

`sizeof numbers = integer size * idadi ya arrays` `4 * 3` na jibu litakuwa 12, ukichukua size ya array kagawanya na size ya integers ambazo ni 4 bytes,utapata idadi ya items ambazo ziko kwenye array.

```cpp
#include <iostream>

using namespace std;

int main()
{

    int students[] = {2, 20, 30, 40};
    for (int i = 0; i < sizeof(students) / sizeof(int); i++)
    {
        cout << students[i] << endl;
    }

    return 0;
}

```

Hivyo kutokana na uwepo wa loop yetu hiyo endapo kuna item itaongezwa kutakuwa hakuna shida kwa sababu tayari kuna sizeof operatorambayo itakuwa ina ji update dynamically na kutfata ize ya array yetu.Ila nji hapo juu ni njia ya zamani kwenye modern C++ kuna njia mabyo ni nzuri zaidi na hiyo inaitwa `range based for loop`, na pia inatumika kama tuna list of items kama arrays na pia tunataka kuloop ndani ya hizo list items.

- Wakati wa kutumia range based loop ndio huu sasa tunaanza na declaration na hiyo declaration itachukua value ya variable moja katika array yetu hivyo itakuwa kama hivi.

```cpp
#include <iostream>

using namespace std;

int main()
{

    int students[] = {2, 20, 30};
    for (int number : students)
    {
        cout << number << endl;
    }
    return 0;
}
```

- Kupitia range based loop pia tunaweza kufanya iteration kwenye string kwa sababu string ni list ya characters!

```cpp
#include <iostream>

using namespace std;

int main()
{
    string name = "Neicore";
    for (char ch : name)
    {
        cout << ch << endl;
    }
    return 0;
}
```

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

- Katika C++, `break` na `continue` zinaitwa jump statements zinatumiak kubadili normal flow ya control ndani ya loops na hata pia switch statements.Kuna utofauti kati ya break na continue statements katika C++

    1. Break:Break inachofanya inafanya termination ya loop kabisa(completely) kwenye program yako.
  - Kama break statement itakutwa ndani ya loop basi,iterations zote zilizobakia zinakuwa skipped,na program control italuka na kuenda kwenye statement papo hapo baada ya loop.

```cpp
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    break;  // Exit the loop when i reaches 5
  }
  std::cout << i << " ";
//   output: 0 1 2 3 4 
}

```

Mfano kwenye program yetu hapo juu evaluation itafanyika na boolean expression itakuwa evalauted na hivyo baada ya statement yako hapo juu kitakachofanyika ni kwamba statement nui kweli ila iija kwenye upnade wa wa condition kwamba kama i itakuwa sawa na 5 loop yetu itabreak na kwenda sehemu nyingine ambayo ni je ya for loop kwenye program yetu.

2. Continue:
    - Continue statement katika C++, itaumika kuskip iteration kwenye loop na kwenda kwenye iteration nyingine kwenye program yako ila ndani ya loop.Mfano unaweza ukawa na program ambayo itakuwezesha kuweza kuprint namba ambazo ni ood numbers kuanzia 0 hadi 10.

```cpp
for (int i = 0; i < 10; i++) {
  if (i % 2 == 0) {
    continue;  // Skip even numbers
  }
  std::cout << i << " ";
}

```

Kwenye program yetu hapo itatupa odd number namba tasa tu ila inaskip tu zile namba ambazo sio tasa kwenye program yetu.

## Common Mistakes

[⬆️ Return to Top](#top)
