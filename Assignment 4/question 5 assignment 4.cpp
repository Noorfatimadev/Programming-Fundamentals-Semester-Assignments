/*
Write a program to find Roots of Quadratic Equations. For a quadratic equation ax2+bx+c = 
0 (where a, b and c are coefficients),
*/
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main ()
{int a , b, c , x , y ;
cout<<"for quadratic equation ax^2 + bx +c "<<endl;
cout<<"enter a :"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
cout<<"enter c"<<endl;
cin>>c;

if ((b*b-4*a*c)>0)
{cout<<"the roots are real and different ";
}
else if ((b*b-4*a*c)==0)
{cout<<" the roots are real and equal";
}
else if ((b*b-4*a*c)<0)
{cout<<"the roots are complex and different";
 } 
 if ((b*b-4*a*c)>=0)
 { x=(-b+pow(b*b-4*a*c,1/2))/2*a;
 y=(-b-pow(b*b-4*a*c,1/2) )/2*a;
cout<<"the roots of the quadratic eqation are "<<endl;
cout<<x<<endl;
cout<<y<<endl;
 }
 return 0;
 }
