/*
(Intersection): Write a program in C++ which takes two sets as input and returns 
another set which is equal to the intersection of the given sets. Also, create a function 
to print the set. Your code must have intersection, printing sets and input taking 
functions etc.
*/
#include<iostream>
using namespace std;

void intersection(int a[],int b[],int i,int j)
{
    int c=0,d=0;
      while (c<i&&d<j)  
	  {
			            
        if (a[c] > b[d])  
        { 
            d++; 
        }        
        else if (b[d]>a[c])  
        { 
            c++; 
        }  
        else 
    	{
			cout<<a[c]<<" "; 
            c++; 
            d++; 
        } 
    }
} 
	int main() 
	{ 
    int a[] = {1, 2, 3, 3, 4, 5, 5, 6}; 
    int b[] = {3, 3, 5}; 
      
    int i = sizeof(a)/sizeof(a[0]); 
    int j = sizeof(b)/sizeof(b[0]); 
    intersection(a, b, i, j); 
	n 
   return 0;
}

