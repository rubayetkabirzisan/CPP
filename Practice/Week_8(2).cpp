#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define int long long // define int as a long long data type
#define endl '\n'
class point
{
public:
    int x;
    int y;
};

class point3d
{
    int z;
    point m;

public:
    void inital(){
        m.x=5;
    }
};

/*
the class that has been inherited is base class subclass parent class
the class that inherit the base class is derived class,child class,super class
*/

signed main()
{
    fast_io(); // enable faster I/O
    point moon;
    moon.x = 5;

    return 0;
}
