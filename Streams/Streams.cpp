#include<bits/stdc++.h>
using namespace std;
int main ()
{
    cout.setf(ios:: showpos,ios::showpoint);
    cout.unsetf(ios::showpos);
    auto flag= ios:: showpos|ios::showpoint|ios:: showpos|ios::showbase;
    cout.flags(flag);
    cout<<100.2<<endl;
    cout<<-65.3<<endl;
    cout<<89.8<<endl;
}
