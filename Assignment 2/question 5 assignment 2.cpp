/*
Write a C++ program that prompts the user to input the elapsed time for an event in seconds. The 
program then outputs the elapsed time in hours, minutes and seconds. 
*/
#include <iostream>
using namespace std;
int main()
{
int Elapsed_time, hours, minutes, seconds;

cout << "Please enter the elapsed time in seconds: ";
cin >> Elapsed_time;
hours = Elapsed_time /(60*60) ;

minutes = (Elapsed_time % 3600)/60;
seconds = Elapsed_time % 60;
cout << hours << ":" << minutes << ":" << seconds << endl;
return 0;
}
