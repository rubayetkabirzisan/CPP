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
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks anilsmark(85);
    anilsmark.whatsYourMark();
    anilsmark->whatsYourMark();
}

