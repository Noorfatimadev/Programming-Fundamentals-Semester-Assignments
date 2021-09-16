/*
Yasir has some raw data with total number of items equal to 99. He needs to find 
how data is distributed. For this he needs to find mode, mean and median of the 
given data and then plot its histogram (A graph which has item on x-axes and its 
frequency on y-axis. See Wikipedia for more details) for visual aid. Write 
modular code for this problem. Modular means think about the possible 
functions/modules which are required to be created for this problem. Each 
function should be separable from the second one or runs independently of the 
other. It will be considered as a black box which takes some inputs and then 
outputs. Helper functions can also be used.
You must also note that the data of 99 integer items must be produced randomly. 
You will not ask it from user instead generate it in your code. 
*/

#include<iostream>
#include<numeric>
#include<iomanip>
using namespace std;
void mean()
{
	int arr[99]={6,7,8,9,8,7,8,9,8,9,7,8,9,5,9,8,7,8,7,8,6,7,8,9,3,9,8,7,8,7,7,8,9,8,9,8,9,7,8,9,6,7,8,7,8,7,9,8,9,2,7,8,9,8,9,8,9,7,5,3,5,6,7,2,5,3,9,4,6,4,7,8,9,6,8,7,8,9,7,8,7,4,4,2,5,3,8,7,5,6,4,5,6,1,6,5,7,8,7};
double mean;
int arraysum=0;
for(int i=0;i<=99; i++)
{arraysum=arraysum+arr[i];
}


mean=arraysum/99;
cout<<"******************"<<endl;
cout<<"Mean"<<endl;
cout<<"******************"<<endl;
cout<<" "<<endl;
cout<<"Mean = "<<arraysum<<"/"<<99<<" = "<<mean;
cout<< " "<<endl;
cout<<" "<<endl;
}

void median()
{
	int arr[99]={6,7,8,9,8,7,8,9,8,9,7,8,9,5,9,8,7,8,7,8,6,7,8,9,3,9,8,7,8,7,7,8,9,8,9,8,9,7,8,9,6,7,8,7,8,7,9,8,9,2,7,8,9,8,9,8,9,7,5,3,5,6,7,2,5,3,9,4,6,4,7,8,9,6,8,7,8,9,7,8,7,4,4,2,5,3,8,7,5,6,4,5,6,1,6,5,7,8,7};
int median;	
cout<<"The unsorted array"<<endl;
for(int i=0;i<99; i++)
{ 
cout<<arr[i]<< " ";
}
cout<<" "<<endl;
for(int i=0; i<99; i++)
    {
        for(int j=i+1; j<99; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(int i=0; i<99; i++)
    {
        cout<<arr[i];
    }
    
    
    cout<<" "<<endl;
    cout<<"******************"<<endl;
cout<<"Median"<<endl;
cout<<"******************"<<endl;
cout<<" "<<endl;
		cout<<arr[49]<<endl;
		cout<<" "<<endl;
		
}

void mode( int freq[], int answer[], int aSize, int fSize )
{  
 const int SIZE2 = 10; 
 int largest = 0, array[ SIZE2 ] = { 0 }, count = 0; 
    cout << "\n******\nMode\n******\n"; 
	  for ( int rating = 1; rating < fSize; ++rating )
	      {
		  freq[ rating ] = 0; 
		    for ( int loop = 0; loop < aSize; ++loop ) 
			     ++freq[ answer[ loop ] ];
				     cout << setw( 13 ) << "Response" << setw( 11 ) << "Frequency" << setw( 19 )  << "Histogram\n\n" << setw( 55 ) << "1    1    2    2\n" << setw( 56 ) << "5    0    5    0    5\n\n";
					   for ( int r = 1; r < fSize; ++r ) {
					       cout << setw( 8 ) << rating << setw( 11 ) << freq[ r ] << "          "; 
					       if ( freq[ r ] > largest ) { 
					         largest = freq[ r ];
					        for ( int v = 0; v < SIZE2; ++v )
					         array[ v ] = 0;
					          array[ r ] = largest; 
							    
							  ++count;    } 
					      else if ( freq[ r ] == largest )
					  {
					          array[ r ] = largest;
					          ++count;
					    } 
					       for ( int b = 1; b <= freq[ r ]; b++ ) 
					     cout << '*'; 
					       cout << '\n'; 
						      } 
				     cout << ( count > 1 ? "\nThe modes are:  " : "\nThe mode is: " );
				    for ( int m = 1; m < SIZE2; ++m ) 
				    
				      if ( array[ m ] != 0 )      
				     cout << m << " with a frequency of " << array[ m ] << "\n\t\t";
   cout << endl; }
}




int main()
{mean();
median();
mode( int freq[], int answer[], int aSize, int fSize );
return 0;
}
