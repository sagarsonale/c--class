#include<iostream>
using namespace std;

class Base
{
        public:
            Base()
            {
                    cout<<"default of base"<<endl;

            }
            Base(int x)
            {
                    cout<<"parameter of base"<<x<<endl;

            }

};
class Derived:public Base
{
        public:
            Derived()
            {
                    cout<<"Default of Derived";
            }
            Derived(int a)
            {
                cout<<"parameter of Derived"<<a<<endl;
            }
            Derived(int x ,int a):Base(x)
            {
                cout<<"parameteir of derived"<<a<<endl;
            }
    

};

int main()
{
        Derived d(20,10);

}