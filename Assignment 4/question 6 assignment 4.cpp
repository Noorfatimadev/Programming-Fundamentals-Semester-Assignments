/*
Air quality index is the measurement of the quality of air we are breathing in. If it is more than 
a certain limit, it becomes hazardous for health. AQI for Lahore in certain locations is in critical 
zone. Write a C++ program which takes location name as input and tells the user about the 
AQI of that location. You must also inform him about the quality of the air i.e. good, bad, 
hazardous etc. You must look on internet about the AQIs for different locations. You will be 
using following locations for finding AQIs i.e. Model town, Johar town, Iqbal town, Shahdara,
UET, GT Road, Samanabad, Defence Phase I, Askari X, Bahria Town and Shalamar. 
*/

#include<iostream>
#include<string>
using namespace std;
int main ()
{ string location;

cout<<"Enter the location :"<<endl;
cin>>location ;

if (location == "DHAPhase1")
{
cout<<"AQI=59 US AQI"<<endl;
cout<<"Quality of air = MODERATE"<<endl;}

else if(location =="JOHARTOWN")
{
cout<<"AQI=163 US AQI"<<endl;
cout<<"Quality of air =UNHEALTHY"<<endl;
}
else if(location =="IQBALTOWN")
{
cout<<"AQI=183 US AQI"<<endl;
cout<<"Quality of air =HAZARDOUS"<<endl;
}
else if(location =="UET")
{
cout<<"AQI=211 US AQI"<<endl;
cout<<"Quality of air =HAZARDOUS"<<endl;
}
else if(location =="GTRoad")
{
cout<<"AQI=211 US AQI"<<endl;
cout<<"Quality of air =HAZARDOUS"<<endl;}
else if(location =="MallRoad")
{
cout<<"AQI=117 US AQI"<<endl;
cout<<"Quality of air =HAZARDOUS"<<endl;
}
else if(location =="Samanabad")
{
cout<<"AQI=154 US AQI"<<endl;
cout<<"Quality of air =HAZARDOUS"<<endl;
} 
else if(location=="AskariX")
{
cout<<"AQI=74 US AQI"<<endl;
cout<<"Quality of air =MODERATE"<<endl;
}
else if(location =="BahriaTown")
{
cout<<"AQI=68 US AQI"<<endl;
cout<<"Quality of air =MODERATE"<<endl;
}
else if(location =="Shalamar")
{
cout<<"AQI=74 US AQI"<<endl;
cout<<"Quality of air =MODERATE"<<endl;
}
else if(location =="Shahdara")
{
cout<<"AQI=97 US AQI"<<endl;
cout<<"Quality of air =MODERATE"<<endl;
}

else  
{
cout<<"This location is not supported "<<endl;}


return 0;
}
