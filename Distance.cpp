#include <iostream>
using namespace std;
int main()
{
    int v,u,a,distance;
    cout<<"enter the value of v u and a\n";
    cin>>v>>u>>a;
    //formula for calculating distance is =(v*v-u*u)/(2*a)
    distance=(v*v-u*u)/(2*a);
    cout<<"d is "<<distance;
    return 0;
}
