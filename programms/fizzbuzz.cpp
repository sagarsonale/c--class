#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
{
        if(i%3==0)
        {
            cout<<i<<"= fizzz\n";

        }
        else if(i%5==0)
        {
            cout<<i<<"= buzzz\n";

        }
        else if(i%3==0&&i%5==0)
        {
            cout<<i<<"= fizzbuzzz\n";
        }
        else
         cout<<i<<"\n";
}
}