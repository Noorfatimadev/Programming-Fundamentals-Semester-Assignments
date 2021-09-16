/*
 Write a C++ program to print all perfect numbers between 1 to n. For example, 6 is perfect 
number since divisor of 6 are 1, 2 and 3. Sum of its divisor is 1 + 2+ 3 = 6 and 28 is also a perfect 
number since 1+ 2 + 4 + 7 + 14= 28. Other perfect numbers: 496, 8128
*/

#include <iostream> 
#include <cctype>
using namespace std; 

int main(){

  int n,i,sum;
  int mn,mx;
  cout<<"Input the starting range or number : ";
  cin>>mn;
 cout<<"Input the ending range of number : ";
  cin>>mx;
  cout<<"The Perfect numbers within the given range : ";
  for(n=mn;n<=mx;n++)
  {
    i=1;
  for(i=1;i<=n;i++) 
  {
      if(n%i==0)
         cout<<i<<",";  
          i++;
    }
    
    
  
    
}
return 0;}
