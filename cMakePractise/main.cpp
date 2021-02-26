#include <iostream>
#include <boost/lexical_cast.hpp>
using namespace std;
using namespace boost;

int main(int, char **)
{
    std::cout << lexical_cast<string>(200);
}
