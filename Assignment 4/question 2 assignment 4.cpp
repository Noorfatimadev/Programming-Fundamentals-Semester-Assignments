/*
Senior salesperson is paid Rs. 400 a week, and a junior salesperson is paid Rs. 275 a week. 
Write a program that accepts as input a salesperson’s status in the character variable status. IF 
status is ‘s’ or ‘S’ the senior person’s salary should be displayed; if status is ‘j’ or ‘J’, the junior 
person’s salary should be displayed, otherwise display error message.

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	char status;
	cout<<"enter your sales person status :"<<endl;
	cout<<"if senior enter S || if junior enter endl"<<endl;
	cin>>status;
	if (status=='S'|| status=='s')
	{ cout<< "salary = 400 RS a week"<<endl;
}
else if (status=='J' || status=='j')
{cout<<"salary = 275 RS a week"<<endl;

}
else 
{cout<<"wrong input : You can only enter J/j OR S/s"<<endl;

	}
	 return 0;
	 	
	
}
