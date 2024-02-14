# Decision Making

- [Introduction](#introduction)
- [Operators](#operators)
  - [Comparison Operators](#comparison-operators)
  - [Logical Operators](#logical-operators)
- [if Statement](#if-statement)
- [if-else Statement](#if-else-statement)
- [Nested if Statements](#nested-if-statements)
- [Conditional Operator](#conditional-operator)
- [Increment And Decrement Operator](#increment-and-decrement-operator)
- [switch Statement](#switch-statement)
- [Common Mistakes](#common-mistakes)

<a name="top"></a>

## Introduction

- Karibu katika section yetu ya Decision making, hii section ndio tutandika program ambazo zitatuwezesha kuweza kuandika program ambazo zitafanya maamuzi,statement katika repository yetu descison making satement inataumika kuangalia kama statement ni kweli au sioo kweli baada ya hapo inaenda kwenye statement nyingione.Mafano tunaweza kutengeneza program yetu ya kumwezresha mpira kura kuanglia kama mtu anayepiga kula yupo chini ya miaka 18 au ni zaidi ya miaka 18,katika situation kam hii ndio tunatumai if statement kuanglia kama statement yetu ni true au false9kweli au sikweli.

## Operators

## Comparison Operators

- **Comparison Operators** tunatumia comparison operators kufanya comparison ya values mbili au zaidi ya mbili katika programu yetu.
Comparison operators zipo za aina karibia nne katika `C++` kuna , greater than operator(>), less than (<), greater or equal (>=) , less or equal (<=), equality operator (==),na not equal(!=) sio sawa.Hizo ndio operators zinatumika katika `C++`.

- Tunaweaz tukatumia comparison operator kuangalia je ipi namba ni kubwa zaidi ya mwenzake.Pia ili kujua vizuri kuhusu conditional operators katika C++ ni muhimu pia kujua namna ya kutumia comparison operator katika C++. Mfano wa jinsi ya kutumia comparison operators katika C++

```cpp
#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    bool result = x != 20;
    cout << boolalpha << result;
    return 0;
}
```

C++ ni case sensitive kwamba a sio sawa na A,Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    char first = 'a';
    char second = 'A';

    bool result = first == second;
    cout << boolalpha << result << endl;
    // output: false
    return 0;
}
```

## Logical Operators

- Tunatumia Logical Operations ili kuweza kucompare two or more boolean expression au condition, logical operators kuna `&&` `||` na `!`

- Logical AND,inaangalia upande wote(kushoto na kulia) kama condition ni kweli ndio utafanya execution ya code inahusiana na condition hiyo ila kama vigezo havitakidhi hiyo code haitakuwa executed.

- Logical OR,inaanglia upande mmmoja tu inaweza ikawa upande wa kushoto au kulia basi kama upnade mmoja umekizi vigezo basi code yako husika itakuwa executed.

- Logical NOT,inakanusha statement katika C++ kama jibu ni kweli basi itabadili kuwa sikweli na kama ni kweli tabadili kuwa sikweli.

## Order Of Logical Operators

- Kam ambavyo tulisoma mwanzoni kama kwenye mathematical expression huwa kunakuwa na operator precedence kwamba / na * zinapewa kipaumbele sana ukifananisha na - na + hii tunaita operator precedence katika C++ na pia hata lugha nyingine wanatumia jina hili hili,basi katika logical operators pia kuna operators precdence kwamba, precedence yao ipo kwenye mpangilio hhu `!` `&&` `||` (zmepangwa kwamba ya kwanza ina priority kubwa), ila uwepo wa mabano unaweza ukabdili operator precedence za hizo logical operators katika programing.Mfano

```cpp
#include <iostream>

using namespace std;

int main()
{
    bool a = true;
    bool b = false;

    bool result = b && !a;
    cout << boolalpha << result;
    // result: false
    return 0;
}
```

Kwenye expression yetu hapo juu itaanza kuwa evaluated upande wa kulia kwanza kwa sababu ya uwepo wa NOT operator kwa sababu ina high precedence ukifananisha na &&, hivyo a itakanushwa na kuwa false kisha itakuwa evaluated kama upande wa kushoto ni sawa na upande wa kulia ambapo kwenye program yetu upande wa kushoto na kulia kote n false hivyo expression yetu itakuwa evaluated kuwa false.

```cpp
int x = 10;
int y = 20;

if(x > y){
    cout << "X ni kubwa kuliko y";
}
else{
    cout << "Y ni kubwa kuliko X";
}
```

## if Statement

- Tunatumia if statement ili kuweza kucontrol logic ya program yetu.

- If satement ni condition ya kwanza ambayo inatumika kuangalia kama statement ni kweli ndio itatoa majibu ya kitu kilichopo nadni ya block ya code yako ya `if statement`
- Mfano tunatengeneza program yetu ya kuangalia kama mpiga kura amefikisha miaka 18 au bado na kama miaka yake ni chini ya miaka 18 tutamwambia kwamba hauruhusiwi kupiga kura.

- Hapo tutaanza kwanza kufanya declaration ya variable kwa ajili ya kuhifadhi miaka ya mtuamiaji kisha tutaumia if statement tutaanza na if keyword ikifuatiwa na mabano na ndani ya mabano ndio tunaweka vigezo vyetu(condition) kwa mtumiaji wetu baada ya hapo tutafuata na mabano singasinga {} ndani ya mabana yetu hayo ndio tutaandika code ya kuwa executed endapo kama mpira kura amekizi hivyo vigezo.Kumbuka kama tuatumia comparison operator ili kuweza kuangalia kama value ni kubwa au sawa na!

 Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    int miaka = 12;

    if (miaka < 18)
    {
        cout << "Hauruhusiwi kupiga kura";
    }

    return 0;
}
```

- Katika mfano hapo juu mpiga kula wetu ana miaka chini ya 18 hivyo program yetu itamwambia kwamba haruhusiwi kupiga kura ila kama miaka yake ni zaidi ya 18 basi ataruhusiwa kupiga kula ila hakuna statement ambayo inahusiana na kama mpiga kura ana miaka zaidi ya 18 basi katika situation kama hii hapa ndio tunatumia else condition katika program yetu, fuatilia kipande cha chini.

## Else Statement

- Endapo mpiga kura ana miaka 18 tunataka tumwambie kwamba unaruhusiwa kupiga kura basi program yetu itakuwa kama hivi.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int miaka = 20;

    if (miaka < 18)
    {
        cout << "Hauruhusiwi kupiga kura";
    }
    else
    {
        cout << "Ruksa kupiga kura";
    }

    return 0;
}
```

- Katika program hapo ju tumeangalia kwamba je mtumiaji wetu miaka yake ni ambayo ni 20 ni 20 je ni less than 18 hapana basi program kwenye upande wa if italukwa na kuenda kwenye upande wa ambao ni kweli na code yetu itakayo kuwa executed itakuwa `Ruksa kupiga kura`.

## if-else Statement

## Nested if Statements

- Nested if statement inatumika katika C++ pale ambapo unataka kuangalia multiple condition na kufanya action mbalimbali kutokana na condition.Au tunaweza tukasema kwamba ndani ya if condition kuna if conditions zingine,Mfano: Tunatengeneza program ndogo kuangalia kama mpira kuna wetu ana miaka zaidi ya 18 au chini ya 18 ila sehemu ambayo mtumiaji wetu atatuambia kama yeye ni zaidi ya miaka 18 tutataka ndani ya hiyo if statement tuangalia kama ni mwanamke au mwanaume.

```cpp
#include <iostream>

using namespace std;

int main() {
    int umri;
    char jinsia;

    cout << "Ingiza umri wako: ";
    cin >> umri;
    cout << "Ingiza jinsia yako (M/F): ";
    cin >> jinsia;

    if (umri >= 18) {
        if (jinsia == 'M') {
            cout << "Wewe ni mtu mzima mwanamume.";
        } else if (jinsia == 'F') {
            cout << "Wewe ni mtu mzima mwanamke.";
        } else {
            cout << "Uingizaji jinsia sio sahihi.";
        }
    } else {
        cout << "Bado hujawa mtu mzima.";
    }

    return 0;
}

```

## Conditional Operator

- In C++, the ternary operator, also known as the conditional operator, is a special operator that takes three operands: a condition followed by a question mark (?), an expression to be evaluated if the condition is true, and a second expression to be evaluated if the condition is false, separated by a colon (:).

- Katika C++, conditional opeator ni swa na ternary operator, ni operator maalum ambayo inachukua vipengele vitatu(three operands): hali(condition) ikifuatiwa na alama ya swali (?), kielezo cha kutathminiwa ikiwa hali(condition) ni kweli, na kielezo cha pili cha kutathminiwa ikiwa hali(condition) ni uwongo, vimekatwa na mabano ya kufunga (:)

Syntaksia yake

```cpp
condition ? expression_if_true : expression_if_false;

```

Namna inavyofanya kazi:

> Condition inakuwa evaluated kwanza . Kama condition ni kweli, basi expression kabla ya colon inakuwa evaluated na value yake ndio inakuwa matokeo ya expression yote.

> - Kama condition inakuwa sikweli, expression baada ya colon iankuwa evaluated na value yake ndio inakuwa matokeo ya expression yote.

Mfano 1:

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    int max = (x > y) ? x : y;

    cout << "Thamani kubwa zaidi ni: " << max << endl;

    return 0;
}

```

Mfano 2:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int age = 12;

    string jibu = (age < 18) ? "Mkubwa" : "Mdogo";
    cout << jibu;
    return 0;
}

```

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age = 20;

    string result = (age < 18) ? "Not allowed to vote" : "Elligible";
    cout << result;
    return 0;
}
```

> Katika mfano huu, kama x ni kubwa kuliko y, basi sharti (x > y) litakuwa kweli (true), na hivyo thamani ya x itakuwa thamani kubwa zaidi. Lakini, kama x si kubwa kuliko y, basi sharti litakuwa si kweli (false), na hivyo thamani ya y itakuwa thamani kubwa zaidi. Natumaini hii imeeleweka.

## Increment And Decrement Operator

- Increment operator in operator ambayo inaongeza value ya variable kwa moja na decrement operator ni ile ambayo inapunguza value ya variable kwa moja. Mfano wa increment operator Value ya miaka imeongezwa kwa moja.

```cpp
    int miaka = 20;
    miaka++;
    cout << miaka << endl; // output: 21
```

 Mfano wa decrement operator Value ya miaka impunguzwa kwa moja.

```cpp
    int miaka = 20;
    miaka--;
    cout << miaka << endl; // output: 19
```

Increment operator ni operator kama zilivyo operator nyingine katika programming ila kuna utofauti wao kidogo, ni muhimu kujua kwamba kuna post increment yaani baada na kabla(prefix increment), kwenye post increment increment operator inakuwa baada ya kuandika program yako mfano `miaka++` ila kwenye upande wa prefix increment variable yako inaongezewa kabla ya kufanya operesheni yoyote ile kwenye program yako, Mfano: `++miaka`.

- Post increment, post increment inaweza kutumika katika kufanya mahesabu kwa sababu ni sawa na kama zilivyo operesheni nyingine katika C++ ila kuna utofauti na kutokuelewaka kuhusu matumizi ya post na pre-increment navyofanya operesheni zako katika programming.Mfano kuhusu post increment inavyofanya kazi katika programming wakati wa kufanya operesheni.

```cpp
#include <iostream>

using namespace std;

int main()
{
    int miaka = 20;
    int jibu = 2 * miaka++;
    cout << "Jibu baada ya kufanya post increment: " << jibu << endl; // 40
    cout << miaka; // 21
    return 0;
}
```

Kwa kupitia mfano hapo, post increment inachofanya baada ya jibu kuwa declared na kuwa assigned kwamba 2 kuzidisha na miaka++, katika C++ miaka++ imekuwa na post increment yaani value ya miaka ambayo ni 20 imekuwa imeongezwa moja baada ya ila katika C++ inachukua value ya variable yako kabla ya kufanya incremenation kwa sababu increment imekuja baada ya ++ sign yaani baada na pia ipo kwenye RHS(Upande wa kulia)right handside, hivyo program inakuwa sawa na kuandika hivi.

```cpp
    int jibu = 2 * miaka;
```

na kwa upande wa miaka value yake imekuwa 21 kwa sababu ya incremenetion inasound kama ni kitu cha ajabu ila ipo kama ilivyo ndio hivyo.Kumbuka hii ni increment na pia decrement ipo hivyo hivyo kwenye upande wa post increment na decrement katika C++.

- Ebu tuangalie je kwa upande wa prefix increment inafanya kazi vipi? Kwenye upande wa prefix increment value ya variable yako inakuwa incremented kabla ya kufanya operesheni na pia kwenye decrement vivyo hivyo kwamba value inakuwa decrement kabla ya kufanya operesheni.

```cpp
    int miaka = 20;
    int jibu = 2 * ++miaka;
    cout << "Jibu baada ya kufanya pre increment: " << jibu << endl; // 42
    cout << miaka;                                                    // 21
```

- Kupitia mfano huu hapo juu kwamba value ya variable yetu inakuwa incerement kabla ya kufanya opereseheni na kupelekea ++miaka kuwa 21 ambapo imekuwa evalauted kabla ya kuzidisha na mbili baada ya hapo inakuwa 2  kuzidishwa na 21 kwa sababu ya post increment. Mfano kwa upande wa prefix decrement.

```cpp
    int miaka = 20;
    int jibu = 2 * --miaka;
    cout << "Jibu baada ya kufanya pre decrement: " << jibu << endl; // 38
    cout << miaka;                                                   // 19
```

Kitu chochote unachofanya kwenye decrement operator unaweza ukafanya pia kwenye increment opeartor ila utofauti wao ni kwamba moja inaongeza value ya variable kwa moja na nyingine inapunguza value ya variable kwa 1.

## Switch Statement

## Common Mistakes

- Kutumia assignment operator kufanya comparison za values katika program yako. Mfano:

```cpp
int x = 10;
int y = 20;

// check if the satement is tru or false in our program
if(x = y){
    cout << "They are equal";
}
```

 Kwa hiyo instead ya kutumia assignemnt oprator kufanya comparion ya values tumia comparison operator.

[⬆️ Return to Top](#top)
