#include <iostream>
using namespace std;

/* 

some notes on virtual member of base class

to override a method in child class we have to made it virtual

virtual makes a vTable in memory
and internally the base class contains a member pointer which points to that vTable
vTable has all the info of mapping the correct members at runtime

thats why method overriding or dynamic method dispatch is also called as runtime polymrphism



 */

class Vehicle
{
public:
    string fuelName;
    virtual void sound()
    {
        cout << "Hin Hn" << endl;
    }
};

class Car : public Vehicle
{
public:
    void sound() override
    {
        cout << "Bhur Bhur" << endl;
    }
};

int main()
{
    Vehicle *nato = new Car;
    nato->sound();
}