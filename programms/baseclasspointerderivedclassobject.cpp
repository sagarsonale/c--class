#include<iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
            cout<<"car started"<<endl;

    }
};
class AdvanceCar: public BasicCar
{
        public:
        void playMusic()

        {
            cout<<"music playing"<<endl;

        }
};

int main()
{
    BasicCar b;
    AdvanceCar *q=&b;
    AdvanceCar a;
    BasicCar *ptr=&a;

    ptr->start();
    ptr->playMusic();

}