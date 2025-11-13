#include<bits/stdc++.h>
using namespace std;

namespace BusSpace
{
    int TravelTime(int v)
    {
        float t=(180/(float)v);
        return t;
    }
}

namespace TrainSpace
{
    int TravelTime(int v)
    {
        float t=(180/(float)v);
        return t;
    }
}
using namespace TrainSpace;
int main ()
{
    int x;
    BusSpace::TravelTime(x);

    int y;
    Traveltime(y);
}
