#include <iostream>
using namespace std;

class Demo
{
    int data;
    int *p;

public:
    // here demo is dynamic constrctor , as it allocates memory to the object at run time.
    // here p should be a member variable otherwise It is not a dynamic constructor
    Demo()
    {
        p = new int;
    }
};

int main()
{
}