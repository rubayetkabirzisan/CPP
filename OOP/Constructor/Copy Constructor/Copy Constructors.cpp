#include<bits/stdc++.h>
using namespace std;
class Person
{
private :
    string name ;
    int age;
public:
    Person (string n,int a)
    {
        name = n;
        age = a;
        cout<<"Creating a Person object..."<<endl;

    }
    void print ()
    {
        cout<<"Name : "<<name<< ", Age : "<<age<<endl;
    }


};
int main ()
{
    Person p1("Alice",25);
    Person p2=p1;///copy p1 to p2 using the default copy constructor
    p1.print();
    p2.print();
    return 0;
}
