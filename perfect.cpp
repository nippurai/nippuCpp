#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the value of n\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==2*n)
    {
        cout<<"perfect number";
    }
    else
    {
        cout<<"not perfect number";
    }
}
