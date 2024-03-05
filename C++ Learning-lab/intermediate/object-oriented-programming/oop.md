# Object-Oriented Programming in C++

- [Introduction to OOP](#introduction-to-oop)
- [Classes and Objects](#classes-and-objects)
- [Acess Modifiers](#acess-modifiers)
- [Encapsulation](#encapsulation)
- [Inheritance](#inheritance)
- [Polymorphism](#polymorphism)
- [Abstraction](#abstraction)
- [Constructors and Destructors](#constructors-and-destructors)
- [Access Control](#access-control)
- [Operator Overloading](#operator-overloading)
- [Templates](#templates)
- [Exceptions in OOP](#exceptions-in-oop)
- [Best Practices](#best-practices)
- [Common Pitfalls](#common-pitfalls)

<a name="top"></a>

## Introduction to OOP

- Ili uweze kuandika software mablimbali kuna namba mbalimbali za kuandika program zako kama mabvyo kuna namna mbalimbali za kupika ugali pia kuna namna mabalimbali za kuandika software,hivyo katika object oriented kila kitu kinatambulika kama ni object na pia kitendo cha kutengeneza program kwa kutumia objects ndio tunaita object oriented programming.
- Namna hizo za kuandika program katika `C++` zipo nyingi ila mfano ni
  1. Functional programming
  2. Object Oriented Programming
  3. Event driven programming
  4. Procedural Programming

Ila njia mbili kubwa zinazotumika kwa sana ni `functional` na `object oriented`

- Ngoja tuangalia utofauti kati ya `functional` na `object oriented`

| Feature                               | Functional Programming (FP)                             | Object-Oriented Programming (OOP)                         |
|---------------------------------------|--------------------------------------------------------|--------------------------------------------------------|
| **Paradigm Type**                     | Declarative paradigm, focuses on "what to achieve"      | Imperative paradigm, focuses on "how to achieve"         |
| **State Management**                  | Emphasizes immutability; avoids changing state          | Manages state through mutable objects and methods        |
| **Data Mutation**                     | Discourages mutable data; encourages pure functions     | Allows mutable data and state changes through methods    |
| **Functions**                         | First-class functions, higher-order functions            | Functions encapsulated within objects, methods           |
| **Encapsulation**                     | Data is immutable and hidden; no shared state           | Encapsulation through objects and access modifiers      |
| **Inheritance**                       | Avoids classical inheritance; favors composition        | Utilizes class-based inheritance hierarchy               |
| **Polymorphism**                      | Achieved through higher-order functions and parametric polymorphism | Achieved through method overriding and interfaces        |
| **Side Effects**                      | Minimizes side effects for deterministic behavior       | Embraces side effects, can lead to non-deterministic behavior |
| **Parallelism/Concurrency**           | Easier to achieve due to immutability and lack of shared state | May face challenges due to shared mutable state          |
| **Typing System**                     | Strong typing, often supports type inference            | Strong typing, supports static and dynamic typing        |
| **Flexibility and Extensibility**     | Easier to extend and compose functions                  | Extensibility through class inheritance and polymorphism |
| **Error Handling**                    | Relies on immutability and monads for error handling    | Uses exceptions and error handling within objects        |
| **Common Languages**                  | Haskell, Scala, Clojure, Lisp, Erlang                  | Java, C++, Python, C#, Ruby, JavaScript                   |
| **Popular Frameworks/Libraries**      | React, Redux (JavaScript); Apache Spark (Scala); RxJava (Java) | Spring (Java), Django (Python), .NET Framework (C#), React (JavaScript) |

Object ni kitu chochote katika ssoftware ambacho kina properties(attributes) na pia methods au functions,Mfano mzuri ni gari,gari lina properties kama color na pia kuna methods ambazo zipo kwenye gari kama brake().Kwenye upande wa programming object sio kitu cha uhalisia ila ni vitu ambavyo vinatumika kutengeneza user interface ya program, mfano kama unaangalia video kwenye VLC basi vlc ina propeties kama playback speed na pia ina method au function kama play(), pause(), stop().

- Ili tuweze kutengeneza object katika C++ tunahitaji kuwa na class na class ni ndio blueprint ya kuweza kutengeneza object yetu.
- Properties au attributes ina majina mengi mojawapo ya hayo majina ni `attributes`, `member variables`, `fields`, `properties`, kwa hiyo hayo ni moja ya majina yanayotumika katika C++ kwa ajili ya attributes.

- Ngoja tuangalia utofauti kati ya classes na structs katika C++

| Feature                        | Classes                                       | Structs                                       |
|--------------------------------|-----------------------------------------------|-----------------------------------------------|
| **Access Modifiers**            | Can have private, protected, and public members | Can have private, protected, and public members |
| **Inheritance**                 | Supports public, private, and protected inheritance | Supports public, private, and protected inheritance |
| **Member Functions**            | Can have member functions with or without access specifiers | Can have member functions with or without access specifiers |
| **Member Initializers**         | Can use member initializers in constructors   | Can use member initializers in constructors   |
| **Default Access**              | Members default to private if not specified   | Members default to public if not specified    |
| **Use Case**                    | Typically used for modeling complex objects, encapsulation, and abstraction | Typically used for lightweight data structures or small objects with no encapsulation needed |
| **Memory Alignment**            | Can have alignment specifiers for better control over memory layout | Limited control over memory alignment          |
| **Object Initialization**       | Constructor is used for object initialization | Constructor is used for object initialization |
| **Pointer to Members**          | Supports pointers to members                  | Supports pointers to members                  |
| **In-Class Initialization**    | Supports in-class member initialization      | Supports in-class member initialization      |
| **Complexity**                  | Generally used for more complex scenarios and larger projects | Often used for simpler data structures and small, self-contained objects |
| **Default Accessibility**       | Members default to private if not specified   | Members default to public if not specified    |
| **Compatibility with C**        | Closer to C++ philosophy with additional features | Maintains compatibility with C structures     |

## Classes and Objects

- Ili uweze kutengeneza class yako katika program yako, kama unatumia `Clion editor` ni rahisi nenda kwenye editor yako kisha nenda sehemu ya project right click then chagua `new` kisha chagua `C/C++ Class`

![header file](/assets/header%20file.PNG)
then click ok, baada ya hapo utakutana na file limekuwa created kama hili.

![header file](/assets/rectangle%20cpp.PNG)

Baada ya hapo utakuta file mbili zimekuwa created kwenye program yetu ambapo file la kwanza linaitwa `Rectangle.h` ambalo ndio header file na file la pili ni `Rectangle.cpp`, header file linakuwa na features za rectangle class na pia la `Rectangle.cpp` ni file ambalo litakuwa na actual implementation la `Rectangle.cpp` file.

- Hapa kwenye header file na actual file ni kama kwenye upande wa Remote controller,remote controller inakuwa na uwezo wa kufanya operesheni mbalimbali ila ili uweze kufanya operesheni hizo kama kuongeza sauti au kuplay video na vitu vingine hauhitaji kujua ndani ya hiyo remote inafanyaje kazi basi hapo ni sawa katika program yetu,kwamba class yetu itakuwa na header file na file la actual implementation ili kupunguza complexity ndani ya class file `Rectangle.cpp`.

- Hivyo ndani ya `Rectangle.h`, tunahitaji kudefine properties na methods za hiyo class yako katika program yetu.Rectangle itakuwa na features kama `height` na `width` , yaani upana na urefu na pia itakuw na methods kama `draw()` na `getArea()`

```cpp
#ifndef SRC_RECTANGLE_H
#define SRC_RECTANGLE_H


class Rectangle {
    // properties
    int width;
    int height;
    
    // methods
    void draw();
    int getArea();
};


#endif //SRC_RECTANGLE_H

```

![attributes](/assets/attributes.PNG)

- Actual implementation ya code yetu itakuwa ndani ya file na `Rectangle.cpp`, katika `Rectangle.cpp` ndio tunaweza kufanya implementation ya rectangle class.Kufanya implementation ya draw class tutaanza Rectangle class ikifuatiwa `scope resolution operator` `: :` ikifuatiwa na jina la function au property yako.

- Ni muhimu kujua kwamba kuna utofauti wa header files kama zimetoka kwenye standard library zitakuwa ni na `< >` kama iostream ila kama ya kwetu hiyo itakuwa ndani ya quotes `" "`.

```cpp


#include "Rectangle.h"
#include <iostream>

using namespace  std;

void Rectangle::draw() {
    cout << "Nachora rectangle" << endl;
}

int Rectangle::getArea() {
    return width * height;
}  cout << "Nachora rectangle" << endl;

```

- Ili tuweze kutengeneza rectangle object katika file letu kwanza inabidi header file liwe katika `main.cpp`
`#include "Rectangle.h"`, na pia file linalotakiwa kuwa included ni header file na sio `Rectangle.cpp` file.Hivyo ndani ya main.cpp file ndiyo tutatumia class ya Rectangle kutengeneza object kama `Rectangle rectangle` na ili kuweza kupata methods za instance amabyo ni object rectangle tutatumia dot operator `rectangle.`.

```cpp
// main.cpp file
#include "Rectangle.h"

int main(){
    Rectangle rectangle;
    rectangle.draw();
    
    return 0;
}
```

Kwenye upande wa structures ukifanya declaration ya members wako huwa wanakuwa public by default ila kwa upande wa class hapana, kwa hiyo kama kwenye rectangle class yako utafanya initialization ya value ya object kama width by default utapata error kwanini? `class members huw wanakuwa private by default kwa hiyo inabidi ubadilishe kuwa public kama unataka iwe public`

```cpp
// main.cpp file
#include "Rectangle.h"

int main(){
    Rectangle rectangle;
    rectangle.draw();
    
    rectangle.width = 10;
    // error because the member variable rectangle.widh is private
    return 0;
}
```

Inabidi ubadili kuwa public kwahiyo ndani ya header file ndio unabadili ndani ya class declaration.

```cpp
#ifndef SRC_RECTANGLE_H
#define SRC_RECTANGLE_H


class Rectangle {
public:
    // properties
    int width;
    int height;
    
    // methods
    void draw();
    int getArea();
};


#endif //SRC_RECTANGLE_H

```

- Baada ya member variables kufanywa public basi unaweza ukabadili value zake katika program yako.

```cpp
// main.cpp file
#include "Rectangle.h"

int main()
{
    Rectangle rectangle;
    rectangle.draw();

    rectangle.width = 10;
    rectangle.height = 20;

    rectangle.getArea();

    return 0;
}
```

## Acess Modifiers

- Katika C++, "access modifiers" ni maneno muhimu yanayosaidia kudhibiti jinsi class members (vitu kama vile sifa(attributes) na njia)(methods) wanavyoweza kufikiwa kutoka nje ya class. Kuna "public", "private", na "protected". Hizi zinasaidia kutekeleza dhana ya "encapsulation," moja ya misingi ya programu katika OOP. Hapa kuna maelezo fupi:

  1. *Public*
    Wanachama wa "public" wa darasa hufanya kuwa interface yake kwa ulimwengu wa nje.
    -Members (Wanachama) ambao ni public wanaweza kufikiwa hata wakiwa nje ya class, na mda wowote

```cpp
    class Example {

public:
    int publicVar;
    void publicMethod() {
        // code here
    }
};
```

2.*Private*
Members ambao wamekwa kama private hawawezi kufikiwa kutoka nje ya class.
Members ambao ni private huficha sifa na maelezo ya utekelezaji.
Members ambao ni private wanaweza kuwa accessed ndai ya hiyo class tu.

```cpp
    class Example {
private:
    int privateVar;
    void privateMethod() {
        // code here
    }
};
```

3. *Protected*:
Wanachama waliotangazwa kama "protected" ni kama "private," lakini wanaweza kufikiwa katika class  zilizojengwa juu yake.
Members wa "protected" huruhusu class iliyojengwa yaliyojengwa kurithi(inherit) na kufikia wanachama(class members) hao.
Members wa "protected" hutumika unapotaka kuzuia upatikanaji kutoka nje ya (class)darasa, lakini kuruhusu upatikanaji kwa madarasa yaliyojengwa juu yake

```cpp
    class Base {
protected:
    int protectedVar;
    void protectedMethod() {
        // code here
    }
};

class Derived : public Base {
    // Can access protectedVar and protectedMethod here
};

```

## Encapsulation

## Inheritance

- Kama ambavyo binadamu tuna uwezo wa kurithi sura kwamba mtu anaweza akawa anafanana ya baba yake aua mama yake sasa kwenye upnade wa programming katika C+ kuna inheritance pia kwamba kwenye program yaetu kuna baadhi ya vitu vinarithi properties na methods ambazo zipo kwenye vitu vingine,Kwa mfano tunaweza tukawa na C++ class amabyo inaitwa `Umbo` na hilo umbo linaweza likaw na properties pamoja na methods mabalimbali sasa kutoka kwenye umbo tunaweza tengeneza umbo la `mduaala` ambalo linarithi baadhi ta tabia na methods amabzo zipo kwenye class ya umbo,pia tunaweza tengeneza umbo la triangle ambalo linarithi tabia kutoka kwa umbo class.

- Kwa upande wmingine tunaweza tukawa na class ambayo inaitwa `gari` na class hiyo ya gari inaweza ikazaa gari kama `BMW` `IST` hilo gari ambazo umeona hapo zinaweza zikawa na uwezo wa au properties na methods amabazo zimetoa kwenye class ya gari na hio ndio maana na inheritance,inheritance inarahisisha mambo kwamba baadala ya kuandika program yetu upya kuhusu object fulani basi tunaamua kuchukua properties au methods ya class fulani na kuweka kwenye class nyingine ambayo imetoka kwenye parent class.

## Polymorphism

## Abstraction

- Abstraction ni sawa na kusema data hding kwamba unapunguza complexity kwenye program yako.Kwa mfano kwenye remote controller ya TV yako hauhitaji kujua dani kuna nini ya hivyo vitu vyakop vinafanyaje kazi,sasa hapa ni sawa na abstraction kwamba unaficha vile vitu ambavyo sio vya msingi kwenye program yako na kuonesha vitu vyile tu ambavyo ni vya msingi kwenye program yako.Ni kama pia vile kwenye upande wa gari hauhitaji kujua gear ya gari inakoje na pia infanyaje kazi ila wao wameamua kunyesha vile vitu ambavyo ni vya muhimu tu kama uskani,sehemu na vitu vingine na hio ndio maana ya sbtraction.

## Constructors and Destructors

## Access Control

## Operator Overloading

## Templates

## Exceptions in OOP

## Best Practices

- Ndio nzuri ni kuweka public methods kwanza zikifuatiwa na private methods

```cpp
/*
In this header file we are going to declare the features of the rectangle class
*/

#ifndef SRC_RECTANGLE_H
#define SRC_RECTANGLE_H

class Rectangle
{
public:
    int width;
    int height;
    void draw();
    int getArea();

private:
    // private methods and variables
};

#endif // SRC_RECTANGLE_H

```

- Pendelea kuandka program yako kwa njia ya object oriented ili kuweza kufanya program yako iwe rahisi na kueleweka.

- Whenever we have string parameter it's best practice to declare it as reference parameter when setting value using setter.

## Common Pitfalls

[⬆️ Return to Top](#top)
