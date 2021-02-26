#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <forward_list>
#include <deque>
#include <queue>
using namespace std;

/* 

Containers are well implemented data structures for collection of objects
examples vectors,stacks,queues,maps,pairs

Containers are broadly classified in two parts
1. Sequence 
2. Associative a. ordered b. unordered

1. Sequence --> this store the data in sequential manner
examples --> vector,array,dequeue,forward_list,list,stacks,queues
2. Container --> they are used to implement associative arrays in which elements are stored in key value manner and they allow strict weak ordering
examples --> multimap,map,set,multiset
in sets data is key as well as value 

this are of two types

1. ordered --> they are ordered and they are implemented using the balanced binary serach trees n elements then height is o(logn) expected o(logn) map,multimap,setmultiset
2. unordered -->implemented using the hash tables therefore no order expected o(1) unordered_mao,unordered_multimap,unordered_set,unordered_multiet

 */

int main()
{
    // implement dynamic size array
    // random access allowed v[1] = 10;
    //  if size is 5 then if we insert one more elemenet it allocate a new array with double size and so on  v.size() gives number of elements it currently contains
    vector<int> v{0, 1, 2, 3};
    cout << v.size() << endl;

    //std::arr it is fixed size arr  in this we also have size function it gives size of array
    array<int, 5> a{1, 1, 2, 3, 4};
    cout << a.size() << endl;
    // list it is implementation of doubly linked list
    //insertion O(1)
    //deletion O(1)
    list<int> l;
    // forward_list is the implementation of the singly linked list
    forward_list<int> la;
    //dequeue
    // conatgois but some blocks are here and there
    //  perofrmance between vectors and list
    deque<int> d;

    // conatiner adapters

    // Adapters are interfaces that implements additional functionality on top of canatiners
    // Examples
    // stack,queue,priority queue
    // stack --> underlying conatiner deque
    //queue --> conatier dequeu we can use vetor or array
    // priority queue --> conatiner  it uses vector

    // Associative
    // 1.set  model of mathematical set collection of unique elements that servea s key
    //set four possiblities
    // 1. set {1,2,3,4}
    // 2. unordered_set
    // 3. multiset
    // 4. unordered_multiset\

    // map multimap unordered_map unordered_multimap
    // map {k1:v1,k2:v2}
}