/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. Take number of 
rows as input. The pyramid should look like this
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX
*/
#include <iostream>
using namespace std;

int main()
{
   int rows, i, j, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(i = 1; i <= rows; i++)
   {
      
      for(space = i; space < rows; space++)
      {
         cout << " ";
      }
     
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "X";
      }

      cout << "\n";
   }

   return 0;
}
