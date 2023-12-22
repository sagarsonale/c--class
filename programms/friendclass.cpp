//actual concept
#include<iostream>
using namespace std;
class Your;
class My
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        friend Your;

};
class Your
{
    public:
        My m;
    void fun()
    {
        m.a=10;
        m.b=12;
        m.c=45;
       

    }
};

//example :
#include<iostream>
using namespace std;

class Your;
class My
{
    private:
        int a=10;
            friend Your;
};
    class Your
    {
        public:
            My m;
            void fun()
            {
                cout<<m.a;
            }
    };
