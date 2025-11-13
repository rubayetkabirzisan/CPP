#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;
    friend void difference(Time ,Time );
public:

    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }

    Time(int hour,int minute,int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }

    void print()
    {
        cout<<hour<<" "<<minute<<" "<<second;
    }

    /*void difference(Time t)
    {
        int hr=abs(hour - t.hour);
        int min_=abs(minute - t.minute);
        int sec=abs(second - t.second);

        cout<<hr<<" "<<min_<<" "<<sec<<endl;
    }*/

};
void difference(Time t1,Time t2)
{
    int hr = abs(t1.hour - t2.hour);
    int min_ = abs(t1.minute - t2.minute);
    int sec = abs(t1.second - t2.second);

    cout<<hr<<" "<<min_<<" "<<sec<<endl;
}
int main ()
{
    string s1,s2;

    cout<<"City 1 name : ";
    cin>>s1;
    cout<<"Time of "<<s1<<" : ";
    int h,m,s;
    char p;
    cin>>h>>p>>m>>p>>s;
    cout<<endl;
    Time t1(h,m,s);


    cout<<"City 2 name : ";
    cin>>s2;
    cout<<"Time of "<<s2<<" : ";
    cin>>h>>p>>m>>p>>s;
    cout<<endl;
    Time t2(h,m,s);

    //t1.difference(t2);/// object that have no information.Here (t2)
    difference(t1,t2);

}
