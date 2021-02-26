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
