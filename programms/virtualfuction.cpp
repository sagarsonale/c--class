/*#demo 1;
#include<iostream>
using namespace std;

class Base
{
    public:
       virtual void fun()
        {
            cout<<"fun of base"<<endl;

        }
};
class Derived : public Base
{
    public:
        void fun()
        {
            cout<<"fun of Derived"<<endl;
        }
};
int main()
{
    Derived d;
   //or Base *p=new Derived();
    Base *p=&d;
    p->fun();
}*/

//demo #2

#include<iostream>
using namespace std;

class BasicCar
{
    public:
         virtual void start()
        {
            cout<<"BasicCar started"<<endl;
        }
};
class AdvanceCar: public BasicCar
{
    public:
       void start()
            {
                cout<<"AdvanceCar started"<<endl;
            }
};
int main()
{
    BasicCar *p=new AdvanceCar();
    p->start();
}