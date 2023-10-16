#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,d,r1,r2;
cout<<"enter the value of a b and c\n";
cin>>a>>b>>c;
d=(b*b-4*a*c);
if(d==0)
{
 r1=-b/(2*a);
cout<<"real and equal";
}
else if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"real and unequal";
}
else
{
cout<<"imaginary";
}
}
