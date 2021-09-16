/*
Write a C++ program to print all the repeated numbers with frequency in an array.

*/

#include<iostream>
using namespace std;
int main()
{
   int n,i,j,count=0,ele;
   
       cout<<"Enter the value of n = ";
           cin>>n;
           
   int arr[n];
   
   for(i=0;i<n;i++)
  {
      cout<<"Enter array element "<<i+1<<" = ";
           cin>>arr[i];
  }
  for(i=0;i<n;i++)
  {
     count=1;
     for(j=i+1;j<=n-1;j++)
    {
        if(arr[i]==arr[j] && arr[i]!='\0')
       {
           count++;
           arr[j]='\0';
       }
    }
    if(arr[i]!='\0')
    
	cout<<"Frequency of "<<arr[i]<<" is " <<count<<endl;;
}
return 0;
}

