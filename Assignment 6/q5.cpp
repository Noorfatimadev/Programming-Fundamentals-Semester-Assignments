/*
Write C++ code power-close-to that takes as arguments two positive integers b and n, and returns 
the smallest power of b that is greater than n. That is, it should return the smallest positive integer 
e such that b^e > n. 
*/

#include<iomanip>
#include<iostream>
using namespace std; 
  
int main()
{  
  int n = 0;
  int nextPowerOf2(n);  
      
   
    if (n && !(n & (n - 1)))  
      
   {
	     
    while( n != 0)  
    {  
        n >>= 1;  
        n=n+ 1;  
    
}  
  cout << nextPowerOf2; }
    return 0;
}
