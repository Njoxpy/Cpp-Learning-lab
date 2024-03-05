# Strings in C++

- [Strings in C++](#strings-in-c)
  - [Introduction](#introduction)
  - [String Declaration](#string-declaration)
  - [String Initialization](#string-initialization)
  - [String Operations](#string-operations)
  - [Concatenation](#concatenation)
  - [Substring](#substring)
  - [Length](#length)
  - [Copying](#copying)
  - [Comparison](#comparison)
  - [Accessing Characters](#accessing-characters)
  - [Modification](#modification)
  - [Searching](#searching)
  - [String Input Output](#string-input-output)
  - [String Manipulation Functions](#string-manipulation-functions)
  - [String Conversions](#string-conversions)
  - [Common Mistakes](#common-mistakes)

<a name="top"></a>

## Introduction

- String is the array of characters, kama ambavyo kwenye upande wa rray tunaweza kuwa na [array](/C++%20Learning-lab/basics/arrays/arrays.md) ambayo inaweza kuwa array ya number a array ya maneno; mfano wa array ya number `int number[2] = {1, 2, 4}` basi kwenye upande wa string ni same way kwamba string is the array of characters kwamba kila character ni kama array member ambao wapo ndani ya array hiyo.

## String Declaration

- Ili tuweze kufanya declaration ya string katika cpp tunatumia standard libraray ambayo inaitwa string `#include <string>` baada ya hapo fdeclaration za string yetu zitafanyika ndani ya header file yetu ila inategemeana na requirement zako je utaka kufanya string yako kuwa kama global variable au kama local variable, kwa upande wangu nitatumiamkama ni local variable, ndani ya main function Sintaksia yake kama ni declaration utaanza na string keyword ikifuatiwa na jina la string yako, kumbuka kujua njina la string ambalo liko descriptive
  `Sintaksia: string jina_la_string`

```cpp
#include <iostream>
#include <string>

using namespace std;

int main(){

  string name;
  return 0;
}
```

<!-- is there any problem a programmer can expereince when declaring a string without including the header file of the standard libarary for the string #include <string> -->

## String Initialization

- String initialization ina jumlisha vitendo veto vya kufanya declaration na kuipa value ambayo kiujumla tunaita initialization, baada ya kufanya decalaration tunaweza kuipa value moja kwa moja au unaweza tumia approach ambyo nimetumia hapo chini.

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    string name;
    name = "Bjarne Stroustrup";
    cout << name;
    return 0;
}

```

- Kabla hatujaenda kwenye string operation ni muhimu kupitia kwa nini string ni array of charcters, array ni zero indexed type kwamba tunaweza kuacces value zote kwenye array kwa ktumia index basi kwenye upnade wa charcaters ni hviyo hivyo kwamba tunaweza kuacces value au characters fulani katika variable yetu `name` kwa kutumia index, mfano; Ili tuweze kupata index ya jina la kwanza katika string yetu ambayo inaitwa name tutatumia jina la string ikifuatiwa na square braxckets na ndani ya square brackets tutandika index ambayo tunataka tuapate charcater yetu ila kumbuka ondexing katika proram yetu inaanza na zero(ndio maana nilisema array ni zero indexed)

```cpp
cout << name[0];
// output: B
```

- Instance za string class tunaziita instance object, kama utakuwa uewahi kusoma Javascript ili kuweza kuaccess function za hiyo object tutaumia dot operator . basi kwenye upande wa C++ tutaumia dot(.) operator pia ili kuweza kuapata acces ya functions ambazo zipo ndani ya hiyo object yako

## String Operations

## Concatenation

- Kufanya concatenation ni sawa na kuunganisha string variable moja na nyingine katika programu yako, mfano

```cpp
string name = "Elvis";
name += " Mathew";
cout << name;
```

- Kumbuka kuacha nafasi kama hutaki jina linjuunganishe katika programu yako mfano `" Mathew"`, baada ya kufanya string conactenation pia `length` ya string itakuwa imabedailika katika programu yako.

```cpp
cout << name.length()
// otput: 12
```

- Ni mhimu kjua kwamba space inakua counted pia katika string yako kama ambayo kwenye programu yetu hajo ju kuna space `Elvis Mathew`

## Substring

## Length

- Ili kuweza kupata lenght(urefu) wa string lako tutatumia builtin function ambayo inaitwa .length kumbuka tumesema kwamba ili tuweze kuaccess instance za object tutaumia dot(.) operator katika program yako.Ni mhimu kuzinagtia kwamba index na length za string ni vitu viwili tofauti na havifanani katika programu yako,kumbuka katika indexing tunaanza kuhesabu kanzia sifuri ila kutafuta lnght tunanzia moja the same way tunavyofanya hesabu.

```cpp
string name = "Elvis";
cout << name.length();
// ouput: 5
```

## Copying

- Kama ambavyo tunaweza kucopy value za integer data type kwenye variablenyingine basi kwenye string tunaweza kufanya hivyo pia.Ila ku,buka kufanya declaration za data type yakoambayo imekuwa declared kwa ajili ya kucopy.
- Declare string nyingine then ifanye kuwa sawa na ile string ambayo tayari imekuwa declared kwenye program yako.

```cpp
string name = "Elvis";
string another;

another = name;
cout << another;
```

- Hakikisha declarartion ya string ambayo umefanya kuopy imefanyika kinyume na hapo utapata error:
  `error: 'another' was not declared in this scope|`

## Comparison

- Katika cpp unaweza kufanya comparison ya string moja na string nyingine kwenye program yako kwa kutumia if statement, tunaweza kucompare kama string ni sam pia tunaweza kufanya comaprison kwamba ipi ni kubwa kuliko nyingine.

```cpp
    string name = "Elvis";
    string another;
    name = another;

    if(name == another)
        cout << "Sawa";
```

- Kufanya comparison kuangalia string ipi ni kunwa kuliko string nyingine tunatumai comapsrion operator s katika program, yako, mfano wa comparions operators zipo nyingi mfano: (<, >, ==, >=, <=),mfano tunaweza katika mfano hapo chini tunafnya comparison ya string moja na nyingine ila katika kwa upande wa comapsion kwenye characters tunaangalia string ipi herufi kwa kwanza katika alphabet ni kubwa kuliko string nyingine hapo ndipo moja inakuwa imezidi nyingine katika progtram yetu.

```cpp
string name = "Elvis";
string another = "Maino";
if(name > another){
  cout << name << " ni kubwa kuliko " << another;
}
else{
  cout << name << " ni ndogo kuliko " << another;
}
```

- Using starts with and ends_with function,Tumia `starts_with()` na `ends_with()` kuangalia kama string kama imeanza na herufi fulani katika program yako au hapana.

```cpp
string name = "Elvis";
cout << boolalpha << name.starts_with("E");
// output: false
```

- Kuangalia kama program imeishia na na charcater fulani katika programu yako unatumia `ends_with()` ndani ya mabano una tumia string `""` ila ndani yake kunakuwa na herefi ambayo unataka kuangalia kama ipo

```cpp
string name = "Elvis";
cout << boolalpha << name.ends_with("s");
// output: true
```

- Kumbuka kwamba C++ ni case sensitive hivyo ukiandika kwamba C ya herufi kubwa ni tofauti na c ya herufi ndogo na kwenye upande wa string kama string yetu itakuwa katika herufi ndogo ila tumetafuta kwa kutumia `starts_with()` kwa herufi ndogo tutapata error katika programu yetu.

- Empty functionality: Kuna functionality nyingine katika program yetu ambayo inatumiak kuangalia kama string yetu ipo empty au !empty

```cpp
string name = "Elvis";
cout << boolalpha << name.empty();
// output: false
```

- Front function: Font function inarudisha jibu kwamba first cahracter inayoaanza ni ipi,

```cpp
string name = "Elvis";
cout << name.front();
// output: E
```

- Back function: Back function inarudisha herufi ya mwihso katika string yetu,kwahiyo insted of using indexing tunatumia `back()`

```cpp
string name = "Elvis";
cout << name.back();
// output: s
```

- Ila pia ili kuna njia ya kuweza kupata last character katika string yetu tunatumia.

```cpp
string name = "Elvis";
cout << name[name.length() - 1];
```

## Accessing Characters

- Ili kuweza ku access characters fulani katika jina la string yako utatumai indexing ni same way jkwenye upande wa array ili kuweza kupata access unatuai squre bracket then ndani yake unasepecify number ambayo charcaters yako ipo ila kumbuka tunatumia zero indexing kwamba kama kuna neno `cpp` index ya kwanza inaanza kwenye zero hivyo kupata access ya herefu c tutaumia `string_name[specify_index_of_string]`.

## Modification

- Kuna functionalities nyingi sana ambazo zitakuwezesha kufanya modification ya string yako katika program yako.Zipo nyingi ilakwa hapa tutaona baadhi ya function ambazo tunaweza kutumia katika program yetu.
- Using **append function** ,append() function inachukua parameter na parameter hiyo ni string inakua na quotes ila maneno yanakua ndani ya hizo quotes,basic function ya append ni kwamba ina add string nyingine kwenye string ya `name`.

```cpp
string name = "Elvis";
name.append(" Makava");
cout << name;
// output: Elvis Makava
```

- Using **insert function**.Insert function inachukua parameter mbili ambapo parameter ya kwanza ni position(sehemu) ambayo hiyo string yetu inabidi ianze na parameter ya pili ni string ambayo unataka uweke.Namna nyingine kwenye code yetu hapo chini ni sawa na kusem kwamba nenda kwenye position 0 kisha weka string `Naitwa`

```cpp
string name = "Elvis";
name.insert(0,"Naitwa ");
cout << name;
// output: Naitwa Elvis
```

- Using **erase function**.EInsert function inatumika kufuta character katika program yako,insert function inachukua parameters mili parameters ya kwanza ni index ambapo unataka string yako unataka ianze kufuta na parameter ya pili ni sehemu ambayo unataka parameter yako iishie ila parameter ya pili namba itakuwa excluded,Pia kwenye upande wa erase ni sawa na kusema nenda kwenye position o kisha futa charcaters 3 Ila kumbuka kwamba hizo silabu(characters) zinahesabiwa kuanzia sifuri mfano:

```cpp
string name = "Elvis";
name.erase(0, 3);
cout << name;
// output: is
```

- Using **clear function**:Erase function inatumika kufuta string yote katika program yako,hapa clear funtion haitakuwa na parameter yeyote ndani yake

```cpp
string name = "Elvis";
name.clear();
cout << name;
// output: 
```

- Using **replace function**.Replace inachukua parameters tatu ,parameter ya kwanza nisawa na kusema nenda kwenye index position (0),kisha toa herufi 2 kisha parameter ya tatu ni string yaani ambayo unataka iwe katika program yako.

```cpp
string name = "Elvis";
name.replace(0, 2, "EL");
cout << name;
// output: ELvis
```

## Searching

- Using **find function**:Kupitia find tutaweza kupata position ya content (character) ila itachukua the first charcater to occur in the string,ile ambayo ndio ya kwanza, hivyo kama tuna neno: `C++ is awesome` tukitumia find function tutapata occurance ya first chracter katika string maana kwa hapa sisi charcater tunayotafuta ni e

```cpp
string cpp="C++ is awesome";
cout << name.find('e');
```

## String Input Output

## String Manipulation Functions

## String Conversions

## Common Mistakes

**NOTE** Kuna baadhi ya functions za object ambazo zinakuwa accessed kwenye code block kwa kutumia dot operator hazipo,hivyo basi unaweza kutumia code editor nyingine ambayo inafanya hayo.

[⬆️ Return to Top](#top)
