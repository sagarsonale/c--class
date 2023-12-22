/*
#include<iostream>
using namespace std;
#define pi 3.145
int main()
{
    cout<<pi<<endl;
    return(0);
}*/
/*
#include<iostream>
using namespace std;
#define c cout
int main()
{
    c<<10;
    return(0);
}*/
/*
#include<iostream>
using namespace std;
#ifndef c
    #define c cout
#endif
int main()
{
    c<<10;
    return(0);
}*/
/*
#include<iostream>
using namespace std;
#define max(x,y) (x>y?x:y)//this condition is replaced at line 38
#ifndef pi
    #define pi 3
#endif
int main()
{
    cout<<max(17,12);//condition in define statement is replaced here
    return(0);
}*/
#include<iostream>
using namespace std;
#define msg(a) #a//to define string
int main()
{
    cout<<msg(sagar);//replaced as "sagar"
}