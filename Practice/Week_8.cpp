#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int theory;
    int session;

public:
    void set_marks(int a, int b)
    {
        theory = a;
        session = b;
    }
    int get_theory()
    {
        return theory;
    }
    int get_sessional()
    {
        return session;
    }
};

class studentl4 : public student
{
    int thesis;

public:
    void set_thesis(int a)
    {
         set_marks(30,20);
        thesis = a;
    }
    int get_thesis()
    {
         cout<<get_theory()<<endl;
         cout<<get_sessional()<<endl;
        return thesis;
    }
};

int main()
{
    studentl4 s4;
    student s;

    // s4.set_marks(20, 30);
    // cout << s4.get_theory() << endl;
    // cout << s4.get_sessional() << endl;
    s4.set_thesis(50);
    cout << s4.get_thesis() << endl;
}
