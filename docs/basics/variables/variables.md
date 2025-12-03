# Variables in C++

- [Variables in C++](#variables-in-c)
  - [Introduction](#introduction)
  - [Reserved Keywords](#reserved-keywords)
  - [Variable Declaration](#variable-declaration)
  - [Variable Initialization](#variable-initialization)
  - [Data Types](#data-types)
  - [Narrowing](#narrowing)
  - [Generating Random Number](#generating-random-number)
  - [Formatting Output](#formatting-output)
  - [Type Modifiers](#type-modifiers)
  - [Scope of Variables](#scope-of-variables)
  - [Constants](#constants)
  - [Variable Naming Conventions](#variable-naming-conventions)
  - [Mathematicall Expressions](#mathematicall-expressions)
  - [Order Of Operations](#order-of-operations)
  - [Writing Output To The Console](#writing-output-to-the-console)
  - [Reading From The Console](#reading-from-the-console)
  - [Comments](#comments)
  - [Working With Booleans](#working-with-booleans)
  - [Working With Characters And Strings](#working-with-characters-and-strings)
  - [Variable Scope and Lifetime](#variable-scope-and-lifetime)
  - [Working With Standard Library](#working-with-standard-library)
  - [Common Mistakes](#common-mistakes)

<a name="top"></a>

## Introduction

- Variable ni container ambalo linahifadhi value yaani jawabu fulani,kkwa mfano tunaweza tukawa na ndoo inahifadhio maji hivyo kwenye ulimwengu wa programming variable yetu ni ndoo am,bayo ndio inahifadhi value ambayo ni maji

## Reserved Keywords

- Katika C++, reserved keywords ni maneno ambayo yana maana maalumu katika lugha na hayawezi kutumika katika kwa ajli ya mambo mengine kama kuname variabless au function.

```cpp
and         and_eq      asm         auto
bitand      bitor       bool        break
case        catch       char        class
compl       const       constexpr   const_cast
continue    default     delete      do
double      dynamic_cast else        enum
explicit    export      extern      false
float       for         friend      goto
if          inline      int         long
mutable     namespace   new         noexcept
not         not_eq      nullptr     operator
or          or_eq       private     protected
public      register    reinterpret_cast return
short       signed      sizeof      static
static_assert static_cast struct      switch
template    this        throw       true
try
typedef     typeid      typename    union
unsigned    using       virtual     void
volatile    wchar_t     while       xor
xor_eq

```

- Hizi maneno muhimu zina maana maalum katika lugha ya C++, na huwezi kuzitumia kama vitambulisho (majina kwa ajili ya variables, functions, n.k.) katika programu yako. Ni muhimu kuzingatia kuwa viwango vya C++ vinaweza kubadilika, na maneno mapya yanaweza kuongezwa katika toleo zijazo. Daima rejea kwenye nyaraka za viwango vya C++ vilivyopo kwa habari zilizosasishwa zaidi.

## Variable Declaration

- Ili tuweze kutengeneza variable katika program yetu tunahitaji kuwa na data na type ya data hiyo ambayo inatakiwa kuhifadhiwa katika memory kisha jina la variable na jina la variable yako katika programming ianbidi liwe descriptive na meaningfull kwamba hata mtu mwingine akiangalia program yako anaju kwamba ni kitu gani kimefanyika katika program yako.Angalia mfano wa hili swali

> Declare two variables, one for temperature in Celsius and another for temperature in Fahrenheit.

```cpp
#include <iostream>

int main() {
    // Declare variables for temperature in Celsius and Fahrenheit
    double temperatureCelsius;
    double temperatureFahrenheit;

    return 0;
}

```

Tumetumia double wakati wa kufanya declaration yetu kwa sababu ina desimali na kama ni namba njima kama miaka ya mtu tutatumia `int`

```cpp
int age = 20;
int miaka = 30;
```

- Usisasahau kufanya termination kwa kutumia semicolon.

## Variable Initialization

- Kufanya initilziatio ni kitendo cha kuipa value kwenye variable yako kwa mfano wa pale juu tulisema variable ni kam nddo ya hiyo ndoo ikiwa na vitu ndani ndio value sasa kama ndoo ipo tu na haina kitu katika program yako tunaita variable declaration ila kitendo cha nddoo kuwa na maji aktika program yako tunaita initialization, yaani ndoo inakuw na maji katika, sasa kwenye upnade wa C++ unaweza ukawa na jina la variable mablo ni miaka ya mtu na hiyo miaka ikawa na value yetu ambayo ni 20 kwamba ndio mika yake hatuwezi tunaksema miaka ya mtu ni double kwa sababu miaka ya mtu ni namba kamili aktika program yako. Mfano wa intialization

```cpp
#include <iostream>

int main() {

    int miaka = 20;
    return 0;
}

```

Hivyo ndivyo initialization inafanyika katika C++, ila pia tunaweza tukafnya kwa namna nyingine kwamba tunafanya declartio kwamnza kisha iniliaztion yunaweka kwa jina la program yetu.

```cpp
#include <iostream>

int main() {

    int age;
    age = 20;

    return 0;
}

```

Tunaweza pia tukafanya multiple declartion kwenye line moja katika program yetu kwa mfano kama tunanamba moja, kisha namba ya pili. Mfano

```cpp
    // Declare multiple variables of the same data type in a single line
    int num1, num2, result;
```

Hapo num1, num2, na result zote zinakuwa na data type moja mabyo ni integer.

## Data Types

- Ili tuweze kufanya declaration ya variable katika C++ inabidi tuspecify data type yake kwanza ndio maana tunasema C++ `statically typed language` na type ya vaariable haiwezimkubadilika trough the life time of a program.Mifano mingine ya statically typed langauges ni C#, Java na TypeScript. Kwenye upande wa dynamically typed langauge kuna JavaScript, Ruby na Python.Katika hizi dynamic typed langauge hakuna hata ya kuipa variable data type ila data type yake itakuwa determined kutokana na value zilizokuwa assigned katika value iliyokuwepo kwenye variable na data type hiyo inaweza ikabadilika through the life time of a program.Sasa huo ndio utofauti wa statically na dynamic typed langauges.

- Integer data types zinahifadhi namba kamili ambazo zinaitwa int mfano wa wa integer data types kuna integer, short, long, long long, kila data type hapo inachukua kiasi fulani cha bytes katika memory mfano int inachukua 4 bytes, short inachkua 2 bytes, long inachukua 4 bytes na long long zinachkua namba ambazo ni kubwa zinahusika kwenye biggest mathematicall computations.

```cpp
#include <iostream>

using namespace std;

int main() {
    // int: Standard integer type
    int myInt = 42;
    cout << "int: " << myInt << endl;

    // short: Short integer type
    short myShort = 32767;  // Maximum value for a short
    cout << "short: " << myShort << endl;

    // long: Long integer type
    long myLong = 2147483647L;  // Maximum value for a long
    cout << "long: " << myLong << endl;

    // long long: Long long integer type
    long long myLongLong = 9223372036854775807LL;  // Maximum value for a long long
    cout << "long long: " << myLongLong << endl;

    return 0;
}

```

- **Kwanini mwishoni wa literal float tunasepecify kwa kutumia herufi F**

<span style="color:grey;">Kitendo cha kuweka F katika floating point number (Mfano, 3.14F), ni kama unafanya manual kwamba itabidi iwe treated kama float badala ya double.Kwa sababau by default, floating point numbers literlas bila suffixes zinakuwa treated kama double hiyo endapo itatumika kwenye mathematicall calculations fulani kuna baddhi ya data zitapotezwa. Hii inawreza ikawa ni muhimu ili kuweza kuhakiksha memory usage inatumika vizuri hususani pale pale unavyodeal na namba kubwa aina va float</span>

- **Kwanini mwishoni wa literal long tunasepecify kwa kutumia herufi L**

- Kitendo ya ku append L kwenye integer literal (Mfano: 42l), ni kama maelekezo yale pale ju ila hapa unaspecify kwamba inabidi iwe treated kama long type badala ya int. Bila suffix integer literals itakuwa treated kama integer.
   Hii muhimu kama unafanya kazi na large integers yaani integers kubwa inaweza ikazdidi range ya int, unahakikisha kwamba literla inawakailisha values kubwa.

- Kama data type yako ni long long usisashau kuweka LL double LL kmwishoni wa literal yako.Mfano:

```cpp
long long number2 = 100000000000000000000000000LL;
```

```cpp
float myFloat = 3.14F;  // Explicitly a float
long myLong = 1234567890L;  // Explicitly a long
```

![Data types](/assets/data%20types.PNG)

- Kwenye upande float data types, kuna float zenyewe ambazo zinachukua 4 bytes kuna double ambazo zinachukua 8 bytes na pia kuna long double ambazo zinachukua 8 bytes of memory pia.Mda mwingi tutatumia double ila kuweza kuhifadhi monetary values kwanini hatutumiii float kwa sababu kuna baadhi ya data zinapotezwa.

![Data types](/assets/float.PNG)

- Boolean data types, bolean data types katika  c   ++,zinahusika kuhifadhi data types mabzo zi kweli au sikweli yaaani tre or false, kuna data types nyingine ni char ambazo zinahusika khifadhi single character.

![Boolean And Char](/assets/bool.PNG)

```cpp
#include <iostream>

int main() {
    float myFloatVariable;
    long double myLongDoubleVariable;
    double myDoubleVariable;
    bool myBoolVariable;
    char myCharVariable;

    // Assigning values to the variables
    myFloatVariable = 3.14f;
    myLongDoubleVariable = 3.14159265358979323846L;
    myDoubleVariable = 3.14159;
    myBoolVariable = true;
    myCharVariable = 'A';

    // Printing the values
    cout << "Float: " << myFloatVariable << endl;
    cout << "Long Double: " << myLongDoubleVariable << endl;
    cout << "Double: " << myDoubleVariable << endl;
    cout << "Bool: " << boolalpha << myBoolVariable << endl;
    cout << "Char: " << myCharVariable << endl;

    return 0;
}

```

- Kwenye `implicit` ni automatic ila `explicit` ni manual kwamba conversion zinakuwa zinafanyiak manula kwenye program na hizi zinafanywa na wewe ila upande wa implicit ni automatic.

- Pia kwenye C++ kuna option ya kutumia uato keyword kwamba compiler yenyewe ndio utagundua data type yako ni ipi!

```cpp

```

## Narrowing

- Katika C++, narrowing ni kitendo cha kufanya conversion ya value ya data type kubwa kwenda data type ndogo,kutokana na hiloninapelekea kupotea kwa baadhi ya data.Narrowing conversions kiujumla huwa inapelekea kupotea kwa data.

Mfano: Kwa mfano una floating-point number `float myFloat = 3.14` na unataka kubadili kwenda integer `int`.Utafanya hivi:

```cpp
float myFloat = 3.14;
int myInt = myFloat;
```

Hio conersion hapa juu inaitwa narrowing kwa sababu unajaribu kuifanya larger type ambayo ni float kwenda small data type (int).Katika situation kama hii uatona unapewa warning au error kwa sababu sio safe conversion.

## Generating Random Number

- Random number ni mhimu palea ambapo unataka kugenerate random number katika game ambale linaweza kuwa rolling dice au pia kwenye kutengeneza guessing game katika C++.Kuna libtrary inaitwa scdlib katika C++ ndio libraray ambayo inatupa uwezo wa kutengenza random number kwa kutumia rand function katika C++

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int number = rand() % 10;
    cout << number;
    return 0;
}
```

## Formatting Output

- Katika C++, formatting output inakuwa achieved kwa kutumia njia mbalimbali. Njia ambayo watu wengi wanatumia ni std::cout kwa ajili ya output kwenye console na std::setw, std::setprecision na maniluators nyingine ila manipulation header inayotumika ni <iomanip> kwa ajili ya formatting.Ili kuweza kuformat string tunatumia string manipulators, function ambayo tunatumia kwa ajili ya kuformat na kufanya modification ya string.

- Mfano wa string maniupulators ni `setw()` inatumika kwa ajili kuset width ya string pale inavyokuwa prited kwenye console, chukulia mfano hapo chini bila kutumia `setw()`

```cpp
    cout << "C++" << "JavaScript" << endl
         << "Java" << "C";
        //  C++JavaScript
        //  JavaC

```

- Hapo juu unaona kwamba maneno haya yameungana ila kutokana na uwepo wa setw() tunaweza tukaweka kiasi fulani cha nafasi kwa ajili ya kila string.

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    std::cout << setw(5) << "C++" << setw(15) << "JavaScript" << endl
              << setw(5) << "Java" << setw(15) << "C";
    return 0;
}

```

`setw(5)` inaweka upana wa string ya kwanza kwenda characters 5,

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int intValue = 42;
    double doubleValue = 3.14159;

    // Basic output
    st::cout << "Integer value: " << intValue << endl;
    cout << "Double value: " << doubleValue << endl;

    // Formatting using setw
    cout << setw(20) << "Integer value: " << intValue << endl;
    cout << setw(20) << "Double value: " << doubleValue << endl;

    // Formatting floating-point precision
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "Double value with precision: " << doubleValue << endl;

    return 0;
}

```

## Type Modifiers

## Scope of Variables

## Constants

- Constants ni kile kitu ambacho hakibadiliki, mafno wa constants ni PI na Acceleration due to gravity. Katika C++ constants inatumika kwenye ile data type yetu ambcho haibadiliki au kama hatuhitaji hiyo data type ibadilike katika program yetu. Mfano Program ya kutafuta eneo la duara katika program yetu. Formula ya kutafuta duara ni A=πr2 sasa kwenye program yetu tubahitaji Pie iwe constants sasa je tunafanyaje basi hapo utaanza na const keyword ikifuatiwa na data type ya hiyo variable yako na kisha jina ya variable na value ya data type yako,kumbuka huwei kufanya declaration tu ya consnats lazima va value iwe initialized katika program yako.

```cpp
#include <iostream>

int main() {
    // Declare variables
    double radius, area;
    const double pi = 3.14159;  // A common approximation for pi

    return 0;
}

```

Hivyo ndivyo namna constant inatumia kwenye C++.

## Variable Naming Conventions

- Ni muhimu kufuata naming conventions nzuri katika program yako, Je hizo naming conventions ambazo ni za muhimu ni zipi,

    *1. Snake Case:* Snake case katika ulimwengu wa programming tunatumia kama kuna multiple words katika program yako, kwa mfano kama umefanya declaration ya variable yako ambyo inaitwa file size, tubatumia underscore kutofautisha neno moja na neno jingine.

        #include <iostream>

        int main  () {
            int file_size = 10; // Snake Case

            return 0;
        }

  *2. Pascal Case:* Katika pascal naming convention tunafanya capitalization ya kila neno ambalo lio kwenye variable yako.

```cpp
#include <iostream>

int main() {
    int FileSize = 10;

    return 0;
}

```

   3. Camel Case: Camel case na pascal case ni kama zinafanana ila utofauti wao ni kwamba kwenye upande wa camel case herefi ya kwanza ndio inakuwa katika lowercase ila herufi nyingine ya kwanza katika neno lengine linakuwa katika upprecase yaani herufi kubwa.

   4. Hungarian Naming convention. Hungarian naming convention,kila neno linaloanza katika jina la variable yako linakuwa na data type yake kwa mwanzoni kwamba kama variable yetu ni file size hivyo herufi yetu ya kwanza itakuwa ni i

   ```cpp
#include <iostream>

int main() {
    int iFileSize = 10;

    return 0;
}

```

## Mathematicall Expressions

- Kitendo cha kuweza kufanya kujumlisha, kutoa , kuzidisha na kutoa ndio mathematical expression ila hapa tutatongelea basic mathematical expression kama kuzidisha, kwenye upande wa C++, pale tutavyofanya basic operation kama kujumlisha ua kuzidisha tunatumia data types integer, angalia code hapo chini tumefanya declaration ya number1 na number2,

```cpp
#include <iostream>

using namespace std; 

int main() {
    int number1 = 10;
    int number2 = 3;
    int result = number1 / number2;
    cout << result;

    return 0;
}

```

ila pale tunapofanya operation yetu kwa kutumia result data type, kama tumetumia divison basi kuna baadhi ya data zinakuwa zimekatwa kuweka result variable kama double haitasaidia ili baadhi ya namba zisikatwe.Ila kama result kama data type itakuwa katika double na moja katia ya number1 au number2 itakuwa katika double, mfano

```cpp
#include <iostream>

using namespace std; 

int main() {
    int number1 = 10;
    double number2 = 3;
    double result = number1 / number2;
    cout << result;
    // output: 3.33333
    return 0;
}

```

- Kuna operator nyingine katika C++ mabyo ni modulus operator ambayo inarudisha baki ya value yako

```cpp
#include <iostream>

using namespace std; 

int main() {
    int number1 = 10;
    int number2 = 3;
    int result = number1 % number2;
    cout << result;

    return 0;
}

```

- Kama tunataka kuongeza mojakwa variable yetu au kupunguza moja kwa variable yetu tutatumia increment na decrement operator katika C++,Mfano tuntaka kuongeze moja kwenye number1 variable au tunataka kupunguza moja kwenye number1

```cpp
    int number1 = 10;
    int number2 = 3;

    number1++;
    number1--;
```

Ila kumbuka kwamba katika C++, kuna post increment yaani baada ya kuna prefix increment kabla.Kumbuka utofauti kati ya postfix na prefix. Mfano

```cpp
    int number1 = 10;
    int number2 = number1++;

    cout << number1;
    // 
```

## Order Of Operations

- Kama ambavyo tulisoma katika O-level kwamba kuna magazijuto au tunaweza tukasema BODMAS Kwenye lugha ya kingereza, sasa kwenye upande wa C++ order of operations pia zipo hivyo unavyoandika program ni vizuri na muhimu kuzingatia order of operations katika C++.

- Katika C++, order of operations ndio zina determine mfuatano ambao operators mbambali zinakuwa evaluated katika expression. Order of operations katika operesheni katika C++ ni sawa na order za operesheni katika hesabu yaani mathematics.

![Operator Precedence](/assets/operator%20precedence.PNG)

## Writing Output To The Console

- Angalia program ifuatayo,

```cpp
#include <iostream>


int main() {
    std::cout << "Karibu Ujifunze C++";
    return 0;
}

```

Cout inawakilisha `standard output stream`, stream inawakilisha sequence of characters, standard output ni console au terminal window, hivyo kupitia cout tunaweza tukaprint sequence za characters katika console a terminal, na hizi << left angled brackets zinaitwa stream insertion operator ni operator ambayo inatumika kfanya insertio kitu fulani kwenda kwenye output stream ila kwenye program yetu tutaspecify maneno yaani chracters ambazo ni `Karibu Ujifunze C++` na hzio chracters zitakuwa ndani ya single au double quotes katika program yetu.

## Reading From The Console

- Katika C++ tuna standard output na kuna standard input standard input itatuwezesha kuweza kusoma(read) input ya user kutoka kwenye console,object hiyo inayotumika ili tuweze kyread input from the console ni `cin`, mfano wa program yetu hapa chini, tengeneza program ambyo itamuwezesha mtumiaji wetu aweze kuingiza namba moja kisha hiyo namba ihifadhiowe kwenye variable.

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Ingiza namba: ";
    int number;
    cin >> number;

    cout << number;
    return 0;
}

```

- << inaitwa `stream extraction operator` ni tofauti na `stream insertion operator` variable yetu amabyo imekuwa declared katika program yetu ni int na endapo user ataigiza float basi kipande wa integer tu ndio kitachukuliwa na kile cha float kuanzia desimali kitakatwa,ila kama unataka mtumiaji wako aweze kuingiza float hakikisha data type yako inakuwa declared kama float.

- Kwa kutumia cin unaweza ukatengeneza a simple calculator ambayo itaumezesha user kuingiza namba ya kwanza kisha namba ya pili na wishoni inafanya calculation yako. Hii ni kama exercise hivyo hakikisha umepitia hiyo.

## Comments

- Katika C++, comments ni zile code ambazo haziwezi kuwa executed na compiler yetu,kuna ian mbili za comments kuna single line ambazo zinaandikwa kwa kutumia back slash // na pia kuna multi-line comments ambazo zinakuwa katika mtundo huu /**/, Mfano:

```cpp
// This is a single-line comment
int x = 5;  // This is another single-line comment

/*
This is a multi-line comment.
It can span multiple lines and is useful for longer explanations or commenting out
larger blocks of code.
*/

int y = 10;

/*
You can also use multi-line comments to temporarily disable sections of code:
int z = 15;
*/

```

- Kujua umuhimu wa comments katika program yako ni muhimu sana, kjua zaidi kuhusu comments unaweza ukapitia [hapa](https://medium.com/@godblessnyagawa/understanding-the-significance-of-comments-in-programming-introduction-in-the-intricate-world-of-938eb4632da1)   .

## Working With Booleans

- Kama ilivyo katika lugha nyingine kama JavaScript hata pia C, kuna namna jinsi ya kufanya kazi na bullian values(boolean values) basi kwenye C++ pia kuna bulliani values,boolean values ziopo true na false katika C++, Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    bool amesajiliwa = true;
    cout << amesajiliwa;
    // output: 1
    return 0;
}
```

Tumefanya declaration na initialization ya variable yetu ambayo inaitwa amesajiliwa na output ni 1, **Kwanini?** Katika C++ values za ndani (internal values) zinakuwa represented kwa kutumia sifuri na moja (0 na 1), hivyo Sifuri ni sawa na false na moja ni sawa na true.*Pia kama tunataka tuone value ya kweli au Sio Kweli aktika terminal badala ya 0 na 1?* Tuna string manipulators nyingine inaitwa <span style="color:red">boolalpha</span> badala ya print value ya bool tutatumia boolalpha ili kuweza manipulate string yetu.Angalia mfano hapo chini!

```cpp
#include <iostream>

using namespace std;

int main()
{
    bool amesajiliwa = true;
    cout << boolalpha << amesajiliwa;
    // output: true
    return 0;
}
```

boolapha ikishatumika kwa mara ya kwanza tu kwa kila baada ya boolean values zote zinazokuwa printed kwentye screen zitakuwa formatted Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    bool amesajiliwa = true;
    bool anaumwa = false;
    cout << boolalpha << amesajiliwa << endl;     // output: true
    cout << anaumwa;     // output: false

    return 0;
}
```

Ili kuweza kuturn off boolapha utatumia `noboolalpha` Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    bool amesajiliwa = true;
    bool anaumwa = false;
    cout << noboolalpha << amesajiliwa << endl;     // output: 1
    cout << anaumwa;     // output: 0

    return 0;
}
```

## Working With Characters And Strings

- Katika C++ kuna built-in data types ngyingine kama char na string, char inatumika kufanya kazi na single character ila string inatumuika kufanya kaz na mfuatana wa characters (group of characters), Kufanya declaration ya character tunaanza na char kewyord ikifuatiwa na jia la character yako.Charcter yako itakaa ndani ya single quotes '' na sio double quotes ""

```cpp
#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    cout << ch;
    // output: a
    return 0;
}
```

Kufanya declaration ya string ni rahisi utofauti wake na charcter ni data type na pia value ya string inakuwa ndani ya double quotes, Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    string lugha = "C++";
    cout << lugha;
    // output: C++
    return 0;
}
```

Kupitia string tunaweza tukatumia kuweza kupata details za mtumiaji kwa kutumia cin,kwamba mtumiaji ataingiza jina lake kisha tutamwambia karibu mtumiaji(jina lake),Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Jina lako nani? ";
    cin >> name;
    cout << "Karibu " << name;

    // output: 
    return 0;
}
```

Endapo mtumiaji wetu ataingiza jina la kwanza na la katikati kuna baadhi ya maneno yatakatwa katika kwa sababu kwa kutumia cin itaangalia kwamba sehemu ambazo kuna space program yetu ndio inaishia hapo. program yetu je ili kuweka kusolve tatizo hilo tunfanyaje? Basi hapa tutaumia `getline()` function na getline function inachukua vitu viwili yaani parameters mbili, ya kwanza input stream `cin` na ya pili ni string variable ambayo ni `name`

```cpp
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Jina lako nani? ";
    getline(cin, name);
    cout << "Karibu " << name;

    return 0;
}
```

## Variable Scope and Lifetime

- Variable katika programming ina scope mbili ambazo ni global scope na local scope, Variable katika global scope zinakuwa nje ya main function na variable za local scope zinakuwa ndani ya main function za variable iliopo ndani ya global scope inaweza kuwa accessed hata ndani ya local scope yaani ndani ya main function.

## Working With Standard Library

-

## Common Mistakes

[⬆️ Return to Top](#top)
