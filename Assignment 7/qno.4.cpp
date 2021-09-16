/*
Write a program that asks the user to type 10 integers of an array and an integer value V 
and an index value i between 0 and 9. The program must put the value V at the place i in 
the array, shifting each element right and dropping off the last element. The program must 
then write the final array.
*/

#include<iostream>
using namespace std;
int main()
{
   int arr[10],b[10],i,V,j;
   
for(j=0;j<10;j++)
  {
      cout<<"Enter array element "<<j+1<<" = ";
           cin>>arr[j];
  }
         for(j=0;j<10;j++)
          {
 	        b[j]=arr[j];
          }
		    
               cout<<"\nEnter any integer value = ";
                     cin>>V;
     
               cout<<"\nEnter index value between 0 - 9 = ";
                      cin>>i;
     
                arr[i]=V;

                  for(j=i;j<=9;j++)
                  {
	                 arr[j+1]=b[j];
                  }

                      cout<<"\nNew array is \n";	   
	      
                         for(j=0;j<=9;j++)
                          {
	                        cout<<arr[j]<<endl;
                          }	  

return 0;

}
  
   
