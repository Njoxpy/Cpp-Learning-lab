# Streams

- [Introduction to Streams](#introduction-to-streams)
- [Input and Output Streams](#input-and-output-streams)
- [Standard Streams](#standard-streams)
- [Writing to Streams](#writing-to-streams)
- [Reading from Streams](#reading-from-streams)
- [Writting to Binary Files](#writting-to-binary-files)
- [File Streams](#file-streams)
- [String Streams](#string-streams)
- [Stream Manipulators](#stream-manipulators)
- [Chaining Streams](#chaining-streams)
- [Error Handling with Streams](#error-handling-with-streams)
- [Custom Streams](#custom-streams)
- [Streams and User-defined Types](#streams-and-user-defined-types)
- [Best Practices](#best-practices)

## Introduction to Streams

Stream class zinashare common base (same interface), kuna interface 3 katika C++ zinazohusika za files.
      - `ifstream`: Ifstream inamaanisha input file stream, inahusika kuread data from a file.
      - `ofstream` : Ouput file stream, output stream for files, inatumika kuweka kuandika data kwenye file(Writting data toa file).
      - `Fstream` : fstream inajumlisha vote kwa pamoja, `ifstream` pamoja na `ofstream`, Hivyo kama utatuma file streams njia nzuri ni kuweka header files zake,na pia ni muhimu ukaweka `fstream` kwa sababu ina include zote kwa pamoja.

## Input and Output Streams

## Standard Streams

## Writing to Streams

- Ili uweze kufanya writting to a text file unatumia `fstream` kwa sababu inacombine vyote pia unaweza kutumia `ofstream` kama header,baada ya hapo ndani ya main function hakikisha unatumia filestream au unaweza ukatumia ofstream ili uweze kuandika kwa file,kumbuka kwamba ofstream ni class hivyo lazima ucreate instance ya class yako(instance of an object) `ofstream file`, file object lina method kwa ajli ya kufungua file `file.open` kisha ndani ya file.open("pass name of the file"), `file.open("file.txt")`,kama file aina ya `file.txt` halitakuepo basi litakuwa created zaidi ya hapo kama tayari lipo kwenye program yetu basi litakuwa overwritten katika program yetu,ili kuweza kuangali kama file liko opened au laa tumia conditional statement, pia ndani ya file object kuna properies ya `.is_open`  inatumika kuangali kama file limefunguliwa au hapana.
- Baada yta hapo ni tayari kuweka kuandika kwenye new file badala ya kutumia cout kuandika kwenye new file tuatumia fiole ili kuweka kuandika to a new file katika program yetu. `file << "Hello Njox"` baada ya hapo close file lako ili kuweza kurealease space ambayo ilikuwa alloca. `file.close()`

```cpp
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    // create an instance of a class(object)
    ofstream file;

    // check to see if the file is opened or not
    file.open("file.txt");

    if (file.is_open())
    {
        file << "C++ is awesome" << endl;
        file.close();
    }
    else
    {
        cout << "Error when opening file" << endl;
    }

    return 0;
}

```

- Kama unatumia VS Code ukiangali upande wa pannel utaona file lako limekuwa created au kwenye control panel utaona folder linaitwa output na ndani utaona file lako `file.txt`.

![File Created](/assets/file.PNG)

Ila kama unatumia CLion nenda upande wa project then nenda kwenye folder linaitwa CMake-Build-Debug hapo ndipo utaona file lako limekuwa created.

## Reading from Streams

- Procedures ni kama zinafanana

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("data.txt");

    if (!file.is_open())
    {
        cerr << "Cannot open data.txt!" << endl;
        return 1;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();

    return 0;
}
```

## Writting to Binary Files

## File Streams

## String Streams

## Stream Manipulators

## Chaining Streams

## Error Handling with Streams

## Custom Streams

## Streams and User-defined Types

## Best Practices
