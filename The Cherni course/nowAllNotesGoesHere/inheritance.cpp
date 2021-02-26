#include <iostream>
using namespace std;
/* 

oop concepts


Encapsulation  concept of class
Data Hiding    visibilty keywords
Abstraction    methods
Polymorphism   overloading and overriding dybanmic dispatch  
Inheritance    reusability



Login
Start Free Trial

abstraction, encapsulation, inheritance, and polymorphism.
What Are OOP Concepts in Java? The Four Main OOP Concepts in Java, How They Work, Examples, and More
ALEXANDRA ALTVATERAPRIL 5, 2017DEVELOPER TIPS, TRICKS & RESOURCES

Java is one of many programming languages and technologies supported by Stackify’s leading tools, Retrace and Prefix. Because at Stackify we aim to help developers become better developers, we’re taking a look at some of the foundational concepts in the Java programming language. Read on for a primer on OOP concepts in Java.

New call-to-action
Definition of OOP Concepts in Java
OOP concepts in Java are the main ideas behind Java’s Object Oriented Programming. They are an abstraction, encapsulation, inheritance, and polymorphism. Grasping them is key to understanding how Java works. Basically, Java OOP concepts let us create working methods and variables, then re-use all or part of them without compromising security.

List of OOP Concepts in Java
There are four main OOP concepts in Java. These are:

Abstraction. Abstraction means using simple things to represent complexity. We all know how to turn the TV on, but we don’t need to know how it works in order to enjoy it. In Java, abstraction means simple things like objects, classes, and variables represent more complex underlying code and data. This is important because it lets avoid repeating the same work multiple times.
Encapsulation. This is the practice of keeping fields within a class private, then providing access to them via public methods. It’s a protective barrier that keeps the data and code safe within the class itself. This way, we can re-use objects like code components or variables without allowing open access to the data system-wide.
Inheritance. This is a special feature of Object Oriented Programming in Java. It lets programmers create new classes that share some of the attributes of existing classes. This lets us build on previous work without reinventing the wheel.
Polymorphism. This Java OOP concept lets programmers use the same word to mean different things in different contexts. One form of polymorphism in Java is method overloading. That’s when different meanings are implied by the code itself. The other form is method overriding. That’s when the different meanings are implied by the values of the supplied variables. See more on this below.

// Inheritance 

It is the one of the building block of oop it allows us to reuse the functionality of clas

if we have to write a function in different classes then it means we have to dulicate that function

to prevent it we can make a superclass then we can wirte the reusable functionality in that class

and can make different sub classes that can extends that functonality.


 */

class Entity
{
public:
    float X, Y;
    void move(float x, float y)
    {
        X = X + x;
        Y = Y + y;
    }
};

class Player : public Entity
{
public:
    const char *name;

    void printName()
    {
        cout << name << endl;
    }
};

int main()
{

    Player p;
    p.X = 2;
    p.Y = 2;
    p.move(5, 5);
    cout << p.X << " " << p.Y << endl;

    Entity *ent = new Player();

    cout << ent->X << endl;

    Player *po = new Player;
    cout << po->X << endl;

    Player yog;
    cout << yog.X << endl;
}