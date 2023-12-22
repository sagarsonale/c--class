#include<iostream>
using namespace std;

class Car
{
    public:
        virtual void start()
        {
            cout<<"car started"<<endl;
        }
        virtual void stop()=0;//pure virtual function
        
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