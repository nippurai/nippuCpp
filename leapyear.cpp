#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year\n";
    cin>>year;
    if(year%4==0,year%400==0||year%100!=0)
    cout<<"leap year";
    else 
    cout<<"not leap year";
}
