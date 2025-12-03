# Input Handling

- [Error handling](#error-handling)
- [Advanced input handling techniques](#advanced-input-handling-techniques)
  - [Input validation](#input-validation)
  - [Command-line arguments](#command-line-arguments)

## Error handling

- Hakikisha umejua namna [cin, cout](/C++%20Learning-lab/intermediate/streams/streams.md) zinavyofanya kazi katika program yako kabla ya kusoma sehemu hii.

- Ili kuweza kuhandle errors kwenye program yako ni muhimu kuzanagtia je ni aina gani ya data ambayo mtumijai wa program yako anaingiza inaweza ikawa ni integer au string,Kama ni integer kuna namna kwa ajili ya kufanya hadnling ya user input kwenye program yako na moja kati ya njia zinazoweza kutumika katika program yako kwa ajili ya kufanya handling ya user input(integer) ni zifuatazo:

    1. `cin.fail()`

- Tuanze na mfano kwanza, chukulia program hapo chini.

```cpp
    cout << "Miaka: ";
    int miaka;
    cin >> miaka;
    cout << "Miaka yako ni: " << miaka << endl;
```

- Kutoka kwenye mfano hapo juu kwamba tunauliza miaka ya mtumijai wa program na baada ya kuuliza hapo tunatoa jibu kwenye terminal,vipi kama mtumiaji wetu ataingiza herufi badala ya namba, pia vipi kama mtumiaji ataingiza miaka ambayo ni negative, sasa sehemu kama hizi ndio sehemu za kufikiria namna ya kufanya hadling.Moja kati ya njia inayotumika kufanya handling kwenye program yako ni kwa kutumia `cin.fail()` tuaangalia kwamba kama kuna uncertainities kwenye program yetu tunacapture kwa kutumia cin.fail() ndani ya if statment, inachofanya cin.fail inaangalia kama kuna error kwenye program yako kama ni kweli basi statement ndani ya if statement ndio itakuwa executed kwa kutoa warning kwa user.

```cpp
    cout << "Miaka: ";
    int miaka;
    cin >> miaka;
    if (cin.fail())
    {
        cout << "Miaka sio sahihi!" << endl;
    }

    else
    {
        cout << "Miaka yako ni: " << miaka << endl;
    }
```

2.`cin.ignore()`

- Kila strem inakuwa na buffer(temporary storage) katika memory kwa ajili ya ksuoma values zako. Pale ambapo user anajaza value inaenda kwenye buffer hadi ambapo utaona whitespace au newline (\n) ndio value iliyoingizwa inahifadhiwa ila kama kutakuwa na newline au whitespace basi value ya pii itakuwa captured pia sasa buffer inachukua value mbili tu kwa muda mmoja,Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;

    cout << "Namba ya kwanza: ";
    cin >> number1;
    cout << "Namba ya pili: ";
    cin >> number2;

    cout << "Namba ya kwanza " << number1 << " , " << "Namba ya pili "<< number2 << endl;
    return 0;
}
```

Ukiingiza namba ya kwanza then ukaacha nafasi ukaingiza namba ya pili kwenye program yako,sasa kwa mfano namba ya kwanza uliyoingiza ni 3 bila kupress enters ukaacha nafsi ukajaza 12 sasa kinachotokea kwenye buffer ni kwamba itasoma namba ya kwanza ambayo ni 3 ila ndani ya buffer huwa znakaa value mbili tu na namba ya kwanza ni 3 na baada ya kuwa na whitespace namba ya pili ni 12 hivyo buffer inakuwa imejaa tayri hiyo kutakuwa hakuna nafasi ya kuweza kujaza namba nyingine ambayo inabidi ihifahiwe kwenye variable yako number2 hivyo, kwa kutumia `cin.ignore()` tunatumia kwa ajili ya kufanya clear ya buffer na inachukua parameters mbili parameter ya kwanza ni streamszie(idadi ya charcaters ambazo unataka ziwe ignored) na parameter ya pili ni delimeter (whitespace au newline).Ili uweze kupata access ya cin.ignore lazima kuwepo na access ya header file lake `#include <limits>`, cin.ignore inakuwa baada ya kuweza kuallow kupata namba ya kwanza ndio buffer inakuwa cleared.

```cpp
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int number1;
    int number2;

    cout << "Namba ya kwanza: ";
    cin >> number1;
    cin.ignore(numeric_limits<int>::max(), '\n'); // clear buffer
    cout << "Namba ya pili: ";
    cin >> number2;

    cout << "Namba ya kwanza " << number1 << " , "
         << "Namba ya pili " << number2 << endl;
    return 0;
}
/* Output:
Namba ya kwanza: 12 13
Namba ya pili: 12
Namba ya kwanza 12 , Namba ya pili 12
*/
```

3.`cin.clear()`

4.`isDigit()` and `isAlpha()`

- `isDigit()` inatumika katika C++ kwenye program yako kuweza kuangalia kama kuna digit kwenye string na pia unaweza ukawa na program ambayo unatumia kwa ajili ya kufana capturing ya user input kwenye program hivyo unaweza ukatumia isDigit kuweka kucapture kuona kama kwenye program yako kuna digit,Mfano:

```cpp
#include <iostream>

using namespace std;

bool nambaNiSahihi(string const &jina)
{
    for (char j : jina)
    {
        if (isdigit(j))
        {
            cout << "Jina haliwezi kuwa na namba" << endl;
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "Jina: ";
    string jina;
    getline(cin, jina);

    // ita function
    nambaNiSahihi(jina);
    return 0;
}
```

Tumetengeneza simple function ambayo itatuwezesha kuweza kuangalia kama jina atakalo ingiza mtuamiaji wa program yetu ni sahihi au sio sahihi kwamba tutafanya iteration kwenye string jina kisha tutaangalia kama kwenye string jina kuna kwamba kwa kila character ambayo ipo kwenye string jina tunaangalia kama kuna tarakimu kwa kutumia `isdigit()` function ambayo inapokea character kama argument.

5.`getline()`

- getline() inatumika ukiwa unataka kufanya capturing ya string ambayo ina maneno mengi kwa mfano jina la mtu `Njox McTominay` kwamba kama utatumia cin kinachofanyika kwenye buffer ni kwamba neno la kwanza linakuwa captured kwenye program yako na pale program katika buffer ikiona new space au newline (delimeter) ianchofanya inaruka baada ya kuona newline na kuenda sehemu nyingine kwenye program yako kama kuna kitu kingine kinakuwa captured hivyo ukitumia cinkinachokuwa captured ni neno moja tu.Mfano:

```cpp
#include <iostream>

using namespace std;

int main()
{
    string jina;
    cout << "Jaza jina lako: ";
    cin >> jina;
    cout << "Jina: " << jina;
    return 0;
}

/*Output:
Jaza jina lako: Njox McTominay
Jina: Njox
*/
```

- Kwa kutumia `cin()` kuna characters zinakuwa ignored kwenye program yako baada ya white space pamoja na newline.Sasa badala ya kutumia `cin` option nzuri ni kutumia `getline`.

```cpp
#include <iostream>

using namespace std;

int main()
{
    string jina;
    cout << "Jaza jina lako: ";
    getline(cin, jina);
    cout << "Jina: " << jina;
    return 0;
}

/* Output:
Jaza jina lako: Njox McTominay
Jina: Njox McTominay
*/
```

getline inachukua parameters mbili, input stream ambayo ni cin na parameter ya pili ni buffer ambayo ni string, na pia inarudisha reference kwenda kwenye input stream.

6.`endl()`

## Advanced input handling techniques

## Input validation

- Checking user input for specific criteria before using it in your program.

- Katika C++ kuna namna nyingi na tofauti za kuweza kufanya validation ya user input kwenye program yako.Baadhi ya njia hizo zinzotumika ni kwa kutumia `cout` na `cin` na zote hizi zina built in tools kwa kuweza kudeal uncertanities kwenye msimbo wako.

-

## Command-line arguments

- Accessing arguments passed to the program when it is executed.
