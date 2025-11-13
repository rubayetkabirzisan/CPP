#include<bits/stdc++.h>
using namespace std;
class Overspeed:public exception
{
    int speed;
public:
    const char * what()
    {
        return "Checkout your car speed\nYou are in a car not in a aeroplane";
    }
    void getspeed()
    {
        cout<<"Your car speed is "<<speed<<endl;
    }
    void setspeed(int speed)
    {
        this->speed=speed;
    }
};

class Car
{
    int speed;
public:
    Car()
    {
        speed=0;
        cout<<"Speed is "<<speed<<endl;
    }
    void accelerate()
    {
        for(;;)
        {
            speed+=10;
            cout<<"Speed is "<<speed<<endl;
            if(speed>=250)
            {
                Overspeed s;
                s.setspeed(speed);
                throw s;
            }

        }
    }
};
int main ()
{
    Car anilscar;
    try
    {
        anilscar.accelerate();

    }
    catch(Overspeed s)
    {
        cout<<s.what()<<endl;
        s.getspeed();
    }
}
