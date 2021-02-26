#include <iostream>
using namespace std;

// const with member functions

class Test
{
public:
    int x;

    // There are only two usecase of mutable
    // first usecase of mutable
    mutable int y;

    int getX() const
    {
        // x = 5; not possible because of const
        // const dont allow to change the members of class in this function
        // but if we want some variables to change bbut not all others to change
        // we can still do it by using const and make the varible that we want to change
        // as mutable

        // it is possible because y is mutable
        y = 10;
        return x;
    }
};

int main()
{

    // const promise us to let the variables changes directly || but we can bypass it using tricks

    // Example 1
    const int a = 5;
    // then
    // a = 7; not possible
    // bypassing const using pointers
    int *ap = (int *)&a;
    *ap = 10;

    cout << *ap << *(&a) << a << endl;

    // not changing the value of const
    // Example 2
    const int *addressVariabeConst = nullptr;
    // *addressVariabeConst = 10; it is not valid

    // Example 3
    // pointer address cant be changed
    int *const addressConst = nullptr;
    // addressConst = &a; notpossible

    // Second usecase of mutable with lambda functions

    // lambdas are small throwable functions that we can store in variables

    int x = 10;
    // different ways to pass argument in lambda
    // [x] == pass x by value
    // [&x] == pass x by reference
    // [&x,y] == pass x by reference and y by value
    // [=] == pass all arguments by value
    // [&] == pass all arguments by reference

    // now mutable usecase we can not mutate a variable pass in lambda as pass by value
    // to mutate all pass by values in lambda make lambda mutable
    auto f = [x]() mutable {
        x++; // not possible without mutable
        cout << x << endl;
    };
    f();
}