#include <iostream>
using namespace std;
int main()
{
    int A[]={4,6,7,8,6,-4};
    int min=0;
    for(int x:A)
    {
        if(x<min)
     min=x;
    }
    cout<<min;
}
