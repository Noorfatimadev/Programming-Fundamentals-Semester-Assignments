/*
In a right triangle, the square of the length of one side is equal to the sum of the squares of the 
lengths of the other two sides. Write a program that prompts the user to enter the lengths of 
three sides of a triangle and then outputs a message indicating whether the triangle is a right 
triangle
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int a , b , c;
	cout<<"enter the length of the first side of the triangle"<<endl;
	cin>>a;
		cout<<"enter the length of the second side of the triangle"<<endl;
	cin>>b;
		cout<<"enter the length of the third side of the triangle"<<endl;
	cin>>c;
	if ( a*a == b*b+c*c)
	{cout<<" the triangle is a right triangle. "<<endl;
}
else if (c*c == b*b+a*a)
{cout<<" the triangle is a right triangle. "<<endl;
	}	
	else if (b*b == c*c+a*a)
	{cout<<" the triangle is a right triangle. "<<endl;
	}
	else 
	{cout<<"the given triangle is not a right triangle."<<endl;
	}
	return 0;
}
