#include<iostream>
#include<math.h>
using namespace std;
class point
{
public:
    int x,y;
    void distance(point p1,point p2)
    {
        float d=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
        cout<<d;
    }
};
int main ()
{
    point p1,p2,p;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    p.distance(p1,p2);
}
