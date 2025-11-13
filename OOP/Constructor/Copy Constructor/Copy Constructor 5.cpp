#include<bits/stdc++.h>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    Point(const Point &obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void print ()
    {
        cout<<"X = "<<x<< ", Y = "<<y<<endl;
    }
};
int main ()
{
    Point p1(5,25);
    Point p2=p1;///copy p1 to p2 using the default copy constructor
    p1.print();
    p2.print();
    return 0;
}
