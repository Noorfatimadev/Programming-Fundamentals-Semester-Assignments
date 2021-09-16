/*
Write a program that asks the user to type 10 integers of an array. The program will then 
display either "the array is growing", "the array is decreasing", "the array is constant", or 
"the array is growing and decreasing."
*/

#include<iostream>
using namespace std;
int main()
{
  int a[10],count=0,i;
   
   for(i=0;i<10;i++)
  {
      cout<<"Enter array element "<<i+1<<" = ";
           cin>>a[i]; 
  }
       
       for(i=0;i<10;i++)
       {
       	  if(a[i]<a[i+1])
       	  count++;
	   }
	     if(count==9)
	       cout<<"\n Array is growing ";
              count=0;
			  		         
                for(i=0;i<10;i++)
                {
       	            if(a[i]>a[i+1])
       	             count++;
	            }
	               if(count==9)
	                    cout<<"\n Array is decreasing ";
						count=0;	     
	                         
	                         for(i=0;i<10;i++)
                              {
       	                        if(a[i]==a[i+1])
       	                          count++;
	                          }
	                             if(count==9)
	                               cout<<"\n Array is constant ";
                                   count=0;
                                           		
											for(i=0;i<=4;i++)
                                           	{  
       	                                      if(a[i]<a[i+1])
       	                                        count++;
	                                        }
											       if(count==4)
	                                                { 
											          for(i=4;i<=9;i++)
											         {
												        if(a[i+1]<a[i])
											               count++;
											         }
										             }
	                                                      if(count==9)
												              cout<<"\n Array is growing and decreasing ";
												  
												          if(count<9)
												               cout<<"\nArray has no sequence ";
												  
								   	     
return 0;

}
   
