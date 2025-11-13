#include<bits/stdc++.h>
using namespace std;
void test() throw(int ,char,runtime_error)
{
    throw runtime_error("mission27");
}
int main ()
{
    try
    {
        test();
    }
    catch(int e)N
    {
        cout<<"Integer Type "<<e<<endl;
    }
    catch(char c)
    {
        cout<<"Character Type "<<c<<endl;
    }
    catch(runtime_error r)
    {
        cout<<"Runtime error Type "<<r.what()<<endl;
    }
}
