#include <iostream>
#include <fstream> // header file in which all stream classes are declared
using namespace std;

/* 

  complete process of writing in a file , there are some alternative methods but we see the simplest one first.

 1. make object of ofstream class
 2. now open the file (means take the file from disk to RAM)
 3. then write in the file using ofstream object and the extraction operator <<
 4. close the file and done


 */

int main()
{
    ofstream ofs;
    cin.get();
    ofs.open("myfile.data");
    cin.get();
    ofs << "Hello";
    cin.get();
    ofs.close();
    cin.get();
}