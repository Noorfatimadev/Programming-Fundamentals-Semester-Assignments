/*
Write a C++ program to find sum of all prime numbers between 1 to n.
*/
#include <iostream>

using namespace std;
int main()
{
  
    int upto, i, j, p, s = 0;

    cout << "Enter upto Prime Numbers :";
    cin>>upto;

    for (i = 2; i <= upto; i++) {
        p = 1;
        j = 2;
        while (j < i) {
            if (i % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            s = s + j;
        }
    }
    cout << "\nThe sum of Prime Number is :" << s;

    return 0;
}
