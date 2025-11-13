#include<bits/stdc++.h>
using namespace std;
class Marks
{
    int mark;
public :
    Marks()
    {
        mark=0;
    }
    Marks(int m)
    {
        mark=m;
    }
    void YourMarkPlease()
    {
        cout<<"Your mark is "<<mark<<endl;
    }
//    void operator++()
//    {
//        mark=mark+1;
//    }
Marks operator++(int)
{
    Marks duplicate(*this);
    mark+=1;
    return duplicate;
}
    friend Marks operator--(Marks &,int);

};
Marks operator--(Marks &m,int)
{
    Marks duplicate(m);
    m.mark-=1;
    return duplicate;
}
int main ()
{
    Marks anilsmark(45);
    anilsmark.YourMarkPlease();

    (anilsmark++).YourMarkPlease();
    anilsmark.YourMarkPlease();

    (anilsmark--).YourMarkPlease();
    anilsmark.YourMarkPlease();

}
