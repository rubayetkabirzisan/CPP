#include<iostream>
using namespace std;
class List_
{
    int *arr;
    int counter=0;
    int sizes;
public:
    List_()
    {
        cout<<"Default Construction Calling"<<endl;
        counter=0;
        sizes=0;
        arr=NULL;
    }

    List_(int n)
    {
        cout<<"Parameterized Construction Calling"<<endl;
        sizes=n;
        arr= new int [n];
    }
    ~List_()
    {
        cout<<"Deallocated"<<endl;
        delete arr;
    }
    void add(int value)
    {
        arr[counter]=value;
        counter++;
    }
    void remove_()
    {
        cout<<"Element removed"<<endl;
        counter--;
    }
    void print()
    {
        for (int i=0; i<counter; i++)
        {
            cout<<arr[i]<<endl;
        }
    }

};
int main ()
{
    List_ l(10);
    l.add(5);
    l.add(5);
    l.add(5);
    l.print();
    l.remove_();
    l.print();
}
