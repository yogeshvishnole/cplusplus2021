#include <iostream>
#include <array>
using namespace std;

class Entity
{
public:
    static const int size = 5;
    // c++ 11 standard  , it also has size and throws error on out of bound
    array<int, 5> another{0};
    int a[size];

    void printArr()
    {
        for (int i = 0; i < another.size(); i++)
        {
            cout << another[i] << endl;
        }
    }
};

int main()
{
    // Array in cpp is just a pointer

    int example[5];
    // size of array = 5
    // example === base memory address
    example[0] = 1;
    example[1] = 2;
    // same using pointer artithmetuc
    *(example + 0) = 3;
    *(example + 1) = 4;

    int *ptr = example;

    // Array using the new keyword

    int *another = new int[5];

    // we have no way to know the size of array

    // some indirect way but it can be done with only stack allocated array

    int a[5];
    int sizeofArray = sizeof(a) / sizeof(int);

    cout << example[0] << endl;
    cout << example[1] << endl;

    for (int i = 0; i < 5; i++)
    {
        example[i] = i + 1;
    }

    // range based loop
    for (int i : example)
    {
        cout << i << endl;
    }

    Entity e;
    e.printArr();
}