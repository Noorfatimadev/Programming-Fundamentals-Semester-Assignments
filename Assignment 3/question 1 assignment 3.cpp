/* 
As user to input two number and show the output according to the exact format given below
num1 + num2: 280
num1 - num2: 200
num1 * num2: 9600
num1 / num2: 6
num1 % num2: 0
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{

int num1;
cout<<"enter number 1 "<<endl;
cin>>num1;


int num2 ;

cout<<"Enter num2"<<endl;
cin>> num2;
double mul, sum , sub , div , per;
mul=num1*num2 ;
sum=num1+num2;
sub=num1-num2;
div=num1/num2;
per=num1%num2;
cout<<num1<<" + " <<num2<<" = "<<sum<<endl;
cout<<num1<<" - " <<num2<<" = "<<sub<<endl;
cout<<num1<<" * " <<num2<<" = "<<mul<<endl;
cout<<num1<<" / " <<num2<<" = "<<div<<endl;
cout<<num1<<" % " <<num2<<" = "<<per<<endl;

return 0;
}
