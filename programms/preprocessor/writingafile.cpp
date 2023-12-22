#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    std::ofstream ofs("sagar",ios::trunc);
    ofs<<"sagar"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;
    ofs.close();
}