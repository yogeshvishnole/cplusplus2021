#include <iostream>
using namespace std;

/*

Destructor is a special method whose name starts with tilde symbol and same as class name which is called  when a object destroys , It calls automatically ,
we can also call it manually but no use of calling it manually.

the most prevalent use case of destructor is to free up the memory allocate in heap
with the help of new keyword.

when a object is destroyed
 A object is destroyed when the function in which it called get out of stack 

*/

class DestructorDemo
{
public:
    DestructorDemo()
    {
    }
    ~DestructorDemo()
    {
        cout << "DestructorDemo is destroyed" << endl;
    }
};

void function()
{
    DestructorDemo d;
}

int main()
{
    function();
    cout << "Hello after the function" << endl;
}