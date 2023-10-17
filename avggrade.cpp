#include <iostream>
using namespace std;
int main()
{
    float m1,m2,m3,total,avg;
    cout<<"enter the value of m1,m2&m3\n";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3;
    if(avg>=60)
    cout<<"grade A";
    else if(35<=avg<60)
    cout<<"grade B";
    else
    cout<<"c";
}
