/*
Write a program that uses three arrays Mango, Orange and Banana to store the number 
of fruits purchased by customer. The program inputs the number of mangos, oranges and 
bananas to be purchased by customer and stores them in corresponding array. The program 
finally displays the total bill of ach customer according to the following prices:
Rs. 20 per mango 
Rs. 10 per orange 
Rs. 5 per banana
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i;
	char ch='*';
	cout<<"Enter no. of customers = ";
	  cin>>n;  
	int mango[n],banana[n],orange[n],bill[n],customer[n];
	    
	    for(i=1;i<=n;i++)
	    { 
	         customer[i]=i;
   	    	cout<<"Enter no of mangoes purchased by Customer "<<i<<" = ";
	            cin>>mango[i];
			cout<<"Enter no of oranges purchased by Customer "<<i<<" = ";
			    cin>>orange[i];
			cout<<"Enter no of bananas purchased by Customer "<<i<<" = ";
			    cin>>banana[i];	 	         	
	    	
		}
	
	cout<<endl<<setfill('*')<<left<<setw(80)<<ch<<endl;
	cout<<"Customer No."<<setfill(' ')<<right<<setw(15)<<"Mangoes"<<setfill(' ')<<right<<setw(15);
	cout<<"Oranges"<<setfill(' ')<<right<<setw(15)<<"Bananas"<<setfill(' ')<<right<<setw(20)<<"Total Bill ";
	cout<<endl<<setfill('*')<<left<<setw(80)<<ch;
	
	for(i=1;i<=n;i++)
	{
		bill[i]=(mango[i]*20)+(orange[i]*10)+(banana[i]*5);
		
		cout<<endl<<customer[i]<<setfill(' ')<<right<<setw(20)<<mango[i]<<setfill(' ')<<right<<setw(17);
		
	    cout<<orange[i]<<setfill(' ')<<right<<setw(17)<<banana[i]<<setfill(' ')<<right<<setw(17)<<bill[i];
	}	
return 0;	
}
