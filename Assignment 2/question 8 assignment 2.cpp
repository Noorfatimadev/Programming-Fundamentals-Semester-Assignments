
/*
A milk carton can hold 3.78 liters of milk. Each morning, a dairy from ships cartons of milk to a local 
grocery store. The cost of producing one liter of milk is $.038, and the profit of each carton of milk is 
$0.27. Write a program that does the following:
1. Prompts the user to enter the total amount of milk produced in the morning.
2. Outputs the number of milk cartons needed to hold milk. (Round your answer to the nearest 
integer)
3. Outputs the cost of producing milk.
4. Outputs the profit for producing milk. 
*/
#include<iostream>
using namespace std;
int main ()
{


double milk_produced, cartons, totalcost, totalprofit;
 

cout << "Enter the total number of milk produced in the morning: ";
cin >> milk_produced;

cartons = milk_produced / 3.78;
cout << "The total number of liters = " <<milk_produced << endl;

totalcost = milk_produced * 0.038;
cout<< "Total cost = $"<< totalcost << endl;

totalprofit = (cartons) * 0.27;
 cout<<"Total profit = $" << totalprofit;



return 0;
}
