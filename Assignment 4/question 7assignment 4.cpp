/*
Write a program which asks the user about his/her registration number and tells him about its
validity. There are three possible formats for registration number: 2019-CS-1, 2017R/2018-
CS-1 and 2019-CD-CS-1. Roll number can be a number between 1 to 260 and year can be 
anything between 2015 to 2019. If user enters any registration number other than this format,
then a proper error message should be shown to the user. If registration number is according 
to the format, you should also convey the user that this is a valid registration number. For 
example: if user types 2019CS53, your program should generate a proper error message, 
explaining that he did not write in proper format. 
*/

#include<iostream>
#include<string>
using namespace std;
int main ()
{string form ;
int no , year;
cout<<"enter roll no.";
cin>>no;
cout<<"enter last digit of year";
cin>>year;
cout<<"Choose one of the following formats:- ";
cout<<"\n\t\t A. XXXX-CS-ZZZ";
cout<<"\n\t\t B. XXXXR/YYYY-CS-ZZZ";
cout<<"\n\t\t C. XXXX-CD-CS-ZZZ";
cin>>form;

if(no>=1 && no<=201)
{if (year>=5 &&year<=9)
{if (form=="A")
{cout<<year<<"-CS-"<<no<<endl;
}
else if( form =="B")
{cout<<"201"<<--year<<"R/201"<<year<<"-CS-"<<no;
}
else if (form=="C")
{cout<<"201"<<year<<"-CD-CS-"<<no;
}

else 
{cout<<"wrong input";
}}
else 
{cout<<"wrong input";
}
}
else 
{cout<<"wrong input";
}

return 0;}
