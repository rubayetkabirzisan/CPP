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
        cout<<area<<endl;
    }
};
int main ()
{
    triangle p[3];
    for(int i=0; i<3; i++)
    {
        cin>>p[i].s1>>p[i].s2>>p[i].s3;
        p[i].printArea();
    }

}

