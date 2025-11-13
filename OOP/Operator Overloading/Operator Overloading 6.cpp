#include<bits/stdc++.h>
using namespace std;
class Marks
{
    int mark;
public:
    Marks(int m)
    {
        cout<<"Constructor is called"<<endl;
        mark=m;
    }
    void whatsYourMark()
    {
        cout<<"Hey i got "<<mark<<" marks"<<endl;
    }
    Marks operator()(int mk)
    {
        mark=mk;
        cout<<"Operator function is called"<<endl;
        return *this;
    }
};
int main()
{
    Marks anilsmark(85);
    anilsmark.whatsYourMark();

    anilsmark(85);
    anilsmark.whatsYourMark();
}
