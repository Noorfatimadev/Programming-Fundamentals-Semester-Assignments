/*
Write a C++ program to find Least Common Multiple (LCM) of two numbers. F
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{int a, b , lcm;
cout<<"enter no. 1";
cin>>a;
cout<<"enter no. 2";
cin>>b;
if(a>b)
  lcm=a;

else
  lcm=b; 
do
{
  if(lcm%a==0 && lcm%b==0)
 {
   cout<<"lcm:-"<<lcm;
  }
else
 lcm++;
}
while(lcm>0);
return 0;	
}

