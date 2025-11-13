#include<bits/stdc++.h>
using namespace std;
class Person
{
private :
    string name ;
    int age;
public:
    Person (string n,int a)///Default copy constructor( Shallow Copy )
    {
        name = n;
        age = a;
        //cout<<"Creating a Person object..."<<endl;

    }

    Person (const Person &obj)///User defined copy constructor
    {
        name=obj.name;
        age=obj.age;
        cout<<"Copying Person Object..."<<endl;
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
