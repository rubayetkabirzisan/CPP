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
Marks operator++()
{
    mark=mark+1;
    return *this;
}
    friend Marks operator--(Marks &);

};
Marks operator--(Marks &m)
{
    m.mark-=1;
    return m;
}
int main ()
{
    Marks anilsmark(45);
    anilsmark.YourMarkPlease();

//    ++anilsmark;
//    anilsmark.YourMarkPlease();
//
//     --anilsmark;
//    anilsmark.YourMarkPlease();


    (++anilsmark).YourMarkPlease();

    (--anilsmark).YourMarkPlease();


}

