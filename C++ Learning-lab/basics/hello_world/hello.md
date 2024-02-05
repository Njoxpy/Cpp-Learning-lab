- [Introduction to C++](#introduction-to-c)
- [IDEs](#ides)
- [First C++ Program](#first-c-program)
- [Compiling and Running C Program](#compiling-and-running-c-program)
- [Introduction to Format Specifiers](#introduction-to-format-specifiers)
- [Basic I/O Using Format Specifiers](#basic-io-using-format-specifiers)
- [Integer Format Specifiers](#integer-format-specifiers)
- [Floating-Point Format Specifiers](#floating-point-format-specifiers)
- [Character and String Format Specifiers](#character-and-string-format-specifiers)
- [Width and Precision Specifiers](#width-and-precision-specifiers)
- [Manipulators](#manipulators)
- [User-Defined Types](#user-defined-types)
- [Best Practices](#best-practices)
- [Common Pitfalls](#common-pitfalls)

<a name="top"></a>

## Introduction

Karibu katika ulimwengu wa C++, kufanya safari yako ya coding kuwa laini na nyepesi, ngoja tuangalie baadhi ya IDE zinatumika kwa ajili ya C++, kuna IDE za free za pia kuna IDE za bure hivyo nimuhimu kuchagua IDE inayo endana na uwezo wako.

## 1. Visual Studio Code

[Visual Studio Code](https://code.visualstudio.com/) ni mazingira nyepesi, huru, yenye nguvu kwa ajili ya kuandika namna ya C++. Inatoa anuwai ya nyongeza kwa ajili ya utendaji ulioimarishwa, ikifanya iwe chaguo la kubadilika kwa wabunifu wa C++.

**Usakinishaji(Download):**

1. Sakinisha Visual Studio Code kutoka [hapa](https://code.visualstudio.com/).
2. Sakinisha nyongeza ya C/C++ kutoka kwenye mtazamo wa Nyongeza (`Ctrl + Shift + X`).

## 2. Code::Blocks

[Code::Blocks](http://www.codeblocks.org/) ni IDE huru na huru yenye kiolesura cha mtumiaji kirafiki. Inasaidia makompaila mengi na inatoa mazingira yanayoweza kubadilishwa kwa ajili ya maendeleo.

**Usakinishaji(Download):**

1. Pakua na sakinisha Code::Blocks kutoka [hapa](http://www.codeblocks.org/).
2. Fuata maagizo ya usakinishaji yaliyotolewa kwenye tovuti.

## 3. CLion

[CLion](https://www.jetbrains.com/clion/) kutoka kwa JetBrains ni IDE yenye nguvu iliyoundwa kwa ajili ya maendeleo ya C++. Inatoa kukamilisha kiotomatiki, urambazaji, na zana zilizojengwa kwa ajili ya majaribio na ufuatiliaji.

**Usakinishaji(Download):**

1. Pakua na sakinisha CLion kutoka [hapa](https://www.jetbrains.com/clion/).
2. Fuata maagizo ya usakinishaji kulingana na mfumo wako wa uendeshaji.

## 4. Eclipse IDE kwa C/C++

[Eclipse IDE](https://www.eclipse.org/) ni jukwaa linalotumiwa sana lenye toleo maalum kwa ajili ya maendeleo ya C/C++. Inatoa seti tajiri ya vipengele na inasaidia nyongeza mbalimbali kwa ajili ya utendaji wa ziada.

**Usakinishaji:**

1. Pakua na sakinisha Eclipse IDE kwa C/C++ kutoka [hapa](https://www.eclipse.org/downloads/).
2. Fuata maagizo ya usakinishaji kulingana na mfumo wako wa uendeshaji.

```cpp
#include <iostream>

using namespace std;

int main(){
    cout << "Hello World";
}
```

## Basic C++

- Katika program yetu entry point ya program yet ni katika `int main()` ili uweze kufanya operation ya program yetu katika C++ main ni jina la function na hiyo function inabidi iwe na uwezo wa kurus=disha kitu mabayo ndio tunaita return type hivyo return type yetu inabidi iwe ni `int` yaani integer hivyo ni mubhimu kuzingation hicho na endpo utaacha hicho utapata error katika program yako, na pia kti kingine muhimu kuzinagtia ni namna main ilivyo main function inabidi iwe katika lowercase characters endapo hizo zitakuwa katika uppercase inaleta syntax error pia kwa sababu katika ugha yetu pendwa ya C++ ni case sensitive kwamba ukandika `Main` hivi na `main` ni vitu viwili tofauti kabisa katika program yetu.

- Kama umetoka katika upande wa lugha ya C bsi hata itakuwa rahisi zaidi na pia hata kama unaanza bado unauweezo wa kufahamu lugha hii vziuri zadii, hivyo kwenye return type ambayo kwetu ni int, Kwanini return type? return type inatupa majibu kwamba program yetu ni successully yaani imefanikiwa au hapan saa kwenye upande wa C+=, return type huwa ni mbili tu, program inaweza uka return 1 au ika return 0, Je 1 na sifuri zinamaanisha nini? `return type o` hii inmaanisha kwamba program yetu imefanikiwa kurun na kuwa successfully ila kama return type ni 1 `return type 1` inmaanisha kwamba program yetu imeleta error yaaani sio sucessfully.Anaglia mfano hapo chini kwenye program yangu baada ta kurn imereturn 0, kwamba program ni imefanikiwa.

- Baada ya kunadika function yako inafuata nafasi kidogo kisha mabano na ndani ya mabano ndio kunakuwa na parameters kwa sasa hatutazungumzia sana kuhusu parameter hadi tutakapo fika sehemu ya function ila baada ya brackets inafuata nafasi kidgo na curl braces yaani mabanio singa singa, ndani ya mabano yetu program yetu yote ndio itakuwa inaandikwa hapo.

```cpp
int main()
{
    
}
```

- Baada ya hapo kun stndard library mabyo ni muhimu katika progrma yetu mabyo ni `#include <iostream>` inakuwa juu kabisa ya program yetu.

```cpp
#include <iostream>


int main()
{
    return 0;
}

```

- iostream inatuwezesha kupata input kutoka kwa mtumiaji na pia kuweza kupata output kwenda kwenye screeen.Ili kuweza kupata fetures zote zilizopo ndani ya `iostream` library ndani ya main fnction yetu tutaanza na std ikimaanisha standard library bila kuwepo kwa iostream hatutaweza kuapat fnctionality zilizopo ndani iostream, kuapta functionality hizo tuatumia std ikifuatiwa na `scope resolution operator` au tunaweza tukatumia double colons kwenye std kwa hapa tutaumia character out yaani cout ili kuweza kupata output kwenye screen kama mabvyo tunaweza tunakutumia printf katika C basi hapa tunatumia cout. baada ya kuandika cout itafuatiw na nafsi kidogo then left angled brackets au watu wengine huw wanasema ni append sing kisha caha nafasi baada ya hapo double quotes na ndani ya hzio quotes ndio kutakuw ana text amnabypo unataka iwe printed kwenye screen "Sema Dunia" usisahau kufanya termination ya line yako kwa kutumia semi colon katika program yako.

```cpp
#include <iostream>

int main()
{
    std::cout << "Sema Dunia";
    return 0;
}
```

![](/assets/sema%20dunia.PNG)

![return type](/assets/return%20type.PNG)

- Katika code yetu kuna vitu vingi sana na ni muhimu kuzingatia katika program yetu
`return 0` kutokana na uwepo wa return 0 hi ndio end point yetu ya program yetu nimuhimu kuweka return 0 pale ambapo program yako ndio inaishia na pia baadhi ya baadhi ya code editors usipoweka return keyword inakachokifanya kuangalia code yako line by line hadi ambako itafika kutakuwa hakuna statement yoyote ndio itaishia hapo,ila baadhi ya compilers zina insist hiyo line iwe included katika program yako,hivyo ni muhimu kuahikisha inakua included katika programu yako, hii statement `return 0` inaitwa `return statement` ambayo inatoa majibu kwa computer yako kwa iishie kwenye hiyo line yako, pia ni muhimu kuongeza na closing braces ( {} ) maana hapo ndio mwisho wa programu yako.

## Compiling and Running C Program

- Unaandika program zako(code) za language fulani in the same way ambayo unaweza ukaandika maandishi kwenye kitabu au daftari,Pale ambapo unaipa program yako command ya kubadili code zako ambazo ni high level language(language ambazo ni human readable) kwenda low level language languages wich are undestndable by the nmachines (0s 1s)
- Kitendo cha kurn program yako i;li uweze kupata majibu au output ndani yake huwa na complilation,kama tunavyojua kwamba computer haielewi code tunazonadika ila inacchofanya inc convert kutoka human readable format in the machine format which are 0s and 1s(binary number) na ndipo utapata output yako,kuna msemo unasema **garbage in, garbage out**kwamba kama umekosea utapata kile ambacho sicho kwa sababu computer haifahamu kitu ulichoandika katika programu yako.

- Ili ntuweze kurun code yetu kwanza code yetu inabidi iwe compiled kwenda kwenye machine code, na hivi vyote vinafanywa na compiler, machine code ni ile language au lugha ambayo machine inatumia ili iweze kufanya opereshenni mabmbali za program, machine code za C++ ambazo zinakuwa compiled katika window ni tofauti na machinbe code za MacOs hivyo ili kuweza kurun machine code za MacOs ambazi zilikuwa katika Windows inabidi urun a=code zako kwanza yaani ziwe compiled kwa mara ya pili kwenye operating tofauti na ile ya mara ya kwanza.


## Introduction to Format Specifiers

## Basic I/O Using Format Specifiers

## Integer Format Specifiers

## Floating-Point Format Specifiers

## Character and String Format Specifiers

## Width and Precision Specifiers

## Manipulators

## User-Defined Types

## Best Practices

## Common Pitfalls

[⬆️ Return to Top](#top)
