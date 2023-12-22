/*#include<iostream>
using namespace std;



int main()
{
        int x=10,y=0,z;

        try
        {
                if(y==0)
                 throw string("fuck yourself");
                z=x/y;
                cout<<z<<endl;
        }
        catch(string a)
        {
            cout<<"Division by zero"<<a<<endl;

        }
        cout<<"bye"<<endl;
}*/

#include<iostream>
using namespace std;

class MyException:exception
{

};
int division(int a,int b)throw(MyException)//leave empty not to throw anything
{
        if(b==0)
                throw 10;
        return a/b;
}
int main()
{
        int x=10,y=0,z;
        try
      {
              z=division(x,y);
              cout<<z<<endl;
      }
      catch(MyException e)
      {
              cout<<"Division by Zero"<<endl;
      }
      cout<<"Bye"<<endl;
}