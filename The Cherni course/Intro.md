c++ is made by Bjarne Strustrop 1978-1979 At & t bell labs
starting think c with enhacements
in 1983 it become c++
Java is written in C++
C++ is a middle level language.
C++ follows three programming paradigms

1.  Procedure oriented
2.  Generic programming
3.  Object Oriented Programming

Comaprison between c++

c++ is a super set of c language
c++ program can use existing c software libraries
c follows top down approach
c++ follows bottom up approach
c is procedure oriented
c++ is object oriented

Object Oriented programming

Some problems are faced by developers by seeing large programs and their mainatainablity
then a large group academics innovate a guideline for better understanable , thinkable
and maintainable and modular way of witing code.

that guidelines are based on concept of objects and thats why known as object oriented programming

so

"OOP is a programming paradigm which revolve around the concept of object"

Concepts in object oriented programming

Encapsulation
Data Hiding
Abstraction
Polymorphism
Inheritance

Concepts of classes and objects and enccapsulation

What is a class?

A class is a blueprint of an object.

Example A map of a house is not a house but a blueprint of how house is gonna made and what things and features it has.

In the sameway class is a blueprint of object.
Or we can say a object is a instance of a class.

class defines what property === variables
and what methods === function related to properties , are going to withheld in the object.

Object is a run time entity means object are created when program runs.

like a variable is a small memroy space.
An object is a record of variables and methods.
So object is a larger memory space.
But object is equivalent to a variable.

A normal variables have datatypes in the same ways classes are datatypes for the objects.

Now about encapsulation.

As class encapsulates all the data and methods that operates on that data in a single construct.

In this way construct of class in a language is helpful in encapsulation of related data.

Encapsulartion should done in a right way.

we should ony kept the data related to one entiy in a single class.

## Coclusion

1. A class is a blueprint of an object
2. A class is a description of object property set and setof operations.
3. Creating a class is as good as defining a new datatype.
4. Class is a means to acieve encapsulation.
5. Class is a run time entity.
6. Object ia an instance of a class.

Example

class Box {
int l,b,h;
void setDimension(int x,int y, int z){
...
}
void showDimensions(){
.....
}
}

Box b1; space with three variable l,b,h
Box b2; space with three variables l,b,h
Box b3; space with three variables l,b,h

## Software development in c++

Complete process

Make a source file , which can be a small part of larger software (may or may not have a main function)

Build Process

Step 1 Preprocessor

All the header files code is merge in our source file by a program called preprocessor.

Header files contain the declaration of library functions used in our code.

give us temp file with .i extension

Step 2 Compilation

Now our file is check for errors by compiler like if has not any syntactic error.

if error then commpiler stop working and give errors to us.

Any error at this time is called as compile time error.

if not the compiler converts the code into the binary lanaguage of two's and one's.

it gives us a file with .obj extension

main function is also not needed at this step

Step 3 Linking

This process is done by a program called linker

it take our .obj file and link or mix it with the .obj file of other library
functions that are prcompiled

and finally gives us .exe file whivh is our final software.

Now Intro to cpp over.

Why to learn c++ today

Yes it is old but it has control over evry instruction that is your cPU going to execute.

Difference between c++ and java , c#

1. java c# are virtual machine languages
   while c++ directly compiled to machine code.

2. Thats why c++ is fast

3. we can develop for any platform but we need compiler for that platform

4. we can code device drivers , console applications , game engines and embedded systems and hardware close libraries like openCV which works closely with GPU(graphical processing unit)

## How compiler works

c++ source code file also called as a single translational unit
It is given to the compiler
compiler has a piece of software called preprocessor
preprocessor replace the contents of source file according to # statements
then compiler make a AST (abstarct syntax tree) and covert the code into machine code.
