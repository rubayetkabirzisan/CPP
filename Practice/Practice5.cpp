#include<bits/stdc++.h>
using namespace std;
class Calculator
{
    int val_1;
    int val_2;
public:
    Calculator()//Default Constructor
    {
        cout<<"Default Constructor Calling "<<endl;
        val_1=20;
        val_2=10;
    }

    Calculator(int a,int b)//Parameterize Constructor
    {
        cout<<"Parameterized Constructor Calling "<<endl;
        val_1=a;
        val_2=b;
    }

    void set_values(int x,int y)
    {
        val_1=x;
        val_2=y;
    }

    void set_val_1(int a)
    {
        val_1=a;
    }
    int get_val_1()
    {
        return  val_1;
    }
    void set_val_2(int b)
    {
        val_2=b;
    }
    int get_val_2()
    {
        return  val_2;
    }
    int Addition()
    {
        return  (val_1+val_2);
    }
    int Subtraction()
    {
        return  (val_1-val_2);
    }
    int Multiplication()
    {
        return  (val_1*val_2);
    }
    float Division()
    {
        return  ((float)val_1/val_2);
    }
    ~Calculator()//Destructor
    {
        cout<<"Destructor Calling"<<endl;
    }
};
int main ()
{
    Calculator c1;
    //c1.set_val_1(10);
    //c1.set_val_2(20);
    //c1.set_values(10,20);
    cout<< c1.get_val_1()<<endl;
    cout<< c1.get_val_2()<<endl;

    Calculator c2(5,10);//Parameterized Constructor Argument
    cout<< c2.get_val_1()<<endl;
    cout<< c2.get_val_2()<<endl;


    /*cout<<"Addition = "<<c1.Addition()<<endl;
    cout<<"Subtraction = "<<c1.Subtraction()<<endl;
    cout<<"Multiplication = "<<c1.Multiplication()<<endl;
    cout<<"Division = "<<c1.Division()<<endl;*/
}
