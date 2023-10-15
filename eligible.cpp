#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age\n";
    cin>>age;
    if(age<=12 || age>=50)
    cout<<"eligible"<<endl;
    else
    cout<<"not eligible"<<endl;
}
