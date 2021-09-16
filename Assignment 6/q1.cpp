/*
Generate the following output using nested for loops in C++. User should input number of 
rows and number of columns and you will print the table starting from 1 up to rows. Make 
sure you adjust the formatting before submitting the assignment.
1  2  3  4  5  6  7  8  9 10
2  4  6  8 10 12 14 16 18 20
3  6  9 12 15 18 21 24 27 30
4  8 12 16 20 24 28 32 36 40
5 10 15 20 25 30 35 40 45 50
*/

#include<iomanip>
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{int  rows , columns ,c=0;
cout<<"enter rows";
cin>>rows;
cout<<"enter columns";
cin>>columns;
int i,j;
for(i=1;i<=rows;i++)
{
for (j=1; j<=columns ; j++)
{
c++;
cout<<c<<"\t";

}
cout<<endl;
}

return 0;
}
