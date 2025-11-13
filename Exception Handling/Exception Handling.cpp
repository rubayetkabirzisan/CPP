#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a=10,b=0;
    int c;
    try
    {
        if(b==0)
        {
            throw "Divide by zero error";
            c=a/b;
            cout<<c<<endl;
        }

    }
    catch(const char *e)
    {
        cout<<"Exception occured"<<endl<<e;
    }

    return 0;
}
