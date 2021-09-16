/*
(Matrix Multiplication) A two-dimensional matrix can be multiplied by another 
matrix to give a matrix whose elements are the sum of the products of the elements 
within a row from the first matrix and the associated elements of a column of the second 
matrix. Both matrices should either be square matrices, or the number of columns of 
the first matrix should equal the number of rows of the second matrix. To calculate each 
element of the resultant matrix, multiply the first element of a given row from the first 
matrix and the first element of a given column in the second matrix, add that to the 
product of the second element of the same row and the second element of the same 
column, and keep doing so until the last elements of the row and column have been 
multiplied and added to the sum. Write a program to calculate the product of 2 matrices 
and store the result in a third matrix
*/
#include <iostream>  
using namespace std;  
int main()  
{  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiply of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;  
}  
