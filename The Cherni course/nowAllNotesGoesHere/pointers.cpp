#include <iostream>
#include <cstring>

int main()
{
    // pointers are integers but they store the memory address
    // pointer is just an integer that holds a memory address
    // pointer for all types is an integer
    // types only diffrentaites which type of data thatmemory address has

    // Lets declare a useless pointer
    void *ptr = 0;
    void *ptr_1 = NULL;
    void *ptr_2 = nullptr;
    // above all three are same they are pointed to a invalid memory address

    // & --> address of operator

    int var = 8;
    int *var_address = &var;

    // We can do like this
    double *var_bad_practise_address = (double *)&var;

    // Lets point to a address in heap memory

    char *buffer = new char[8]; /// buffer helds the address  of the first character in array of 8
    memset(buffer, 0, 8);

    //  double pointer

    // pointer to a pointer
    char **buffer_pointer = &buffer;

    std::cout << buffer << std::endl;
}