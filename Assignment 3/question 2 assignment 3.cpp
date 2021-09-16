/*
Ask user to enter number and show the multiplication table (multiple cout statements) in the
following format using setw() function.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{int num;
cout<<"enter number "<<endl;
cin>>num;

int x;
x=num*1;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"1"<<" = "<<setfill(' ')<<right<<setw(1)<<x<<endl;
int y;
y=num*2;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"2"<<" = "<<setfill(' ')<<right<<setw(1)<<y<<endl;
int z;
z=num*3;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"3"<<" = "<<setfill(' ')<<right<<setw(1)<<z <<endl;
int a;
a=num*4;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"4"<<" = "<<setfill(' ')<<right<<setw(1)<<a<<endl;
int b;
b=num*5;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"5"<<" = "<<setfill(' ')<<right<<setw(1)<<b<<endl;
int c;
c=num*6;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"6"<<" = "<<setfill(' ')<<right<<setw(1)<<c<<endl;
int v;
v=num*7;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"7"<<" = "<<setfill(' ')<<right<<setw(1)<<v<<endl;
int d;
d=num*8;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"8"<<" = "<<setfill(' ')<<right<<setw(1)<<d<<endl;
int e;
e=num*9;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"9"<<" = "<<setfill(' ')<<right<<setw(1)<<e<<endl;
int l;
l=num*10;
cout<<setfill(' ')<<left<<setw(2)<<num<<"  *  "<<"1"<<" = "<<setfill(' ')<<right<<setw(1)<<l<<endl;
return 0;
}
