/*
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
 {
 
 double speedA, speedB, Distance, average ; 
 int timeMin, timeHr ,totaltime;
 
 cout<<"Enter the speed of Car A travelling towards west = "<<endl;
 cin>>speedA;
cout<<"Enter the speed of Car b travelling towards south = "<<endl;
 cin>>speedB;
 cout<<"Give the elapsed time :"<<endl;
 cout<<"In hours:"<<endl;
 cin>>timeHr;
 cout<<"In minutes:"<<endl;
 cin>>timeMin;
 totaltime = timeHr+(timeMin/60);
 cout<<"total time in hrs:"<<totaltime<<endl;
 average=(speedA+speedB)/2;
 cout<<"Average speed of both cars:"<<average<<endl;
 Distance=average*totaltime;
 cout<<"The smallest distance bw Car A and Car B is : Miles"<<Distance;
 
 return 0;
 
 }
