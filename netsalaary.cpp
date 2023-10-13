#include <iostream>
using namespace std;
int main()
{
 int basic,percentallow,percentdeduct,netsalary;
 cout<<"enter the value of basic salary\n";
 cin>>basic;
 cout<<"enter the value of percentage of allowances\n";
 cin>>percentallow;
 cout<<"enter the value of percentage of deduction\n";
 cin>>percentdeduct;
 

 // formula for calculate the netsalary is
 netsalary=basic+basic*percentallow/100-basic*percentdeduct/100;
 cout<<"netsalary is"<<netsalary;
 return 0;
}
