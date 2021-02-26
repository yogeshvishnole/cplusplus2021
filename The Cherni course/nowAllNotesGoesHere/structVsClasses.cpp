// The only differenec between class and struct is

//  In class properties and metods by default are private
//  while they are publlic by default in structs

#include <iostream>

struct Player
{
    int x = 10;
    int y;
} A;

int main()
{

    std::cout << A.x << std::endl;
}

// #include <iostream>
// using namespace std;

// struct Point
// {
//     int x, y;
// };

// int main()
// {
//     struct Point p1 = {1, 2};

//     // p2 is a pointer to structure p1
//     struct Point *p2 = &p1;

//     // Accessing structure members using
//     // structure pointer
//     cout << p2->x << " " << p2->y;
//     return 0;
// }