## Streams

- [Streams](#streams)
- [Streams](#streams-1)
- [Introduction to Streams](#introduction-to-streams)
- [Input and Output Streams](#input-and-output-streams)
- [Standard Streams](#standard-streams)
- [Reading from Streams](#reading-from-streams)
- [Writing to Streams](#writing-to-streams)
- [File Streams](#file-streams)
- [String Streams](#string-streams)
- [Stream Manipulators](#stream-manipulators)
- [Chaining Streams](#chaining-streams)
- [Error Handling with Streams](#error-handling-with-streams)
- [Custom Streams](#custom-streams)
- [Streams and User-defined Types](#streams-and-user-defined-types)
- [Best Practices](#best-practices)

## Streams

- Katika C++ kuna namna ya kudeal na standard input na kudeal standard output,kuna functionality ambazo zipo upnad wa standard output(so) kama `cout` mfano wa standard input ni `cin`.Kwahiyo kwenye stream assume kwamba kuna bomba mbili ambapo bomba ya kwanza inahusika na kutuma meseji na bomba ya pili inahusika na kupokea message katika C++ na hizo pipe mbili kwenye C++ tunaita streams.
- Hivyo pale ambapo unataka kuiambia computer kitu fulani au akuuliza swali, unatumia pipe ya kusend ambayo ndio (output stream kupeleka meseji).Na pale ambapo computer inataka kusema kitu fulani au kujibu swali back kwangu.

## Introduction to Streams

## Input and Output Streams

## Standard Streams

## Reading from Streams

- Let's tunataka kutengeneza a simple program ambayo inamruhusu user aweze kuingiza namba mbili then baada ya hapo majibu yawe displayed kwenye output

```cpp
#include <iostream>

using namespace std;

int main(){
    // strems in C++
    cout << "First: ";
    int first;
    cin >> first;

    cout << "Second: ";
    int second;
    cin >> second;

    cout << "First number is " << first << " Second number is " << second;

    return 0;
}

```

- Hapa endapo user wetu ataingiza namba pili kwenye program yetu sehemu ya kwanza kitakachotokea ni hichi kama output

```cpp
First:10 30
 Second: First number is 10 Second number is 30
```

mwanzoni user wetu anaingiza number yake kwenye program hiyo namba huwa inahifadhiwa katika temporary storgae amabyo initwa buffer, buffer
Je ni nini hichi kimetokea? Katika pale ambapo user ataingiza namba ya kwanza ambayo itaenda kwenye variable ya `first` namba hiyo inaenda kuhifadhiwa katika sehemu inaitwa `buffer`, buffer ni temporaray storage
> buffer-is the temporary storage area where the program can hold some information before using it or sending it somewhere else.

- Hivo kwa mara ya kwanza user wetu anaingiza value ya kwanza yaani namba ya kwanza kama itatokea usera ameingiza namba ya kwanza labda `10` akaingiza namba nyingine bila kaupiga enter kwamba kuingiza namba nyingine kwenye program yetu basi tutapata error kidogo ila haitakuwa displayed, kwenye screen kwanini? Kwasababu kwa mara ya kwanza user anaingiza value kwenye programu yetu kinachotokea ni kama namba ya kwanza inahifadhiwa katika temporary storage ambayo ndio buffer `[10 20]` baada ya user kuingiza value ya kwanza a,bayo ni 10 buffer inahifadhi data ambayo ni 10 ila cout ya secodn haitasomwa kwa sababu user wetu ameingiza value mbili kwenye programu yetu kwenye first kwa hiyo buffer ilichokifanya ni kuangalia je baada ya 10 kuna whitespace? ndio then baada ya hapo itakachofanya itachukua namba ya pili baada ya whitespace ambapo itapelekea namba ya pili kutosomwa compiler kuotoa ruhusa ya kufanya compiling kwa sababu imeshachukua value ile ya mara ya pili baada ya 10.
- Basi kwenye instance kama hii tunatumia `cin.ignore()`, cin.ignore inachukua parameter 2
   1. *first parameter:* Parameter ya kwanza ni type ya streamsize ambayo inawakilisha idadi ya characters ambazo zinatakiwa kuwa ignored, na idadi huwa inakuwa katika numbers mfano:hapo herefu 10 zitakuwa ignored.

   ```cpp
   cin.ignore(10)
   ```

   2. *Second parameter:*Parameter ya pili inaitwa dlm ambayo ni delimeter,na delimter amabyo tunataka tuweze inaweza iakawa baada ya user kuplace enter.

   ```cpp
   cin.ignore(10, '\n');
   ```

  - Kuna situation ambayo user anaweza akaingiza number kubwa sana hapo ndio inabidi kutumia umeric limits.

   ```cpp
   numeric_limits<streamsize>::max();
   ```

## Writing to Streams

## File Streams

## String Streams

## Stream Manipulators

## Chaining Streams

## Error Handling with Streams

## Custom Streams

## Streams and User-defined Types

## Best Practices
