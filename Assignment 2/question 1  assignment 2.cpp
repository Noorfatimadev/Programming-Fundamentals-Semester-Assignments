/*
Write a program to swap the values of two variable without using third variable
*/
#include <iostream>  
using namespace std;  
int main()  
{  
int a, b;   
 cout<<"enter a"<<endl;
 cin>>a;
 cout<<"enter b"<<endl;
cin>>b;
cout<<"a= "<<a<<" b= "<<b<<endl;      
a=a+b;     
b=a-b;   
a=a-b;     
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
} 
