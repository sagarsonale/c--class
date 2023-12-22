//example 1
/*#include<iostream>
using namespace std;

class Innova
{
     public:
        static int price;
        static int getprice()//static member
        {
            return price;
        }
};
int Innova::price=20;
int main()

{
    Innova i1,i2,i3;
    cout<<i1.price<<endl;
    cout<<i3.price<<endl;

}*/

//example 2

#include<iostream>
using namespace std;

class Student
{
    public:
        int roll;
        string name;
            static int addNo;
            Student(string n)
            {
                addNo++;
                roll=addNo;
                name=n;
            }
            void display()
            {
                cout<<"name"<<name<<endl<<"Roll"<<roll<<endl;

            }
};
int Student::addNo=0;
int main()
{
    Student s1("Jhon");
    Student s2("Ravi");
    Student s3("khan");
    s1.display();
    s2.display();
    s3.display();
    cout<<"number of admission"<<"="<<Student::addNo<<endl;
}
