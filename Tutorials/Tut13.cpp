#include<iostream>
using namespace std;

struct employee
{
    int eId; //4
    char favChar; //1
    float salary; //4
};

union money
{
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
    enum Meal{ breakfast, lunch, dinner };
    Meal m = lunch;
    cout<<(m==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    union money m1;
    m1.rice = 34;
cout<<m1.rice<<endl;

m1.car = 'c';
cout<<m1.car<<endl;

m1.pounds = 2.5;
cout<<m1.pounds<<endl;

employee harry;
harry.eId = 1;
harry.favChar = 'c';
harry.salary = 120000000;
cout<<"The value of eId is "<<harry.eId<<endl;
cout<<"The value of favChar is "<<harry.favChar<<endl;
cout<<"The value of salary is "<<harry.salary<<endl;

return 0;
}
