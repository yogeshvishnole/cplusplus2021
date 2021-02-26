#include <iostream>
using namespace std;

/*

member initializer list 

It is a way to initialize the members of a class.
you know we initialize them via constructor
in this also we initialize them via costructor but in a special way , we see it in example

why this method ? 
1. This method increase readability as we not clutter our constructor with all the initializations
2. This method is more efficient when we have to initialize the members which are not primitive
means the mebers that are object of other classes ( like strings)4
3. initialization should be in order

how they are efficient
for normal construtor initialization like
class sa{
string s;
sa{
    s = "s0";
}
}

in above method two string instance are created and the first one is just thrown away.
thats why member initializer list is best.

Now lets see the example


*/

class Exam
{
public:
    Exam()
    {
        cout << "Created as";
    }
    Exam(int i)
    {
        cout << "Created with parameter " << i << endl;
    }
};

class Example
{
public:
    int x, y, z;
    Exam e;
    // should be in order
    Example() : x(0), y(0), z(0), e(8)
    {
    }
};

int main()
{
    Example e;
}