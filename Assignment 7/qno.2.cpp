/*
/* 
Write a program that initializes an array of integers having at-least 10 elements. Write a 
program to find those pair of elements that has the maximum and minimum difference 
among all element pairs
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,min,d;
	
for(i=0;i<=9;i++)
{
	cout<<"Enter array element "<<i+1<<" = ";
	   cin>>arr[i];
}
   min=arr[1]-arr[0];
   
   for(i=1;i<=8;i++)
    {
   	    if((arr[i]-arr[i+1])<min)    
			min=(arr[i]-arr[i+1]);
    }
     
	 cout<<"a"<<min;       
	              
	               
   for(i=1;i<=9;i++)
    {
	d=(arr[i]-arr[i+1]);
	if(d==min)
	cout<<"MINIMUM DIFFERENCE IS BETWEEN "<<arr[i]<<" and "<<arr[i+1]<<" = "<<d;
    }
     
  
  return 0;
}
