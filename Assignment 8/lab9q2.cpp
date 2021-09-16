/*
(Fraction calculator) 
Write a program that lets the user perform arithmetic operations 
on fractions. Fractions are of the form a/b, in which a and b are integers and b 6¼ 0. 
Your program must be menu driven, allowing the user to select the operation (+, -, *, 
or /) and input the numerator and denominator of each fraction. Furthermore, your 
program must consist of at least the following functions:
 
a. Function menu: This function informs the user about the program’s purpose, 
explains how to enter data, and allows the user to select the operation. 
b. Function addFractions: This function takes as input four integers representing the 
numerators and denominators of two fractions, adds the fractions, and returns the 
numerator and denominator of the result. 
c. Function subtractFractions: This function takes as input four integers representing 
the numerators and denominators of two fractions, subtracts the fractions, and returns 
the numerator and denominator of the result. 
d. Function multiplyFractions: This function takes as input four integers representing 
the numerators and denominators of two fractions, multiplies the fractions, and returns 
the numerators and denominators of the result. 
e. Function divideFractions: This function takes as input four integers representing 
the numerators and denominators of two fractions, divides the fractions, and returns the 
numerator and denominator of the result.

Modify above question and show the answer in lowest forms (not in decimals. 
Only answers in fractions are allowed)
*/
#include<iostream>
#include<iomanip>
using namespace std;
void start()
{
	cout<<"********************************************************"<<endl;
	cout<<"Welcome to the fraction calculation"<<endl;
    cout<<"********************************************************"<<endl;
    cout<<" "<<endl;
}
void reduce_fraction (int &numerator, int &denominator)
{
        for (int i = denominator * numerator; i > 1; i--) {  
                if ((denominator % i == 0) && (numerator % i == 0)) {  
            denominator =denominator/ i;  
                numerator = numerator/i;  
        }  
                  
         }
}
     void menu()
     {
	 
     cout<<"Please select your operation:"<<endl;
	 cout<<"1. Press 1 for addition"<<endl;
	 cout<<"2. Press 2 for subtraction"<<endl;
	 cout<<"3. Press 3 for divide"<<endl;
	 cout<<"4. Press 4 for multiply"<<endl;
	 cout<<" "<<endl;
	}
	 void addition()
	 {
	int num1, num2 , den1, den2;
 cout<<"Please enter your fractions: "<<endl;
 cout<<"Enter numerator for fraction1 = ";
 cin>>num1;
 cout<<"Enter denominator for fraction1 = ";
 cin>>den1;
  cout<<"Enter numerator for fraction2 = ";
 cin>>num2;
 cout<<"Enter denominator for fraction2 = ";
 cin>>den2;
     cout<<" "<<endl;
	 	int ans1, ans2;
	 	ans2=den1*den2;
	 	ans1=num1*den2+num2*den1;
	 	reduce_fraction (ans1, ans2);
	 	cout<<num1<<"/"<<den1<<"+"<<num2<<"/"<<den2<<"="<<ans1 <<"/"<<ans2<<endl;
	 	cout<<" "<<endl;
	 	
	 }
	 	 void substraction()
	 {
	 int num1, num2 , den1, den2;
 cout<<"Please enter your fractions: "<<endl;
 cout<<"Enter numerator for fraction1 = ";
 cin>>num1;
 cout<<"Enter denominator for fraction1 = ";
 cin>>den1;
  cout<<"Enter numerator for fraction2 = ";
 cin>>num2;
 cout<<"Enter denominator for fraction2 = ";
 cin>>den2;
     cout<<" "<<endl;
	 	int ans1,ans2;
	 	ans2=den1*den2;
	 	ans1=num1*den2-num2*den1;
	 	 	reduce_fraction (ans1, ans2);
	 	cout<<num1<<"/"<<den1<<"-"<<num2<<"/"<<den2<<"="<<ans1 <<"/"<<ans2<<endl;
	 	cout<<" "<<endl;
	 	
	 }
	  	 void multiplication()
	 {
	 int num1, num2 , den1, den2;
 cout<<"Please enter your fractions: "<<endl;
 cout<<"Enter numerator for fraction1 = ";
 cin>>num1;
 cout<<"Enter denominator for fraction1 = ";
 cin>>den1;
  cout<<"Enter numerator for fraction2 = ";
 cin>>num2;
 cout<<"Enter denominator for fraction2 = ";
 cin>>den2;
     cout<<" "<<endl;
	 	int ans1,ans2;
	 	ans2=den1*den2;
	 	ans1=num1*num2;
	 	 	reduce_fraction (ans1, ans2);
	 	cout<<num1<<"/"<<den1<<"*"<<num2<<"/"<<den2<<"="<<ans1 <<"/"<<ans2<<endl;
	 	cout<<" "<<endl;
	 	
	 }
 	 void division()
	 {
	 int num1, num2 , den1, den2;
 cout<<"Please enter your fractions: "<<endl;
 cout<<"Enter numerator for fraction1 = ";
 cin>>num1;
 cout<<"Enter denominator for fraction1 = ";
 cin>>den1;
  cout<<"Enter numerator for fraction2 = ";
 cin>>num2;
 cout<<"Enter denominator for fraction2 = ";
 cin>>den2;
     cout<<" "<<endl;
	 	int ans1,ans2;
	 	ans2=den1*num2;
	 	ans1=num1*den2;
	 	 	reduce_fraction (ans1, ans2);
	 	cout<<num1<<"/"<<den1<<"/"<<num2<<"/"<<den2<<"="<<ans1 <<"/"<<ans2<<endl;
	 	cout<<" "<<endl;
	 	
	 }
int main()
{start();
menu();
int op;
	 cout<<"Enter your operation = ";
	 cin>>op;
	 if (op==1)
	 addition();
	 else if (op==2)
	 substraction();
	 else if (op==4)
	multiplication();
	else if (op==3)
	division();
	 char option;
	 cout<<"do u want to continue for the same fractions(Y/N)||(y/n)"<<endl;
	 cin>>option;
	 if(option=='Y' || option=='y')
	 {
	 	menu();
int op;
	 cout<<"Enter your operation = ";
	 cin>>op;
	 if (op==1)
	 addition();
	 else if (op==2)
	 substraction();
	 else if (op==4)
	multiplication();
	else if (op==3)
	division();
	 char option;
	 cout<<"do u want to continue for the same fractions(Y/N)||(y/n)"<<endl;
	 }
	 else 

return 0;

}
