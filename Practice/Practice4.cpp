#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    double s1,s2,s3;
    double printArea()
    {
        double s =(s1+s2+s3)/2.0;
        double area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
        cout<<area;
    }
};
int main ()
{
    triangle p;
    cin>>p.s1>>p.s2>>p.s3;
    p.printArea();
}
