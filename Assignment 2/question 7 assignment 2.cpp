/*
If you buy a 40GB hard drive, then chances are that the actual storage on the hard drive is not 40GB. 
This is because, typically, a manufacturer uses 1000 bytes as the value of 1K bytes, 1,000 K bytes as 
the value of 1MB, 1,000 MB as the value of 1 GB. Therefore, a 40 GB hard drive contains 
40,000,000,000 bytes. However, in computer memory as given in chapter 1 of the C++ programming 
book by D.S Malik, 1 KB is equal to 1,024 bytes, and so on. So, the actual storage on a 40 G hard drive 
is approximately 37.25 GB. Write a program that prompts the user to enter the size of the hard drive 
specified by the manufacturer, on the hard drive box, and outputs the actual storage capacity of the hard 
drive. 
*/
#include <iostream>

using namespace std;

int main()
{
    double x, actualSize;
    
    cout << "Please enter the size of the Hard drive: ";
    cin >> x;
   actualSize = (x * 1000000000) / (1024 * 1024 * 1024);
          
    
    cout << "The actual size of the hard drive is: " << harddriveRealSize << "GB" << endl;
    
    return 0;
}

