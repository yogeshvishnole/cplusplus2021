#include <iostream>
using namespace std;
/*

Constructor is a special method which calls when we instantiate an object of a class.
 properties
 1. same name as class name
 2. no return type
 3. main purpose of constructor to initialize instance properties or attributes
 4. there is always a default constructor
 5. we can use contructor trick to make someone unable to create object of a class (we see it in code)

*/

class ConstructorDemo
{
public:
    // default constructor

    ConstructorDemo() {}

    // our constructor

    ConstructorDemo(int i)
    {
        this->i = i;
    }

    int i;
    void print()
    {
        cout << i;
    }
};

class NotObjectClass
{
private:
    NotObjectClass()
    {
    }

public:
    static void print()
    {
    }
};

// one more method for no object creation

class NotObjectClass2
{
public:
    NotObjectClass2() = delete;
};

int main()
{
    ConstructorDemo obj(10);
    // NotObjectClass l; not possible
    //  use case of such class
    NotObjectClass::print();
    // NotObjectClass2 l; it is also not possible
    obj.print();
}