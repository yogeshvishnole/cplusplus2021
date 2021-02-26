#include <iostream>
using namespace std;

/* 

A class has at least one pure virtual function is abstract class
means we cant make object of that class
and any class that extends abstract class
can be instantiated if and only if it implement all vrtual fiunctions of abstract class
otherwise it also becomes abstract

 */

class Printable
{
public:
    virtual void printClassName() = 0;
};

class Student : public Printable
{
public:
    void printClassName()
    {
        cout << "Student" << endl;
    }
};
class Teacher : public Printable
{
public:
    void printClassName()
    {
        cout << "Teacher" << endl;
    }
};

void printClassName(Printable *p)
{
    p->printClassName();
}

int main()
{
    // Printable *p = new Printable;
    Printable *p = new Student;
    Teacher *t = new Teacher;
    Printable *pu = new Teacher;
    printClassName(pu);
    printClassName(p);
    printClassName(t);
}