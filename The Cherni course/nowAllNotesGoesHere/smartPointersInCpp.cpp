#include <iostream>
#include <memory>
using namespace std;

/* 

for using smart pointers we must include the memory header file

Smart pointers are managed pointers they automatically free the memory 
according to the type of smart pointer it is.

We are going lo learn three of them in this session
1. uinique pointer --> It deallocates as scope in which it allocates terminates it deleted the copy constructor as it delete in scope
2. Shared pointer  --> shared pointer it allows copying with the help of reference count
it not deallocates until all the refernces go out of scope
3. Weak pointer --> weak pointer allows copying but not thrws error as it become dangling

sometime they also allocate the memory by itself.


 */

class Entity
{
public:
    Entity()
    {
        cout << "Created Entity" << endl;
    }
    ~Entity()
    {
        cout << "Deleted Entity" << endl;
    }
};

int main()
{
    shared_ptr<Entity> copiedEntity;

    {
        unique_ptr<Entity> e0(new Entity);
        // unique_ptr<Entity> e1 = new Entity; not allowed as constructor of unique_ptr class is declared explicits
        unique_ptr<Entity> e1 = make_unique<Entity>(); // this method is exception safe

        shared_ptr<Entity> sharedEntity = make_shared<Entity>();
        weak_ptr<Entity> p = sharedEntity;
        copiedEntity = sharedEntity;
    }
}