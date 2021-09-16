/*
Paula and Danny want to plant evergreen trees along the back side of their yard. They do not 
want to have an excessive number of trees. Write a program that prompts the user to input the 
following:
a. The length of the yard
b. The radius of the fully-grown tree
c. The required space between fully grown tree
The program outputs the number of trees that can be planted in the yard and the total space 
that will be occupied by the fully-grown tree.
*/

#include <iostream> 
#include <iomanip>
#include<cmath>
using namespace std;
{   
double length;
double space,singletree;
int totalarea;
double radius;
int trees;
    
cout << "Enter the length of the Yard:" << endl;
    cin >> length;
cout << "Enter the radius of a fully grown tree:" << endl;
    cin >> radius;
cout << "Enter the space between fully grown trees:" << endl;  
    cin >> space;
singletree=(2*radius)*space;
trees=length/singletree;
totalarea=PI*pow(radius,2)*trees;


cout << "The number of trees can be planted is:" << trees << endl;
cout << "The total area of yard that will be occupied  is:" << totalarea << endl;
    return 0;}
