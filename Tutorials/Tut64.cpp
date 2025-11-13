 #include <iostream>
#include <fstream>
/*These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class
*/
using namespace std;

int main()
{
//    // Writing to a file
//    ofstream out("Sample64.txt"); // Open file for writing
//    if (out.is_open())
//    {
//        string st = "Harry bhai";
//        out << st;
//        out.close(); // Close the file after writing
//    }
//    else
//    {
//        cout << "Unable to open the file for writing." << endl;
//        return 1; // Exit with an error code
//    }

    // Reading from a file
    ifstream in("Samplle 64b.txt"); // Open file for reading
    if (in.is_open())
    {
        string st2;
        while (getline(in, st2)) {
            cout << st2<< endl;
        }
        in.close(); // Close the file after reading
    }
    else
    {
        cout << "Unable to open the file for reading." << endl;
        return 1; // Exit with an error code
    }

    return 0;
}
