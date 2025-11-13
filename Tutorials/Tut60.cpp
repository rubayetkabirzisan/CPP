#include<bits/stdc++.h>
using namespace std;
template<class T>
void display(vector<T> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
}
int main ()
{
    //ways to create a vector
    vector<int>vec1; // zero length integer vector
    int element,size=5;
//    cot<<"Enter size of your vector "<<endl;
//    cin>>size;
//    for(int i=0;i<size;i++)
//    {
//        cout<<"Enter an element to this vector : ";
//        cin>>element;
//        vec1.push_back(element);
//    }
//    vec1.pop_back();
//
//    display(vec1);
//    vector<int>:: iterator itr = vec1.begin();
//    vec1.insert(iter+1,500,566);
//    display(vec1);


    vector<char>vec2(4); // 4 element character vector
    //vec2.pushback('5');
    //display(vec2);
    //vector<char> vec3(vec2);
    //display(vec3);
    vector<int>vec4(6,13);
    display(vec4);
    cout<<vec4.size();


}
