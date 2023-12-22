#include<iostream>
using namespace std;

class Base
{
    public:
        void display()
        {
            cout<<"display of parent"<<endl;
        }
};
class Derived:public Base
{
    public:
        void display()
        {
            cout<<"display of child"<<endl;
        }

};
int main()
{
    Derived d;
    Base b;
    b.display();
    d.display();
}