#include<iostream>
using namespace std;
namespace first
{


void fun()

{
    cout<<"first"<<endl;
}
}
namespace second
{
void fun()
{
    cout<<"second"<<endl;
}
}
int main()
{
   second::fun();
    return(0);
}