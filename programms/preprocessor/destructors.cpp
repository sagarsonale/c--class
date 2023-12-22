/*
#include<iostream>
using namespace std;

class demo
{
    public:
        demo()
        {
            cout<<"constructor of demo"<<endl;

        }
        ~demo()
        {
                cout<<"destructor of demo"<<endl;
        }
};

 
 void fun()
 {
     demo d;
 }
 int main()
 {
     fun();
 }*/
#include<iostream>
using namespace std;

class demo
{
    public:
        demo()
        {
            cout<<"constructor of demo"<<endl;

        }
        ~demo()
        {
                cout<<"destructor of demo"<<endl;
        }
};

 
 void fun()
 {
     demo *p=new demo();//when u store in heap(dynamic memory)only constructor is printed
     delete p;//to print destructor
 }
 int main()
 {
     fun();
 }
