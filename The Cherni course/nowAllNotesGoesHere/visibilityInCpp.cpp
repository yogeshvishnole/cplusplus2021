#include <iostream>
using namespace std;

/* 


Visibilty defines the accessibilty of a member of a class or struct

three types of visibilty in cpp can be

1. public --> can be accesed anywhere
2. private --> can be accessed in a class only and friends of that class
3. protected --> can be accesed in class or the child classs


 */

class Writer
{
private:
    string inkName;

protected:
    string writerName;

public:
    Writer() {}
    Writer(string &inkName) : inkName{inkName}
    {
        cout << inkName << endl;
    }
};

class Pen : public Writer
{
public:
    int inkLevel;
};

int main()
{
    string inkName = "syahi";
    Writer w(inkName);
    // w.inkName;
    // w.writerName;
    Pen p;
    p.inkLevel = 10;
}