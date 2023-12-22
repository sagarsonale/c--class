#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
    int sum;
    sum =a+b;
    return sum;
}
int main()
{
    int ans,ans1,a1,b1;

    cin>>a1>>b1;
    //ans=add(a1,b1);
    ans1=add(4.6f,9.8f);
    cout<<"sum is ="<<float(ans1);

}