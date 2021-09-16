/*
Write a C++ program to find sum of all prime numbers between 1 to n.
*/
#include <iostream>
#include<iomanip>
 using namespace std;
int main()
{
  	int i, j, Number, isPrime; 
   
  	cout<<"\n Please Enter any number to Find Factors :  ";
 cin>>Number;
 
  	for (i = 2; i <= Number; i++)
   	{
     	if(Number % i == 0)
        {
   			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
			cout<<i<<",";
			}	          	
		}
   }
  	return 0;

}
