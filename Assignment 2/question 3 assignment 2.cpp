/*
To make a profit, a local store marks up the prices of its items by a certain percentage. Write a C++ 
program that reads the original price of the item sold, the percentage of the marked-up price, and the
sales tax rate. The program then outputs the original price of the item, the percentage of the mark-up, 
the store’s selling price of the item, the sales tax, and the final price of the item.
*/
#include<iostream>
using namespace std;
int main ()
{ double  original_price , percentage_inc, sales_tax;
 cout<<"enter the original price of the product :"<<endl;
 cin>>original_price;
 cout<<"enter the percentage of marked up price:"<<endl;
 cin>>percentage_inc;
 cout<<"enter the sales tax rate:" <<endl;
 cin>>sales_tax;
 cout<<"original price :"<<original_price<<endl;
 cout<<"percentage of mark up:"<<percentage_inc<<endl;
 double store_selling_price;
 store_selling_price = original_price+(percentage_inc/100)*original_price;
 cout<<"store selling price of the product :"<<store_selling_price<<endl;
 double final_price;
 final_price= store_selling_price+(sales_tax/100)*original_price;
 cout<<"final selling price of the product is:"<<final_price<<endl;
 return 0;
 
}
