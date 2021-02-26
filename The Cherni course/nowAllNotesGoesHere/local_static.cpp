#include <iostream>
using namespace std;

/*
  Docs

  local static concept is very interesting and useful in my opinion

  lets uderstand it

  while declaring a variable we have two considerations
  1. its lifetime
  2. its scope

  lifetime --> means when it is created in memory and when its memory is freed
  scope --> where it can be scoped

  so what is local static

  local static is a variable whose lifetime is equal to lifetime of program
  and scope is equal to the block where it is declared

  first we see a simple example
  then we see its usecase in singleton declaration
*/

void function()
{
    // local static variable
    static int i = 0;
    cout << i << endl;
    i++;
}

// singelton without local static

class Singleton
{
private:
    static Singleton *s_instance;

public:
    static Singleton &get()
    {
        return *s_instance;
    }

    void hello()
    {
        cout << "Hello from singelton" << endl;
    }
};
Singleton *Singleton::s_instance = nullptr;

// Singleton with local Static

class SingletonStatic
{
public:
    static SingletonStatic &get()
    {
        static SingletonStatic instance;
        return instance;
    }

    void hello()
    {
        cout << "Hello from singleton static" << endl;
    }
};

int main()
{
    function();
    function();
    function();
    function();
    function();
    function();
    function();
    function();
    function();
    // what will be last printed value // answer == no. of function call
    Singleton::get().hello();
    SingletonStatic::get().hello();
}