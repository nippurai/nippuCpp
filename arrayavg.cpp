#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,avg;
    float num[100];
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<n;++i)
    {
     cout<<i+1<<".enter nuumber";
     cin>>num[i];
     sum+=num[i];
    }
    avg=sum/n;
    cout<<"avg"<<avg;
}
