/*
Newton law states that the force F, between two bodies of masses M1 and M2 is given by the equation 
shown below. In which k is the gravitational constant and d is the distance between the bodies. The 
value of k is approximately 6.674×10-11 m3·kg-1·s-2. . Write a program that prompts the user to input the 
masses of the bodies and the distance between the bodies. The program then outputs the force between 
the bodies.
*/
#include <iostream>
using namespace std;

int main ()
{
  double mass1,mass2,distance,force;
  double k= 6.674*(0.000000000001);
  
  cout << "Enter the mass of body no. 1 : ";
    cin >>mass1;
   cout << "Enter the mass of body no.2 : ";
    cin >>mass2;
     cout << "Enter the distance b/w the  two bodies : ";
    cin >>distance;
force=k*((mass1*mass2)/((distance)*(distance)));
  
  cout <<"The force b/w the bodies: "<<force<<endl;
  
  return 0;
}
