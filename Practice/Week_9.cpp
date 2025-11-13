#include<bits/stdc++.h>
using namespace std;
class Student
{
    int theory;
    int sessional;
public:

    void setMarks(int a,int b)
    {
        theory=a;
        sessional=b;
    }

    int getTheory()
    {
        return theory;
    }

    int getSessional()
    {
        return sessional;
    }

};
class L4Student:private Student
{
    int thesis;
public:
    void setThesis(int x )
    {
        thesis=x;
    }

    int getThesis()
    {
        return thesis;
    }

    void delegate_setMarks(int a,int b)
    {
        setMarks(a,b);
    }

    int delegate_get_Theory_Marks()
    {
        getTheory();
    }

    int delegate_get_Sessional_Marks()
    {
        getSessional();
    }

};
int main ()
{
    L4Student L;
    int a,b,c;
    cout<<"Enter theory marks : ";
    cin>>a;
    cout<<endl;

    cout<<"Enter sessional marks : ";
    cin>>b;
    cout<<endl;

    cout<<"Enter thesis marks : ";
    cin>>c;
    cout<<endl;

    //L.setMarks(a,b);
    L.delegate_setMarks(a,b);
    L.setThesis(c);

    cout<<"The student got "<<L.delegate_get_Theory_Marks()<<" in theory, "<<L.delegate_get_Sessional_Marks()<<" in sessional and "<<L.getThesis()<<" in L4 thesis"<<endl;
}
