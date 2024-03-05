# C++ Enumerations

- [Introduction to Enumerations](#introduction-to-enumerations)
- [Declaring Enumerations](#declaring-enumerations)
- [Enum Constants and Values](#enum-constants-and-values)
- [Using Enums in Code](#using-enums-in-code)
- [Enum Class](#enum-class)
- [Plain Enums Vs Enum Class](#plain-enums-vs-enum-class)
- [Strongly Typed Enums](#strongly-typed-enums)
- [Enumeration Underlying Type](#enumeration-underlying-type)
- [Enum Operations](#enum-operations)
- [Switch Statements with Enums](#switch-statements-with-enums)
- [Enum as Flags](#enum-as-flags)
- [Best Practices](#best-practices)
- [Common Pitfalls](#common-pitfalls)

<a name="top"></a>

## Introduction to Enumerations

- Enumeration ni aina ya data ambayo inabeba thamani za integer(interger values)

## Declaring Enumerations

- Declaration ya enum inaanza na enum keyword ikifuatiwa na jina la enum ambalo linabidi kuwa katika `PascalCase` kisha mabano singasinga(curly braces {}) na ndani ya mabano ndio kunakuwa na enumerators.Mfano:

```cpp
enum Rangi
{
    Nyeupe,
    Nyeusi,
    Kijani
};
```

Declaration ya enum inaitwa `Rangi` ikiwa na enumerators `Nyeupe`, `Nyeusi` na `Kijani`.Enumerator inafupishwa kama enum.

Kuna aina mbili na enumerations:

- Enum classes
- Plain Enums

## Enum Constants and Values

- Katika C++, enum constanrs ni values ambazo zimekuwa named katika enum.Ni identifiers ambazo zinawakilisha thamani za integer.

```cpp
enum class Rangi
{
    Nyeupe, // Enum constant with value 0
    Nyeusi, // Enum constant with value 1
    Kijani // Enum constant with value 2
};
```

Kama huataassign values explicit, compiler inazipa thamani kuanzia 0, kisha itakuwa inafanya incrementation kwa moja kwa kila enumerator iliyopo kuanzia chini kushuka chini.Mfano

```cpp
#include <iostream>

using namespace std;

enum class Rangi
{
    Nyeupe, // Enum constant with value 0
    Nyeusi, // Enum constant with value 1
    Kijani  // Enum constant with value 2
};

int main()
{
    cout << static_cast<int>(Rangi::Nyeupe) << endl
         << static_cast<int>(Rangi::Nyeusi) << endl
         << static_cast<int>(Rangi::Kijani);
    return 0;
}
/* Output:
0
1
2
*/
```

## Using Enums in Code

- Enums katika C++ zinaweza kutumika katika operesheni mbalimbali kama integers, kwa sababu ni set ya named integer constants.Unaweza kufanya arithmetic operations ukiwa na enum values.

## Plain Enums Vs Enum Class

- enum classes,ni enum ambazo majina ya enumerators(kama Kijani) yapo local kwa enum na thamani(value) zake hazijibadilishi kiautomatiki(implicity) kwenda kwenye aina nyingine.Mfano wa declaration ya enum kwa kutumia class:

```cpp
enum class Rangi
{
    Nyeupe, // Enum constant with value 0
    Nyeusi, // Enum constant with value 1
    Kijani  // Enum constant with value 2
};
```

- Kwenye mfano hapo juu tumefanya declaration ya enum Rangi ikiwa na enumerators Nyeupe,Nyeusi,Kijani,hivyo unaweza kufanya declaration ya enum nyingine ikiwa na enumerators sawa na wale walipo kwenye enum Rangi bila kupata error kwa sababu class enums zipo local scoped.

- Enumerators zinakuwa na default values ila pia unaweza ukawa na enum ambayo enumerators zake ndani ya program values zake umedefine ziwe explicit kama integer au character.

```cpp
#include <iostream>

using namespace std;

// Define an enumeration named Status with two enumerators: Success and Failure
enum class Status : int
{
    Success,
    Failure
};

int main()
{
    // Declare a variable of type Status
    Status result = Status::Success;

    // Check the value of the result variable
    if (result == Status::Success)
    {
        cout << "Operation was successful." << endl;
    }
    else if (result == Status::Failure)
    {
        cout << "Operation failed." << endl;
    }

    return 0;
}

```

- Kwenye mfano hapo juu, tumefanya definition ya enum class Status ikiwa na enumerators mbili: Success na Failure, na pia tumespecify type explicit kuwa ni integer.Muda wa kutumia enum class, unahitaji kutumia scope resolution operator :: kupata access ya enumerators.

- plain enums,ni enum ambazo majina ya enumerator yapo kwenye uwanja(scope) sawa na enum na thamani(value) zake zinajibadilisha kuwa za tarakimu(integer).Kwa mfano tuna enum ambayo inaitwa Rangi ikiwa na rangi zifuatazo `nyeupe` `nyekundu` na `nyeusi`.

```cpp
#include <iostream>

using namespace std;

enum Rangi
{
    Nyeupe,
    Nyekundu,
    Nyeusi
};

int main()
{
    cout << "Rangi Nyeupo ni namba: " << Rangi::Nyeupe << endl;
    return 0;
}
```

Kutoka kwenye mfano hapo juu jina la enum ni Rangi ikiwa na enumerators `nyeupe`, `nyekundu` na `nyeusi` hazina value ila value zake huwa kama hazipo interpreter huwa inazipa value by default kwa kuanzia siuri 0 na kuendelea kutokana na idadi ya enumerators.Kwenye mfano wetu kuna enumerator 3 hizo nyeupe itakuwa na 0,nyekundu na 1 na nyeusi na 2.

```cpp
    cout << Rangi::Nyeupe << endl
         << Rangi::Nyekundu << endl
         << Rangi::Nyeusi << endl;
```

Kupata access ya enumerators zako ili ziwe printed utaanza na jina la enumerator yako kisha utatumia `scope resolution operator` kisha jina la enumerator yako ambayo imekuwa declared kwenye enum.

Shida moja ya plain enum hatuwezi kuwa na enum nyingine ambayo ina enumerators(member) sawa na wale wa enum ya kwanza.Angalia mfano:

```cpp
enum Rangi
{
    Nyeupe,
    Nyekundu,
    Nyeusi
};

enum Rangi2
{
    Nyeupe,
    Nyekundu,
    Nyeusi
};
/*
c:\Users\Njox\Desktop\C++\enums.cpp:14:5: error: 'Nyeupe' conflicts with a previous declaration
   14 |     Nyeupe,
      |     ^~~~~~
c:\Users\Njox\Desktop\C++\enums.cpp:7:5: note: previous declaration 'Rangi Nyeupe'
    7 |     Nyeupe,
      |     ^~~~~~
c:\Users\Njox\Desktop\C++\enums.cpp:15:5: error: 'Nyekundu' conflicts with a previous declaration
   15 |     Nyekundu,
      |     ^~~~~~~~
c:\Users\Njox\Desktop\C++\enums.cpp:8:5: note: previous declaration 'Rangi Nyekundu'
    8 |     Nyekundu,
      |     ^~~~~~~~
c:\Users\Njox\Desktop\C++\enums.cpp:16:5: error: 'Nyeusi' conflicts with a previous declaration
   16 |     Nyeusi
      |     ^~~~~~
c:\Users\Njox\Desktop\C++\enums.cpp:9:5: note: previous declaration 'Rangi Nyeusi'
    9 |     Nyeusi
      |     ^~~~~~

*/
```

Error inasema kwamba kuna conflict,kwamba kutokana na declaration ya enumerators zetu kuna nyingine zinaingiliana,basi katika situation kama hii hapa `class enums` zinatumika katika C++.

Kiujumla ni muhimu kutumia enum classes kwa sababu hazijibadili mara kwa mara,ila error zake mara chache.

## Strongly Typed Enums

- Strongly typed enums ni sawa na Class enums. Hivyo hakikisha unapitia sehemu ya class enums.

## Enum Class

- enum class zipo katika wigo(scoped) na pia ziko strongly typed,na zinaanza na enum ikifuatiwa na neno class ikimaanisha kwamba enum ni strongly typed baada ya hapo jina la enum yako(inabidi liwe katika PascalCase),kama mfano hapo chini:

```cpp
#include <iostream>

using namespace std;

enum class Rangi
{
    Nyeupe,
    Nyeusi,
    Kijani
};

int main()
{
    cout << static_cast<int> (Rangi::Nyeupe);
    return 0;
}
```

## Enumeration Underlying Type

## Enum Operations

## Switch Statements with Enums

Switch statement zinafanya kazi vizuri zikiwa na enums, inafanya msimbo wakonkuonekana vizuri kuliko kuwa na multiple if-else statements.

```cpp
#include <iostream>

using namespace std;

enum Day
{
    Jumatatu,
    Jumanne,
    Jumatano,
    Alhamisi,
    Ijumaa,
    Jumamosi,
    Jumapili
};

int main()
{

    Day currentDay = Jumatatu;

    switch (currentDay)
    {
    case Jumatatu:
        cout << "Soma enumerations" << endl;
        break;
    case Jumanne:
        cout << "Pumzika";
        break;
    case Alhamisi:
        cout << "Nenda kusali";
        break;
    }
}
```

## Enum as Flags

Enum zinaweza kutmika kama bit flags, ambapo kila enumerator inawakilisha bit moja.

```cpp

```

## Best Practices

- Majina ya enum zako yawe katika PascalCase,Mfano:

```cpp
enum class Rangi
{
    Nyeupe,
    Nyeusi,
    Kijani
};
```

- Ni muhimu kutumia class enums badala ya plain enums katika program zako.

- Kama umefanya declaration ya enum yako na kisha kuipa value enum yako ila unataka values nyingine ziwe zinapungua kwenda chini kwamba in the same way na compiler inafanya mfano,tuna enum inaitwa `SikuKatikaWiki` zikiwa na enumerators za siku ila unataka jumatatu kama enumerator ianze na 1 na zinazo fuata ziwe na 2 na kuongeneza 1 kwa kila enumerator,Mfano

```cpp
#include <iostream>

using namespace std;

enum class SikuKatikaWiki
{
    Jumatatau = 1,
    Jumanne = 2,
    Jumatano = 3,
    Alhamisi = 4,
    Ijumaa = 5,
    Jumamosi = 6,
    Jumapili = 7
};

int main()
{
    return 0;
}

```

Badala ya kufanya hivyo unaweza fanya hivi kufanya code yako iwe clean na kuonekana vizuri.Amgalia mfano hapo chini!

```cpp
#include <iostream>

using namespace std;

enum class SikuKatikaWiki
{
    Jumatatau = 1,
    Jumanne,
    Jumatano,
    Alhamisi,
    Ijumaa,
    Jumamosi,
    Jumapili
};

int main()
{
    return 0;
}

```

## Common Pitfalls

- Declaring enums kwa kutumia old way(plain enums) badala ya class enums ili kuweza kuimprove type safety.

- Explicitly Set Enum Values: Ni vizuri kutumia explicit set enum values ili kuweza kubadili.

- Avoid Implicit Conversions: Be cautious with implicit conversions between enums and integers. Use static_cast for clarity.

- Error Handling: Hakikisha una default statement kama umetumia switch statement katika program yako ili uweze kuhandle unexpected situations.

[⬆️ Return to Top](#top)
