#include <iostream>
using namespace std;

// static keyword before a class member make it a class variable
// means we not need a instance for that variable
// that instance is shares across all class instances
// similarly we have static methods inside the classes for manipulating the static variables
// a static method can not use a non static variable
// its reason is straight forward as static is not associated to any object so it confused which instance variable to use and thats why compiler throw error

// some special insight from  cherno

// There is only one difference between normal functions and member functions
// that is member functions get a special parameter that is the instance of the class
// we can pass instance to any function to make it like a member method

struct Entity
{
    static int x;
    static void print()
    {
        std::cout << x << endl;
    }
};

// we must have define a static variable as below otherwise we get an error
int Entity::x;

int main()
{
    Entity::x = 10;
    Entity::print();
}