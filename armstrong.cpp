#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    cout<<"enter the value of n\n";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    cout<<"armstrong number"<<endl;
    else
    cout<<"not armstorng number"<<endl;
}
