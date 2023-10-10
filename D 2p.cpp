#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,d;
    cout<<"Enter the value of x1,x2 and y1,y2\n";
    cin>>x1>>x2>>y1>>y2;
    //formula of calculate distance between 2-point
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"distance is"<<d<<endl;
    return 0;
}
