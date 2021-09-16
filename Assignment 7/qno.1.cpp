/*Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0
*/

#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,s=0;
	
for(i=0;i<=19;i++)
{
	cout<<"Enter array element "<<i+1<<" = ";
	   cin>>arr[i];
}
    
    for(i=0;i<=19;i++)
    {
    	if(arr[i]>0)
    	 {
    	 	s=s+1;
    	
		 }
    	
	  	   
	}
  	
	cout<<"\nTotal Positive number = "<<s<<endl;
	s=0;
	
	for(i=0;i<=19;i++)
    {
    	
    	if(arr[i]<0)
    	 {
    	 	s=s+1;
    	
		 }
    	
	  	   
	}
  	
	cout<<"Total Negative number = "<<s<<endl;
	s=0;
		
	for(i=0;i<=19;i++)
    {
    	
		if(arr[i]%2==0)
    	 {
    	 	s=s+1;
    	
		 }
    	
	  	   
	}
  	
	cout<<"Total Even number = "<<s<<endl;
	s=0;
			
	for(i=1;i<=19;i++)
    {
    	
		if(arr[i]%2==1)
    	 {
    	 	s=s+1;
    	
		 }
    	
	  	   
	}
  	
	cout<<"Total Odd number = "<<s<<endl;
	s=0;
				
	for(i=0;i<=19;i++)
    {
    
		if(arr[i]==0)
    	 {
    	 	s=s+1;
    	
		 }
    	
	  	   
	}
  	
	cout<<"Total Zero's = "<<s;

return 0;		
}
