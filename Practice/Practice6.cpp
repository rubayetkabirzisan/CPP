#include<bits/stdc++.h>
using namespace std;
class Employee
{
    int id,ranking,salary;
public :
    Employee()
    {
        cout<<"Default Constructor Calling"<<endl;
        id=0;
        ranking=0;
        salary=0;
    }
    Employee(int x,int y,int z)
    {
        cout<<"Parameterized Constructor Calling"<<endl;
        id=x;
        ranking=y;
        salary=z;
    }

    void set_values(int a,int b,int c)
    {
        id=a;
        ranking=b;
        salary=c;
    }
    int get_id()
    {
        return id;
    }

    /*int get_ranking()
    {
        return ranking;
    }
    int get_salary()
    {
        return salary;
    }*/

    Employee compare ( Employee e1, Employee e2)
    {
        if(e1.salary>e2.salary)
        {
            return e1;
        }
        else{
            return e2;
        }
    }


};
int main ()
{
    Employee e1[5];


    for(int i=0; i<5; i++)
    {
        int id,rank_,salary;
        cin>> id>>rank_>>salary;
        e1[i].set_values(id,rank_,salary);
    }

    for(int i=0; i<5; i++)
    {
        cout<<e1[i].get_id()<<endl;
    }

    Employee x,y;
    x = x.compare(e1[0],e1[1]);

    cout<<x.get_id()<<endl;

    /*cout<<"\n";
    for(int i=0; i<5; i++)
    {
        cout<<"Ranking of the Employee "<<i+1<<" is : "<<e1[i].get_ranking()<<endl;
    }
    cout<<"\n";
    for(int i=0; i<5; i++)
    {
        cout<<"Salary of the Employee "<<i+1<<" is : "<<e1[i].get_salary()<<endl;
    }*/


}
