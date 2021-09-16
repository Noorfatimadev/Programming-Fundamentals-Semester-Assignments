/* 
 Two cars A and B leave an intersection at the same time. Car A travels west at an average speed 
of x miles per hour and car B travels south at an average speed of y miles per hour. Write a 
program that prompts the user to enter the average speed of both the cars and the elapsed time 
(in hours and minutes) and outputs the (shortest) distance between the cars.
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{ int n1, n2 , n3;
cout<<"Enter 3 (1digit) numbers:";
cin>>n1>>n2>>n3;
if(n1<=9 && n2<=9 && n3<=9)
{
cout<<n1<<n2<<n3<<endl;
cout<<n2<<n3<<n1<<endl;
cout<<n3<<n2<<n1<<endl;
cout<<n1<<n3<<n2<<endl;
cout<<n2<<n1<<n3<<endl;
cout<<n3<<n1<<n2<<endl;
}
else
{cout<<"u didnt enter a 1digit number";

}
return 0;

}
