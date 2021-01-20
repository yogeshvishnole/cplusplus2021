#include <iostream>
using namespace std;

// how to write a fucntio

// returntype nameoffunction(inputs){
//     return output
// }

int multiply(int a, int b)
{
  return a * b;
}

// all our code is collection fo functions
// function declarations goes into the header files
// definitions goes into the translational units

int main()
{
  // functions is a usable block of code

  // benefit of functions
  // 1. We can reuse the logic
  // 2. Not change the logic at every place if some thing in logic changes

  // some overheads arealso come like we have to move to stack

  // calling a function
  int p;
  cout << multiply(1, 2) << endl;
}