/*
The population of a town A is less than the population of town B. However, the population of town 
A is growing faster than the population of town B. Write a program that prompts the user to enter 
the population and growth rate of each town. The program outputs after how many years the 
population of town A will be greater than or equal to the population of town B and the populations
of both the towns at that time. 
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int popA, popB, year = 1; 
    double growth_rateA, growth_rateB; 

    cout << "Enter the population and growth rate of Town A: ";
    cin >> popA >> growth_rateA;
    cout << endl;

    cout << "Enter the population and growth rate of Town B: ";
    cin >> popB >> growth_rateB;
    cout << endl;

    if (popA < popB && growth_rateA > growth_rateB)
    {
        {   
        do {
                (popA = ((growth_rateA / 100) * popA) + popA); 
                (popB = ((growth_rateB / 100) * popB) + popB);
                year++;
            }

            while (popA < popB);

            cout << "Town A will surpass Town B in population after " << year << " years.\n" << endl;
            cout << "The final population of Town A is: " << popA << ".\n" << endl;
            cout << "The final population of Town B is: " << popB << ".\n" << endl;
        }
    }
    else
    {
        cout << "Invalid Data.";
    }

    
    return 0;
}
