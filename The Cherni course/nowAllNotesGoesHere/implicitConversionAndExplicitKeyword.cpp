#include <iostream>
using namespace std;

class DemoClass
{
private:
    int m_num;
    string m_name;

public:
    explicit DemoClass(int m_num) : m_num{m_num}
    {
    }

    DemoClass(string m_name) : m_name{m_name} {}
};

void printDemo(const DemoClass &d)
{
    //Printing
}

int main()
{
    // Below code is implicitly converted by compiler to DemoClass r(5)
    // if we use explicit keyword before constructor then below code is invalid
    // DemoClass r = 5;invalid
    DemoClass r(5);
    DemoClass s = string("Yogesh");
    printDemo(string("Bhole"));
}