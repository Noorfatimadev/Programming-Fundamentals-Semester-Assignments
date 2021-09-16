/*
Write a program that mimics a calculator. The program should take as input two integers and 
the operation to be performed. It should then output the numbers, the operator, and the result. 
You must provide support for at least 15 operators (+, -, /, *, &&, ||, &, |, % etc.) For division, 
if the denominator is zero, output an appropriate message. Some sample output: Input will be 
3, 4 and operator = 1 (+), output will 3 + 4 = 7.
• Write this program using switch/case
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
int x, y ,z, a, b;
	
	cout<<"enter no.1"<<endl;
	cin>>x;
	cout<<"enter no.2"<<endl;
	cin>>y;
int operation;

cout<<"enter the operator number ";
	cin>>operation;
	switch(operation)
       {
             case(1):
			 cout<<"addition"<<endl;
			 z=x+y;
			 cout<<x<<"+"<<y<<"="<<z<<endl;
			 break;
			 case(2):
			 cout<<"subtraction"<<endl;
			 z=x-y;
			 cout<<x<<"-"<<y<<"="<<z<<endl;
			 break;
			 case(3):
			 cout<<"division"<<endl;
			 a=x/y;
			 cout<<x<<"/"<<y<<"="<<a<<endl;
			 break;
			 case(4):
			 cout<<"multiplation"<<endl;
			 z=x*y;
			 cout<<x<<"*"<<y<<"="<<z<<endl;
			 break;
			 case(5):
			 cout<<"modulus"<<endl;
			 a=x%y;
			 cout<<x<<"%"<<y<<"="<<a<<endl;
			 break;
			 case(6):
			 cout<<"AND operator"<<endl;
			 b=x&&y;
			 cout<<x<<"&&"<<y<<"="<<b<<endl;
			 break;
			 case(7):
			 cout<<"OR operator"<<endl;
			 b=x||y;
			 cout<<x<<"||"<<y<<"="<<b<<endl;
			 break;
			 case(8):
			 cout<<"single AND"<<endl;
			 b=x&y;
			 cout<<x<<"&"<<y<<"="<<b<<endl;
			 break;
			 case(9):
			 cout<<"single OR"<<endl;
			 b=x|y;
			 cout<<x<<"|"<<y<<"="<<b<<endl;
			 break;
			 
			 	
	   }	
return 0;
	
}
