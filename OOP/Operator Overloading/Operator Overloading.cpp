#include<bits/stdc++.h>
using namespace std;\
class Marks
{
    int intmarks;
    int extmarks;
public:
    Marks()
    {
        intmarks=0;
        extmarks=0;
    }
    Marks(int im,int em)
    {
        intmarks=im;
        extmarks=em;

    }
    void display ()
    {
        cout<<intmarks<<endl<<extmarks<<endl;

    }
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.intmarks=intmarks+m.intmarks;
        temp.extmarks=extmarks+m.extmarks;
        return temp;
    }
    Marks operator-(Marks m);
};
Marks Marks:: operator-(Marks m)
{
     Marks temp;
        temp.intmarks=intmarks-m.intmarks;
        temp.extmarks=extmarks-m.extmarks;
        return temp;

}
int main ()
{
    Marks m1(10,20),m2(30,40);
    Marks m3=m1+m2;
    m3.display();
     Marks m4=m2-m1;
      m4.display();
    return 0;
}
