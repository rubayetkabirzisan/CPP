#include<bits/stdc++.h>
using namespace std;
class MyClass
{
public:

    int* arr;
    int size;

    MyClass()
    {

    }
    //deep copy constructor
    MyClass(const MyClass &obj)
    {
        size=obj.size;
        arr= new int [size];

        for(int i=0;i<size;i++)
        {
            arr[i]=obj.arr[i];
        }
    }
    //destructor
    ~MyClass()
    {
        delete[] arr;
    }
};
int main ()
{
    MyClass obj1;
    obj1.size=5;
    obj1.arr= new int [obj1.size];

    for(int i=0;i<obj1.size;i++)
    {
        obj1.arr[i]=i;
    };

    MyClass obj2 = obj1;//calls the shallow copy constructor

    obj1.arr[0] = 100;//modify obj1's array

    cout<<obj2.arr[0]<<endl;

    return 0;
}

