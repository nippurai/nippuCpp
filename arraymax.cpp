#include <iostream>
using namespace std;
int main()
{
    int A[]={10,20,30,4,5,6,8};
    int max=0;
    for(int x:A)
    {
        if(x>max)
        
            max=x;
        }
        cout<<max;
    }
