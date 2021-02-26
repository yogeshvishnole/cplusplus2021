#include <iostream>

int main()
{
    // According to cherno pointers and references are almost same
    // references are some sntactis sugar around pointers
    // they are less powerful in my view

    // references have to reference an already existing variable
    int var = 8;
    int &ref = var;

    //  ref is alias of the var
    // we can use ref at the place of var
    // ref and var are pointeing to same memory;
    // ref is a name only they exist in our source only in memory we have only one address
    // we can refer that address with var and ref both varaibles
    std::cout << "Hello" << ref;

    // Types of function calls
    // 1. pass by value parameters copied no change in original parameters
    // 2. pass by pointer we have too pass the address of the variable and derefernce it inside the function
    // 3. pass by reference we have to take the refrence of variable

    // Examples
    //    void increment(int a)
    //    void increment(int *a)  call --> increment(&a) dereferecing --> (*a)++ (first ++ then *)
    //   void increment(int& a)  call --> increment(a)
    //
    // For me best is pass by references
    //

    // we can not to like below
    // int& refa; --> error

    int a = 8;
    int b = 8;
    int &refa = a;
    refa = b; // this assigns the value of b to a
}