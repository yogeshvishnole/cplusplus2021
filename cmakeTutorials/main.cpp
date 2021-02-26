#include <iostream>
#include <multiplier.h>
#include <boost/lexical_cast.hpp>
using namespace std;
int main()
{
    cout << "Hello Yogesh" << endl;
    cout<<multiplier(10.0,20.0)<<endl;
    cout << boost::lexical_cast<string>(10) << endl;
}