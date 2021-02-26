#include <iostream>
using namespace std;

/* 

templates means method of genric programming
in other laguages it is called as generics
but it is more powerful than those languages

According to me we create a template class then compiletr generates specfic type classes based on that template or in simple terms compiler genrates code for us


 */

// Code before template

// void print(int value)
// {
//     cout << value << endl;
// }

// void print(string value)
// {
//     cout << value << endl;
// }

// void print(float value)
// {
//     cout << value << endl;
// }

// int main()
// {
//     print(10);
//     print("Hello");
//     print(5.5f);
// }

// code after templates

// process of templating (happen at compile time)

// compiler sees template keyword
// it meets first template fuction call
// it then creates a regular function using implicit type knowing or if defined explicitly
// it happens for all the function calls for different types

// note note note
//template doesnt exist until we call it we can prove this by making a mistake in template code
// but some compilers also give error in template code like clang

template <typename T> // alternate template<class Yog>
void print(T value)
{
    cout << value << endl;
}

template <typename T, int N>
class Array
{
private:
    int m_Array[N];

public:
    int getSize()
    {
        return N;
    }
};

int main()
{
    Array<int, 5> array;
    cout << array.getSize() << endl;
    print(5); // it is implicit taking type // explicit way --> print<int>(5)
    print("Hello");
    print(5.5f);
}