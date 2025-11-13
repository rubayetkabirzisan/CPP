#include<bits/stdc++.h>
using namespace std;
class GroundFloor
{
public:
    GroundFloor()
    {
        cout<<"Ground Floor is created"<<endl;
    }
 GroundFloor(int b)
    {
        cout<<"Ground Floor is created with "<<b<<" rooms"<<endl;
    }
    ~GroundFloor()
    {
        cout<<"Ground Floor is destroyed"<<endl;
    }
};
class FirstFloor:public GroundFloor
{
public:
    FirstFloor()
    {
        cout<<"First Floor is created"<<endl;
    }
    FirstFloor(int a,int b):GroundFloor(b)
    {
        cout<<"First Floor is created with "<<a<<" rooms"<<endl;
    }
    ~FirstFloor()
    {
        cout<<"First Floor is destroyed"<<endl;
    }
};
int main ()
{
    FirstFloor f(3,1);
}
