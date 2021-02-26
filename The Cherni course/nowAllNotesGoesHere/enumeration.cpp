#include <iostream>
using namespace std;

/*
Enum is a way to group similar type of constants
so that we not have to type them always by overseleves
instead we can use Enum variable in place of them
what benefit
we can make mistake in typing values
and mistake can not be recognised by compiler 
and this logical mistake break our program at runtime
which is very bad thing
If we use enum variable at every place instaed of that value
if we mistyped we get the error by the compiler
and we saved ourselves

Some speciality of enum
1. enum variables are by default started from 0 and then goes on , we can chage this behaviour by assigning  a manual value to a enum variable
2. enum variables by default are integers we can change there datatype to anything
3. enum is not a namespace

below are small examples of all things above 

for real usecase see the log class

NOTE NOTE NOTE NOTE *************************************************************

Enum is not a namespace like class so we must have to declare all enum variables unique 
*/

enum Example
{
    A, // value of A == 0 type int
    B, // value of B == 1 and type int
    C  // value == 2 ,type int
};

// Now we change type and default value

enum Example2 : unsigned char
{
    D = 5,
    E, // value of E = 6 and type char
    F = 7
};

int main()
{

    cout << B << endl;
    Example value = B;
    if (value == A)
    {
    }
}