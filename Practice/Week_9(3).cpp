#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
    string name;

    Person(string a,int b)
    {
        name=a;
        age=b;
        cout<<"Person constructor called"<<endl;
    }

    ~Person()
    {
        cout<<"Person destructor called"<<endl;
    }

};
class Employee:public Person
{
public:
    float salary;
    Employee(string a,int b,float c):Person(a,b)
    {
        salary=c;
        cout<<"Employee constructor called"<<endl;
    }

    ~Employee()
    {
        cout<<"Employee destructor called"<<endl;
    }
};
class Manager:public Employee
{
public:
    string department;
    Manager(string a,int b,float c,string d):Employee(a,b,c)
    {
        department=d;
        cout<<"Manager constructor called"<<endl;
    }

    ~Manager()
    {
        cout<<"Manager destructor called"<<endl;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Department : "<<department<<endl;
    }
};
int main ()
{
    Person p("John",20);
    Employee e("Jane",30,50000);
    Manager m("Bob",40,80000,"Marketing");
    m.display();

}
