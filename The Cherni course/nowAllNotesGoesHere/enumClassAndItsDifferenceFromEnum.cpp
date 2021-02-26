#include <iostream>
using namespace std;

/* 

Difference between enum and enum class

1. Enum is not a namespace while enum class is a namespace
2. Enum are default integers while enum classes arenot
3. we can declare same constants vars in two enum classes and can make variables of same name but if we make a normal enum with that name then we can not use that name anywhere.
4. Two variables of different enum classes can never be equal but two variables of enum classes could be equal

 */

enum class Color1
{
    red,
    green,
    blue
};
enum class Color2
{
    red,
    green,
    blue
};

void fun(Color1 c)
{
    switch (c)
    {
    case Color1::red:
        cout << "red" << endl;
        break;
    case Color1::blue:
        cout << "blue" << endl;
        break;
    case Color1::green:
        cout << "green" << endl;
        break;
    }
}

int main()
{
    fun(Color1::red);
}