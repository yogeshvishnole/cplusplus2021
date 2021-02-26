#include <iostream>
using namespace std;

/* 

strings in c++ are ascii encoded
strings are just collection of characters
char of size1 byte in cpp
Never copy a string into a read only funtion instaed pass a const reeference like const string&
because string copy can be very expensive as string sizes can be very long
 */

int main()
{

    // c like string
    const char *name = "hello";
    // it end with nulll ternmination character thats how compiler knows where string ends
    // compiler startprintten from address where it starts and printt till it encounters nulls
    // we can not delete it using delete becauese rule of tthumb is if not use new then not delete

    //a god example of null termnation

    char aarrr[6] = {'c', 'e', 'r', 'n', 'o', 'e'};
    // null = \0
    cout << aarrr << endl;

    // Now string class  it has all the metods to manipulate strings

    string str = "hello"; // --> "hello" is string literal
    cout << str << endl;
    cout << string("bye") << endl;
    cout << str.size() << endl;
    bool contain = str.find("h") != string::npos;
    cout << str.find("a") << endl;
    cout << string::npos << endl;
    cout
        << contain << endl;
    // string literals are const char * pointers in cpp
}