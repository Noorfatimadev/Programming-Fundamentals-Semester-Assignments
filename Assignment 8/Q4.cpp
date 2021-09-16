/*
The Logo language made the concept of turtle graphics famous. Imagine a 
mechanical turtle that walks around the room under the control of a C++
program. The turtle holds a pen in one of two positions, up or down. While the 
pen is down, the turtle traces out shapes as it moves; while the pen is up, the 
turtle moves about freely without writing anything. In this problem you’ll 
simulate the operation of the turtle and create a computerized sketchpad as well.
Use a 50-by-50 array floor which is initialized to zeros. Read commands from 
an array that contains them. Always keep track of the current turtle position and
whether the pen is currently up or down. Assume that the turtle always starts at 
position 0, 0 of the floor with its pen up. The set of turtle commands your 
program must process are shown in Figure. Suppose that the turtle is somewhere 
Programming Fundamentals
(Lab Manual)
Instructor: Ms. Sahar Waqar
Graduate Assistant: Usman Ghani, Muhammad Nazam Maqbool
near the center of the floor. The following “program” would draw and print a 
12-by-12 square. As the turtle moves with the pen down, set the appropriate 
elements of array floor to 1s. When the 6 command (print) is given, wherever 
there’s a 1 in the array, display an asterisk, or some other character you choose. 
Wherever there’s a zero, display a blank. Write a program to implement the turtle 
graphics capabilities discussed here. Write several turtle graphics programs to 
draw interesting shapes. Add other commands to increase the power of your 
turtle graphics language.
*/

#include <iostream>

using namespace std;

moveUp(int floor[50][50], int commands[9], int &i, int &j, int p)
{
	cout << "Moving Up\n";
		
	for(int x = 1; (x < commands[6]) && (i >= 0); i--)
	{
		if(p == 1)
		{
			floor[i][j] = p;
		}
					
		x++;
	}
}
moveDown(int floor[50][50], int commands[9], int &i, int &j, int p)
{
	cout << "Moving Down\n";
				
	for(int x = 1; (x < commands[6]) && (i < 50); i++)
	{
		if(p == 1)
		{
			floor[i][j] = p;
		}
					
		x++;
	}
}
moveRight(int floor[50][50], int commands[9], int &i, int &j, int p)
{
	cout << "Moving Right\n";
				
	for(int x = 1; (x < commands[6]) && (j < 50); j++)
	{
		if(p == 1)
		{
			floor[i][j] = p;
		}
					
		x++;
	}
}
moveLeft(int floor[50][50], int commands[9], int &i, int &j, int p)
{
	cout << "Moving Left\n";
				
	for(int x = 1; (x < commands[6]) && (j >= 0); j--)
	{					
		if(p == 1)
		{
			floor[i][j] = p;
		}
					
		x++;
	}
}

int main()
{
	int floor[50][50] = {{0}}, commands[9] = {0}, com, i = 0, j = 0;
	
	COM:
	
	cout << "Commands\t\tMeaning" << endl << endl;
	cout << "1\t\t\tPen up\n2\t\t\tPen down\n3\t\t\tTurn Up\n4\t\t\tTurn Down\n5\t\t\tTurn Right\n6\t\t\tTurn Left\n7-()\t\t\tMove Forward and number of spaces to move\n8\t\t\tPrint 50-by-50 array\n9\t\t\tEnd of data" << endl << endl;
	
	while(true)
	{
		cin >> com;
		cout << endl;
		
		if(com - 1 == 0)
		{
			commands[1] = 0;
		}
		else if(com - 1 == 1)
		{
			commands[0] = 0;
		}
		
		if((com > 9) && (com < 1))
		{
			cout << "\nPlease enter a valid Command! :(" << endl;

			goto COM; 
		}
		else if(com == 7)
		{
			cout << "Enter number of spaces : ";
			cin >> com;
			
			commands[6] = com;
		}
		else
		{
			for(int m = 2; m < 9; m++)
			{
				commands[m] = 0;
			}
			
			commands[com - 1] = 1;
		}
			
		if(commands[7])
		{
			for(int k = 0; k < 50; k++)
			{
				for(int l = 0; l < 50; l++)
				{
					if(floor[k][l] == 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				
				cout << endl;
			}
			
			break;
		}
		else if(commands[9])
		{
			for(int k = 0; k < 50; k++)
			{
				for(int l = 0; l < 50; l++)
				{
					if(floor[k][l] == 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				
				cout << endl;
			}
			
			break;
		}
		
		if(commands[1])
		{
			int p = 1;
			
			cout << "Pen is down\n";
			
			if(commands[2])
			{
				moveUp(floor, commands, i, j, p);
			}
			else if(commands[3])
			{
				moveDown(floor, commands, i, j, p);
			}
			else if(commands[4])
			{
				moveRight(floor, commands, i, j, p);
			}
			else if(commands[5])
			{
				moveLeft(floor, commands, i, j, p);
			}
		}
		else if(commands[0])
		{
			int p = 0;
			
			cout << "Pen is up\n";
			
			if(commands[2])
			{
				moveUp(floor, commands, i, j, p);
			}
			else if(commands[3])
			{
				moveDown(floor, commands, i, j, p);
			}
			else if(commands[4])
			{
				moveRight(floor, commands, i, j, p);
			}
			else if(commands[5])
			{
				moveLeft(floor, commands, i, j, p);
			}
		} 
	}
	
	return 0;
}
