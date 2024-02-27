## Mastering STL

- [Algorithms](#algorithms)
- [Containers](#containers)
  - [Map](#map)
  - [Pair](#pair)
  - [Vectors](#vectors)
  - [Queue](#queue)
  - [Deque](#deque)
  - [Set](#set)
  - [Tuple](#tuple)

- [Functions](#functions)
- [Iterators](#iterators)

## Algorithms

## Containers

## Map

## Pair

- Pair kama jina lilivyo kwamba ndani ya pair huwa na vitu viwili hivyo kwenye STL pair inahifadhi vitu viwili,arrays inahifadhi data ambazo zio za mchanganyiko ila kwa kutumia pair unaweza kuhifadhi data za mchanganyiko mbalimbali kama,`string na integer` au hata `int kwa int` hata `int kwa double`.

> Syntax

```cpp
    pair<Type1, Type2> pElement;
```

- Kufanya declaration ya pair lazima `utility` library iwe included kwa juu kabla ya kufanya declaration,baada ya hapo ndani ya main function anza na `pair` keyword ikifuatiwa na `<>` ambapo data type zako zinakaa ndani yake,ambapo hapo chini nitatumia `int` na `string` baada ya kufanya hivyo nje ya `>` tutaacha nafasi na kuweka jina la pair yetu `mwanafunzi` baada ya hapo,kuna njia na kuweka value za integer na string,unaweza ukaweka moja kwa moja kwamba baada ya jina pair utaweka kitendakazi = (assignment operator) kisha value zako zitakuwa ndani ya {} mabano singasinga ndani ya mabano singa singa kutakuwa na value zako katika mfuatano unaotakiwa mfano,pale juu tumeanza na int hivyo itakuwa hivi `{2, "Njox"}`.

```cpp
    #include <iostream>
    #include <utility>

    using namespace std;

    int main()
    {
    pair<int, string> mwanafunzi = {10, "Njox"};
    return 0;
    }
```

- Statement kwenye mfano wetu hapo juu,inafanya declaration ya mwanafunzi kuwa object ya aina(type) ya pair. Component ya mwanafuzni ni int; component ya pili ni ya aina ya string.Endapo kama kutakuwa hamna value ambazo zipo kwenye declaration ya mwanafuzni,component ya kwanza na component ya pili zitakuwa initialized na thamani a,bayo ni default na default vaue ni sifuri 0 na kama ni member aina yake itakuwa ni string itakuwa empty.

- Kuna njia nyingine ya kuzipa value kwenye za data type zako,ilikuweka value kwenye pair yako utaanza na jina la pair ambapo pair yetu ni `mwanafunzi` kisha dot operator kuweka kupata methods ambazo zipo ndani ya hio pair kama pair ya kwanza inakuwa na method ya `.first` kama ya pili itakuwa na `.second`,Angalia mfano hapo chini zaidi!

```cpp
    #include <iostream>
    #include <utility>

    using namespace std;

    int main()
    {
    pair<int, string> mwanafunzi;
    mwanafunzi.first = 10;
    mwanafunzi.second = "Njox";
    return 0;
    }
```

- Njia ya pili ya kuweza  kuweka values zako baada ya kuweka jina la pair yako itafuatiwa na mabano na ndani ya mabano utaweka value zako katika mfuatano ambao umefanya declaration kwa mfano pale juu tulianza na intger ikifuatiwa na string hivyo inatakiwa iwe hivyo.

```cpp
    #include <iostream>
    #include <utility>

    using namespace std;

    int main()
    {
    pair<int, string> mwanafunzi(10, "Njox");
    return 0;
    }
```

- Statement hapo chini inaonesha namna ambayo unaweza kufanya output za value ya object ambayo type yake ni pair

```cpp
    #include <iostream>
    #include <utility>

    using namespace std;

    int main()
    {
    pair<int, string> mwanafunzi = {12, "Njox"};
    cout << mwanafunzi.first << " " << mwanafunzi.second << endl;
    // Output: 12 Njox
    return 0;
    }
```

- Pia ni muhimu kujua kwamba pair inahifadhi data ambazo ni mbili na si vingine,vipi endapo tukijaribu kuweka data zaidi ya mbili?

```cpp
    #include <iostream>
    #include <utility>

    using namespace std;

    int main()
    {
    pair<int, string, int> mwanafunzi;
    mwanafunzi.first = 10;
    mwanafunzi.second = "Njox";
    mwanafunzi.third = 12;
    return 0;
    }
```

Endapo tutaongeza member mmoja kwenye pair yetu,tutapata error hii hapo chini kwamba arguments zimezidi,arguments inabidi ziwe 2 tu.

```cpp
    too many arguments for class template "std::pair"C/C++(443)
    wrong number of template arguments (3, should be 2)gcc
```

- Tunaweza pia tukawa na nested pairs katika STL,kwamba object `mwanafunzi` ambayo type yake ni pair kunakuwa kwenye component ya pili kunakuwa na pair nyingine ambayo itakuwa ni ya object ambayo ndani ya hiyo pair ya pili ndio kunakuwa na value zako ambapo inaweza ikawa string au integer,ni muhimu kuzingatia jinsi ambavyo value zetu zinakuwa nested kwa sana ndio inakuwa tabu na pia complexity inaongezeka kwenye programu yako.

```cpp
    pair<int, pair<string, int>> mwanafunzi = {2, {"Njox", 20}};
```

- Kupitia mfano hapo juu kuna component wawili tu wa umbile(object) ambapo component wa kwanza ni integer na component wa pili ni pair na huyo component wa pili wa pair object wana value mbili value ya kwanza ni string na ya pili ni integer.Kupata value ya member wa kwanza itakuwa ni `mwanafunzi.first`

```cpp
    pair<int, pair<string, int>> mwanafunzi = {2, {"Njox", 20}};
    cout << mwanafunzi.first; // Output: 2
```

Kupata thamani ya component ya pili,kumbuka component ya pili ni pair,kupata value ya component ya pili ambayo ni ya kwanza itakuwa hivi.

```cpp
    pair<int, pair<string, int>> mwanafunzi = {2, {"Njox", 20}};
    cout << mwanafunzi.second.first; // Output: Njox
```

Hapo ni sawa na kuambia program yetu kwanza nenda kwenye object yetu ambayo ni mwanafunzi chukua component ya pili kwenye mwanafunzi object kisha chukua value ya kwanza.

Kama component ya pili kwenye pair ila value ni ya pili itakuwa hivi.

```cpp
    pair<int, pair<string, int>> mwanafunzi = {2, {"Njox", 20}};
    cout << mwanafunzi.second.second; // Output: 20
```

### Function make_pair()

- Header file utility pia lina defintion ya function template make_pair.Kwa msaada ya function make_pair, tunaweza kutengeneza pairs pia kuzipa type za pair. Defintion ya function template make_pair inafanana na ifuatayo

```cpp
template <class T1, class T2>
pair<T1, T2> make_pair(const T1& X, const T2& Y)
{
return (pair<T1, T2>(X, Y));
}
```

Kutoka kwenye defintion ya function template make_pair, ni wazi kwamba function template make_pair ni value returning function na unarudisha value ya type pair.Component za value ambazo zimerudishwa na function template make_pair inapitishwa kama parameter kwenye function template make_pair.Expression hapo chini!

```cpp
make_pair(75, 'A')
```

Itarudisha value ya aina ya pair.Value ya component ya kwanza ni 75; na value ya component ya pili itakuwa ni character 'A'
Function `make_pair` ni muhimu kama pair inatumika kupitishwa kwenye function kama argument.Angalia mfano hapo chini

```cpp
#include <iostream>
#include <utility>

using namespace std;

// create function and pass pair as parameter(pair) to
void funcExp(pair<int, int> x)
{
    cout << "funcExp: " << x.first << " " << x.second << endl;
}

int main()
{
    funcExp(make_pair(75, 80));
    return 0;
}
```

Kwenye function hapo juu nimetengeneza function inayoitwa `funcExp` inachukua parameter pair kama parameter, `pair<int, int> x`,ndani ya function tunatapata value ambazo zipo kwenye object `x` ndani ta function tunapass function yetu `make_pair(75, 80)`.

- Huwa kunakuwa na pair za array katika programm yako declaration inakuwa kawaida tu kwamba linaanza na pair keyword ikifuatiwa na <> ndani yake kunakuwa na data type zako kisha jina la pair yako ila kwenye upande wa array baada ya kundika jina la pair yako itafuatiwa na square brackets na ndani ya mabano kutakuwa na idadi ya members wako ambao inabidi wawe ndani ya array yako,mfano array yangu kama ina members watatu itakuwa hivi `arrayName[3]` baada ya itafuatiwa na assignment operator ambayo ni = na baadaa ya = itafuatiwa na mabano singasinga ndani ya mabano kutakuwa na values zako katika program yako mfano array yetu ina member watatu hivyo ndani yake itakuwa na member wa kwanza ambae yuko katika index ya zero(sifuri), kesho itafuatiwa na member wa pili ambao wapo index ya 1 na mwisho member 3 ambao wapo index ya 2.Angalia mafano hapo chini!

```cpp
    pair<int, int> arr[3] = {{1,2}, {3,4}, {5,6}};
```

![Pair array](/assets/pair%20array.PNG)

Kwenye mfano hapo ni kwamba tumetengeneza pair array ambayo ina value mbalimbali kwenye index ya sifuri kuna value mbili ambazo ni 1 na 2,kwenye index ya kwanza kuna value 2 ambazo ni 3 na 4 kwenye index ya pili kuna value mbili ambazo ni 5 na 6,kumbuka kwamba pair inahifadhi value mbili tu hivyo zinakuwa na member wawili tu kinyume na hapo utapata error!

- Ili uweze kupata access ya value zako kwenye array kama basi kama ni member wa kwanza ina maana tutaanza katika index ya sifuri na kwenye index ya sifuri kupata value zile mbili za object yet,value ya kwanza itakuwa accessed kwa kutumia dot operator ikifuatiwa na first na value ya pili tutatumia dot operator ikifuatiwa na second function,angalia mfano hapo chini.

```cpp
    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};

    cout << "Fist Element kwenye index ya 0 ni: " << arr[0].first << endl;
    cout << "Second Element kwenye index ya 0 ni: " << arr[0].second << endl;
    /*
    Fist Element kwenye index ya 0 ni: 1
    Second Element kwenye index ya 0 ni: 2
    */
```

Task yako ni kuandika program ambayo itaweza kupata value ya array kwenye index ya pili ikiwa na element ya kwanza na ya pili,na array katika index ya kwanza ikiwa na element ya kwanza na ya pili

Kujifunza vizuri namna pair zinafanya kazi pitia [project hii](/C++%20Learning-lab/projects/mastering_stl/calculator_stl.cpp)

## Vectors

- Kabla hujapitia kipande hichi hakikisha umepitia [hapa](/C++%20Learning-lab/intermediate/data_structures/), vector zipo faster zaidi ya array na ili uweze kutumia vector ni muhimu kuweka header kwa ajili ya vector yako.Ni muhimu kuzangatia kwamba kama hujui idadi ya data zako ambazo unataka ziingie katika program yako ni vizuri kutumia vector badala ya array kwanini? Ili kutumia array ni muhimu kuzingatia kwamba je ni kiasi gani cha data unataka ziwe ndani ya array yako mfano kama array yako inadata za wanafunzi mfanon wako 4 itakuwa hivi

```cpp
    int studentsMark[4] = {12, 56, 79, 87};
```

Vipi endapo hatujui idadi ya members wako ambao wapo ndania array yako itakuwa hivi!

```cpp
    int studentsMark[] = {12, 56, 79, 87};
```

Ila shida inapokuja kwenye program yetu hapo juu ni kwenye upade wa [memory management](/C++%20Learning-lab/intermediate/memory_management/memory.md) kwamba interpreter ikiona kwenye program yetu tumeandika kitu kama hicho inachofanya inaenda kufanya allocation ya nafasi kwenye memory ila interpreter yetu nayo haijui kwamba je ni kiasi gani cha memory kinachohitajila kwa ajili ya array yetu ambapo inapelekea interpretr nufanya allocation kubwa ya memory na memory hiyo inaweza isitumike ikapelekea memory leak kwahiyo kwenye kitu kama hichi katika program yetu tatuzi ya hili tatizo ni kutumia vector.

- Kufanya declaration ya vector utaanza neno vector ikifuatiwa na alama ya <> ndani yake tunaweka aina ya data mabyo inabidi iwe ndani yake,mfano unaweza ikawa int,double hata string nje ya <> tunaweka jina la vector yako.

```cpp
    vector<int> wanafunzi;
    vector<string> stringList;
```

Hapo juu tumefanya declaration ya vector ambayo ni wanafunzi ikiwa ni ya type integer.Ili kuweza kuweka values ndani ya vector yako kuna njia mbalimbali ila kuna method inaitwa `.pushBack()` na hata pia `.emplace_back()` ndani ya mabano tunapitisha value zako.

- Kwenye upnade wa vector pia unaweza kutengeneza pair ya vector,

## Queue

## Deque

## Set

## Tuple

## Functions

## Iterators
