#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
ostream &rightArrow(ostream &output)
{
    output<<"Cool name man ----> ";
    return output;

}
istream &getName(istream &input)
{
    cout<<"Enter your name : ";
    return input;

}
int main ()
{
    string name;
    cin>>getName>>name;
    cout<<rightArrow<<name;

}
