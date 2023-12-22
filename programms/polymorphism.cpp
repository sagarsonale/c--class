//run time polymorphism
#include<iostream>
using namespace std;

class Car
{
    public:
        virtual void start()
        {
            cout<<"car started"<<endl;
        }
        virtual void stop()
        {
            cout<<"car stopped"<<endl;
        }
};
class innova:public Car
{
    public:
    void start()
    {
        cout<<"innova started"<<endl;

    }
    void stop()
    {
        cout<<"innova stopped"<<endl;
    }
};
class swift:public Car
{
    public:
        void start()
        {
            cout<<"swift started"<<endl;
        }
        void stop()
        {
            cout<<"swift stopped"<<endl;

        }
};
int main()
{
    Car *c=new innova();
    c->start();
    c->stop();
    c=new swift();
    c->start();
    c->stop();
}
/*pure virtual is_function
    class car
    {
        virtual void start()=0; when the virtual finction is intilized to zero is called pure function

        virtual void stop()=0;
    };*/