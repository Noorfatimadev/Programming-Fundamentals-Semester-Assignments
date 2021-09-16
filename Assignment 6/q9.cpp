/*
Write a C++ program which takes an integer as input and prints that number in words. For example, 
if user enters 450 then output will be “Four hundred and fifty”. If user enters 53, then output of the 
program is “Fifty-three”. If user enters 98754 then output of the program is Ninety-eight thousand 
seven hundred and fifty-four. Maximum limit for input is 5 digits
*/

#include <iostream>
using namespace std;
int main()
{
    int n, num = 0, i;
    cout << "\n\n Print a number in words:\n";
    cout << "-----------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    for (i = num; i > 0; i = i / 10) {

        switch (i % 10) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    cout << endl;
return 0;}
