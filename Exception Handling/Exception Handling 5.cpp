#include<bits/stdc++.h>
using namespace std;
int main ()
{
    try
    {
        try
        {
            throw" A character exception";
        }
        catch(const char *e)
        {
            cout<<"Character type in inner block-->"<<e<<endl;
            cout<<"Rethrowing the exception"<<endl;
            throw runtime_error("damn");
        }
    }
    catch(const char *e)
    {
        cout<<"Character type in outer block-->"<<e<<endl;

    }
    catch(...)
    {
        cout<<"Unexpected exception in outer block"<<endl;

    }
}
