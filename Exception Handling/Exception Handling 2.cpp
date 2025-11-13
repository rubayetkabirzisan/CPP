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
            throw runtime_error("Divide by zero error");
            c=a/b;
            cout<<c<<endl;
        }

    }
    catch(runtime_error &e)
    {
        cout<<"Exception occured"<<endl;
        cout<<e.what();
    }

    return 0;
}
