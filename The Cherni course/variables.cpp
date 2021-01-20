#include <iostream>
using namespace std;

int main()
{

    // programs are all about playing with data
    // data stores in memory locations
    // we have to use a data again and again
    // memory locations name a re difficult to remember
    // therefor we alias them with other name called variab;e

    int playerScore = 30;
    cout << playerScore << endl;

    // here int is datatype
    // A datatype shows how much space is given to that variable
    // and also what type of data save in that variable

    // lets break we have int == 4 byte
    // 1byte == 8 bit
    // 4*8 == 32
    // for signed ints one bit is for sign
    // therefore max signed number == 2 power 31
    // max unsigned == 2power 32

    unsigned int player2Score = 40;

    // some other datypes we have

    //char == 1
    // short ==2
    // int == 4
    // long ==4
    // long long == 8
    // float == 4
    // dounble ==  8
    // bool === 1

    // how to know size of a datatypes

    cout << sizeof(bool) << endl;
    // here we define only the primitive datatype

    //with the help of this simple ones we can create  alot of complex data types
    // in which we can store any type of data
    // there are other types likr

    // 1 pointers   int* is apointer
    // 2 references  int& is a refernce
}
