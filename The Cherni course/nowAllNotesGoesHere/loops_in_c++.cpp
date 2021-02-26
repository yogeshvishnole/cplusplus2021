#include <iostream>
using namespace std;

int main()
{
    // for loop

    for (int i = 0; i < 5; i++)
    {
        cout << "hello world" << endl;
    }

    // while loop
   int i = 0;
    while(i<5){
        i++;
        cout<<i<<endl;
    }

    
    do{
        i--;
        cout<<i<<endl;
    }while(i>=0);
}