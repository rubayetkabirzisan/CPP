#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows;

    cout<<"How big do you want your heart to be ? ( Express in numbers from 1-10 ) : ";
    cin>>rows;
    cout<<endl;

    cout<<"Wow! You want your heart this big --> "<<endl;
    cout<<endl;

    for(int i=rows/2;i<=rows;i+=2)
    {
        for(int j=1;j<=(rows-i);j+=2)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        for(int j=1;j<=(rows-i);j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=rows;i>=1;i--)
    {
        for(int j=i;j<=rows;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }

       cout<<endl;
    }
}
