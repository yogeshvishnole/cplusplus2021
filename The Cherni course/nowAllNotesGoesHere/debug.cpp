#include <iostream>
#include "headerFiles/log.h"
// there are two important parts of debugging

// 1. breakpoints
// 2. reading the memory

int main(int, char **)
{
    int b, k;
    b++;
    k++;
    int a = 8;
    a++;
    const char *str = "Hellooooo";

    for (int i = 0; i < 5; i++)
    {
        std::cout << str[i] << std::endl;
    }

    log("Hello World");
}
