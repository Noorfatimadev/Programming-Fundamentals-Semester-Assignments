/*
 Declare and initialize two variables and calculate sum, difference, product and division of these numbers 
and assign sum, difference, product and quotient to four different result variables. Finally print all the results. 
To add, subtract, multiply and division of two variables +, -, * and / operator is used i.e. a+b, a-b, a*b and 
a/b.
*/
*#include<iostream>

using namespace std;

int main()
{
	int a,b;
	
	cout<<"enter number 1.:"<<endl;
	cin>>a;
	cout<<"enter number 2.:"<<endl;
    cin>>b;
 
	int sum;
	sum=a+b;
	cout <<"sum ="<<sum <<endl;
	
	int difference;
	difference=a-b;
	cout <<"substraction="<<difference <<endl;
		
	int quotient;
	quotient=a/b;
	cout <<"division="<<quotient <<endl;
	
	int product;
	product=a*b;
	cout <<"multiplication="<<product <<endl;
	
	return 0;
	
}
