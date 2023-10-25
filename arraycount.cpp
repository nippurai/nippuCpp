#include <iostream>
using namespace std;
int main()
{
    int A[]={10,20,30,40,-4,-5,-6,-8};
    int pcount=0;
    int ncount=0;
    for(int x:A)
    {
        if(x>0)
        {
            pcount++;
        }
        else
        {
            ncount++;
        }
    }
    cout<<pcount<<" "<<ncount;
}
