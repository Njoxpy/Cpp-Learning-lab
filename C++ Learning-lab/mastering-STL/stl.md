# Mastering STL

- [Algorithms](#algorithms)
- [Containers](#containers)
- [Pair](#pair)
- [Sequence Containers](#sequence-containers)
  - [Vectors](#vectors)
  - [List](#list)
  - [Deque](#deque)
- [Associative Containers](#associative-containers)
  - [Set](#set)
  - [Multiset](#multiset)
  - [Map](#map)
  - [Multimap](#multimap)

- [Unordered Containers](#unordered-containers)
  - [Unordered Set](#unordered-set)
  - [Unordered Multiset](#unordered-multiset)
  - [Unordered Map](#unordered-map)
  - [Unordered Multimap](#unordered-multimap)
  - [Queue](#queue)
  - [Tuple](#tuple)

- [Stack](#stack)
- [Functions](#functions)
- [Iterators](#iterators)

<a name="top"></a>

## Algorithms

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

## Containers

- Container zinatumika manage umbile(object) za aina fulani.STL Containers zimegawanyika katika categories nne ambazo ni:
  - Sequence Containers(Sequantial)
  - Associative Containers
  - Container Adapter

## Sequence Containers

- Kila umbile(object) katika sequence(mfuatano) lina sehemu(position) yake maalumu,pia mpangilio wa element unakuwa maintained kwa namna ambavyo unakuwa umehifadhiwa.Mfano wa sequence containers ni vectors, list na deque.Karibia kila sequence containers zina aina moja ya operesheni ambayo unaweza ukafanya kwa ajili ya manipulation.

## Vectors

- Vector zinahifadhi na pia zina manage objects zake katika dynamic array.Kwa sababu array ni random data structure,element za array unaweza ukazipata randomly.Kuweka item katiakati au mwanzoni katika array inatumia muda hususani kama array yako ni kubwa,lakini, kuweka data(item) mwishoni ni haraka zaidi. Jina la class ambayo inafanya implementation ya vector container ni vector.Jina la header file  ambalo lina class `vector` ni vector,Hivyo, kutumia vector container katika program,program lazima header file `#include <vector>` liwe included juu kabisa!

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
    vector<string> name;
```

Hapo juu tumefanya declaration ya vector ambayo ni wanafunzi ikiwa ni ya type integer.Tumefanya declaration ya vector yetu ya kwanza inaitwa wanafunzi ya pili inaitwa name ila zote vectors zetu hazina value yeyote,kwa njia rahisi tunaweza weka value katika njia zifuatazo.

```cpp
    vector<string> name(5,"Njox"); // {"Njox", "Njox", "Njox", "Njox", "Njox"}
```

Hapo vector yetu name imekuwa declared ikiwa na mabano na nadni ya mabano kuna 5 na neno "Njox" hapo ni sawa kwamba vectors 5 zimekuwa initialized na zote zikiwa na value ya "Njox",ili kuweza kutengeneza copy ya vector moja kwa nyingine ni rahisi,unahitaji kufanya declaration ya vector moja(ambayo unataka ikopiwe) kisha declaration ya vector nyingine ambayo inakopi kutoka kwenye array ya kwanza,angalia mfano hapo chini!

```cpp
    vector<int> v1(5, 20);
    vector<int> v2(v1);
```

- Sasa tumejua jinsi ya kufanya decalartion ya vector katika kipande cha sequence container,sasa ngoja tujue jinsi ya kufanya manipulation ya data ambazo zimehifadhiwa katika vector.Kufanya hivyo inabidi ujue basic operesheni zifuatazo!

  - Item Insertion
  - Item Deletion
  - Stepping through the elements of a vector container
- Operesheni zinatotumika kupata access ya element za vector container.

1. `vectorName.at(index)`- Inarudisha element katika position ambayo imekuwa specified kutokana na index.

```cpp
    
```

2.`vectorName[index]`- Inarudisha element katika position ambayo imekuwa specified kutokana na index.

```cpp
    
```

3.`vectorName.front()`- Inarudisha element ya kwanza katika vector.

```cpp
    
```

4.`vectorName.back()`- Inarudisha element ya mwisho katika vector.

```cpp
    
```

- Vector ya kwanza imekuwa declared na kuwa initialized ikiwa na element 5 zote zikiwa na value ya 20,na vector ya pili ambayo ni v2 imekuwa declared ila imekopi values za array ya v1 katika program yako.

- Ili kuweza kuweka values ndani ya vector yako kuna njia mbalimbali ila kuna method inaitwa `.pushBack()` na hata pia `.emplace_back()` ndani ya mabano tunapitisha value zako.

- `push_back()` function inachofanya inaingiza value ambayo umeweka kwenye mabano kwenda kwenye value yako pia kuna `emplace_back()` nayo pia inaweka value mwishoni mwa vector yako ila kuna utofauti ulipo kati ya push_back na emplace_back,emplace_back ipo haraka ukifananisha na push_back katika vector.

- Kwenye upande wa vector pia unaweza kutengeneza pair ya vector,kwa declaration ya pair yako inakuwa hivi `pair<int int>pairName` ila declaration ya vector inakuwa hivi `vector<int> vectorName` kinchobadilika ni kwamba badala ya ile data type yako ambayo ni int kwenye vector unabadili na kuweka declaration ya pair yako `vector<pair<int, int>> vec;`

```cpp
    vector<pair<int, int>> vec;
```

## List

## Queue

- Queue ni sawa na stack ila utofauti wao ni kwamba queue inatumia FIFO Algorith(First In First Out),Kufanya declaration ya queue unaanza na 

## Deque

- Deque ni moja kati ya sequenc containers katika STL,deque inasimama badala ya double ended queue.Deque containers zinakuwa implemented kama dynamic arrays katika namna elements zinakuwa inserted katika both ends.Deque zinaweza expand katika pande yeyote,insertion mwishoni,katikati zipo haraka.Insertion katikati zinatumia muda kwa sababu element katika katika queue zinahitaji ziwe shifted.Jina la class ambalo linafanya definition ya deque container ni deque,class deque na function ya kufanya implementation ya operesheni ambazo ziko kwenye deque object,pia zipo kwenye header file deque.Hivyo kuweza kutumia seque container katika program inabidi header file iwe included.

```cpp
#include <deque>
```

- Kufanya declaration ya qeque kwenye program yako utaanza na deque keyword ikifuatiwa na <> ndani yake kunakuwa na aina ya data nje ya <> utaweka jina la deque yako.

```cpp
    deque<int> dq;
```

## Associative Containers

## Set

## Multiset

## Map

## Multimap

## Unordered Containers

## Unordered Set

## Unordered Multiset

## Unordered Map

## Unordered Multimap

## Tuple

## Stack

- Stack inafanya kazi kwa kutumia algorithm ya LIFO(Last in First Out),kwamba element ambayo itakuwa ya mwisho kuwa added ndio itakuwa ya kwanza kutolewa.Declaration ya stack unaanza na stack keyword kisha <> ndani ya <> inakaa data type kisha nje ya <> inafuata jina la stack yako,usisahau kuweka header yako `##include <stack>`.

```cpp
    stack<int> st;
```

- Ili kuweza kufanya baadhi ya operation kwenye stack yako kuna methods 7 tu, **emplace, push, empty, pop, top, size, swap**

  - push: Hapo tu tumefanya declaration ya stack yetu ila iko empty hivyo kama tunataka tuweke value kwenye stack yetu tutaumia method ya `push()` ndani ya mabano tunaweka value ya data.Mfano,kupitia mfano inakuwa kwamba ndani ya stack yetu kunakuwa na value yetu ambayo ni 1.

```cpp
    st.push(1); // {1}
```

- emplace:emplace ni sawa na push ila utofauti wake ni kwamba emplace ipo haraka ukifananisha na push kwenye stacks.

```cpp
    st.emplace(2); // {2, 1}
```

- empty:empty inatumika kuangalia kama stack yako ipo tupu au laa,mfano tunaweza tukatumia .empty kuangalia kama stack ina kitu ndani au hamna na kama hamna tunaweza ukapush value kwenye stack yetu.Kumbuka kwenye C++ kama jibu ni false inarudisha 0 na kama ni true inarudisha 1 kumbuka mwanzoni nilielekeza namna jinsi ya kutumia `boolalpha` kama umesahahu kapitie tena!

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;

    if (st.empty() == true)
        cout << "Stack is empty!" << endl;
    else
        cout << "The last element added into a stack: " << st.top() << endl;
    return 0;
}
```

- pop:pop() inatumika kutoa element ya mwisho kabisa ambayo imekuwa added kwenye stack yetu.Mfano

```cpp

```

- top:top inarudisha value ya mwisho kuwekwa kwenye stack yako.

```cpp
    stack<int> st;

    // push
    st.push(1); // {1}

    // emplace
    st.emplace(2); // {2, 1}
    
    cout << st.top(); // output: 2
```

Mwanzoni kabisa tulifanya declaration hii `stack<int> st;` kisha tunapush 1 na emplace 2 hivyo stack yetu itakuwa hivi `{2, 1}` kwa hiyo top inachofanya inatoa output ya value ya mwisho kuwa added kwenye stack yetu hivo 2 endapo tutatumia `s.pop()` value ya mwisho kuwa added itatolewa na hivo baada ya hapo tukijaribu `cout << s.top()` tutapata 1 kwa sababu 2 imetolewa kwenye stack yetu,Zingatia hilo! Mfano

```cpp
    stack<int> st;

    // push
    st.push(1); // {1}

    // emplace
    st.emplace(2); // {2, 1}

    // pop(removes the last element to be added into a stack)
    st.pop();

    cout << st.top(); // output: 1
```

- size: inarudisha idadi ya element ambazo zipo kwenye stack.Mfano hapo chini baada ya kufanya declaration ya stack `st` tumepush 23 kwenda kwenye stack yetu na ndio ipo 23 tu ndani ya stack.

```cpp
    stack<int> st;
    st.push(23); // {1}
    cout << st.size() << endl; // Output: 1
```

- swap:Kama ambazo neno linsema swap unaweza swap values za stack moja kwenda kwenye stack nyingine kwenye program yako.

```cpp
    stack<int> st1, st2;
    st1.swap(st2);
```

## Functions

## Iterators

[⬆️ Return to Top](#top)

<!-- # Mastering the Standard Template Library (STL) in C++

## Introduction to STL
- Brief overview of what the STL is and its importance in C++
- Why understanding the STL is crucial for C++ developers

## Containers
- Explanation of containers in the STL
  - `vector`
  - `list`
  - `deque`
  - `set` and `multiset`
  - `map` and `multimap`
- When to use each container based on use cases
- Common operations and member functions for each container

## Iterators
- Introduction to iterators and their role in STL
- Types of iterators (input, output, forward, bidirectional, random access)
- Examples of iterating through different containers using iterators

## Algorithms
- Overview of algorithms provided by the STL
- Categorization of algorithms (sorting, searching, modifying, etc.)
- Commonly used algorithms with examples
  - `sort`
  - `find`
  - `binary_search`
  - `transform`
  - `accumulate`
- How to use algorithms with different containers

## Functors and Lambdas
- Explanation of functors (function objects) and how they work
- Introduction to lambdas and their advantages
- Examples of defining and using functors and lambdas with algorithms

## Custom Data Structures
- Creating custom data structures compatible with the STL
- Examples of custom data structures (e.g., priority queue, custom comparator)
- How to use custom data structures with STL algorithms and containers

## Best Practices and Tips
- STL best practices for efficient and clean code
- Tips for choosing the right container or algorithm
- Performance considerations and trade-offs
- Error handling and common pitfalls to avoid

## Resources
- Recommended books, websites, and online resources for further learning
- Links to additional tutorials or exercises
- Community forums or groups for discussing STL and C++ topics

## Conclusion
- Recap of key points learned about mastering the STL
- Encouragement to practice and explore more on your own
- Thanking contributors and supporters of the Cpp-Learning-Lab
 -->