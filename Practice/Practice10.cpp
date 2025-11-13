///Introduction to namespace
#include<bits/stdc++.h>
using namespace std;

namespace first
{

    void func()
    {
        cout<<"First Namespace"<<endl;
    }

}

namespace second
{
    void func()
    {
        cout<<"Second Namespace"<<endl;
    }

}
using namespace second;
int main()
{
    //cout<<first::r;
    first::func();
    func();
}
