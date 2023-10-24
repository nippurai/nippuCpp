#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int A[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        if(A[i]>0)
        sum=sum+A[i];
    }
        cout<<"sum of array is "<<sum;
    

}
