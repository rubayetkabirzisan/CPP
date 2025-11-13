#include<iostream>
using namespace std;
int main ()
{
    int a=4,b=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    //Arithmetic Operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //Assignment Operators --> used to assign values to variables
    //int a=3,b=9;
    //char d='d';

    //Comparison Operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical operator ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical operator ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical operator (!(a==b)) is :"<<(!(a==b))<<endl;



}
