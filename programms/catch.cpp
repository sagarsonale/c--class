/*#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 1.5f;

    }
    catch(int e)
    {
        cout<<"int Catch"<<endl;
    }
    catch(double e)
    {
        cout<<"double catch"<<endl;
    }
    catch(...)
    {
        cout<<"101 error"<<endl;
    }
}*/

#include<iostream>
using namespace std;

class MyExection1: MyException1
{

};
class MyException2:public MyException1
{

};
int main()
{
        try
        {
            throw MyException1();

        }
        catch(MyException2 e)

        {
            cout<<"int catch"<<endl;
        }
        catch(MyException1 e)
        {
            cout<<"double catch"<<endl;

        }
        catch(...)
        {
            cout<<"error found"<<end;
        }
        
}