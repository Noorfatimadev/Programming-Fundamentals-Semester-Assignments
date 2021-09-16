#include<iostream>
using namespace std;
int main ()
{ 
char char1;
cout<<"Enter a three letter word :";
cin.get(char1); cout<<endl;
cout<<"First character = "<<char1<<endl;
cin.get(char1);cout<<endl;
cout<<"Second character = "<<char1<<endl;

cin.putback(char1);
cin.get(char1);
cout<<endl;
cout<<"Second character = "<<char1<<endl;

cin.get(char1);
cout<<endl;
cout<<"Third character = "<<char1<<endl;

return 0;
}

