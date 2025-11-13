#include<bits/stdc++.h>
using namespace std;
float calc_att(int a)
{
    float k =((float)a/42)*15;
    if(k>=0) return k;
    return 0;
}

float calc_perf(float x,float b)
{
    float j= (x/30*15 - (42-b));
    if(j<0)return 0;
    return j;
}

float calc_best2CT(float a1,float b1,float c1)
{
    float sum = a1+b1+c1;
    float minimum = a1;
    if(b1<minimum)minimum=b1;
    else if(c1<minimum)minimum=c1;
    float s= sum-minimum;
    return (s*60)/40;

}

void calc_grade(float r,float i,string c)
{
    if(r>=240)cout<<i <<" Attained the grade: "<<'A'<< " in " <<c<<" with total marks (out of 300): "<< r<<endl;
    else if(r>=200)cout<<i << " Attained the grade: "<<'B'<< " in " <<c<< " with total marks (out of 300): "<< r<<endl;
    else if(r>=160)cout<<i << " Attained the grade: "<<'C'<< " in " <<c<< " with total marks (out of 300): "<< r<<endl;
    else if(r>=120)cout<<i << " Attained the grade: "<<'D'<< " in " <<c<< " with total marks (out of 300): "<< r<<endl;
    else if(r<120)cout<<i << " Attained the grade: "<<'F'<< " in " <<c<< " with total marks (out of 300): "<< r<<endl;

}

int main ()
{
    int id,ncp;
    float ct1,ct2,ct3,mid,secA,secB;
    string course;

    cout<<"Enter Roll: ";
    cin>>id;

    cout<<"Enter Course Code: ";
    cin>>course;

    cout<<"Enter Number of classes present in (out of 42): ";
    cin>>ncp;

    cout<<"Enter CT 1 marks (out of 20, will be converted to 30): ";
    cin>>ct1;

    cout<<"Enter CT 2 marks (out of 20, will be converted to 30): ";
    cin>>ct2;

    cout<<"Enter CT 3 marks (out of 20, will be converted to 30): ";
    cin>>ct3;

    cout<<"Enter Mid marks (out of 30): ";
    cin>>mid;

    cout<<"Enter Final(Sec A) Marks (out of 90): ";
    cin>>secA;

    cout<<"Enter Final(Sec B) Marks (out of 90): ";
    cin>>secB;

    cout<<"\n\nAfter Calculation"<<"\n\n";

    float attendence = calc_att(ncp);
    cout<<"Attendance Mark: "<<attendence<<endl;

    float performance = calc_perf(mid,ncp);
    cout<<"Performance Mark: "<<performance<<endl;

    float best2CT=calc_best2CT(ct1,ct2,ct3);
    cout<<"Best 2 CT Mark (out of 60): "<<best2CT<<endl;

    float result = mid+secA+secB+attendence+performance+best2CT;
    cout<<"Total (out of 300):  "<<result<<"\n\n";

    calc_grade(result,id,course);

    cout << "\nProgram Terminated. Press Enter to Close\n";
    cin.get();



}
