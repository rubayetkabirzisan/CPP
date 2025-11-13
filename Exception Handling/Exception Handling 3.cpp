#include<bits/stdc++.h>
using namespace std;
int main ()
{
    try
    {
        throw runtime_error("abracadabra");
    }
    catch(int error)
    {
        cout<<error<<endl;

    }
    catch(...)
    {
        cout<<"Some exception occured"<<endl;
    }
}
