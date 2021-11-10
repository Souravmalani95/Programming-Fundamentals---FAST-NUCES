#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  //i19-0434
  //Sourav Malani
  double a,b,c,x1,x2,determinant;
  cout<<"Enter the value of a:";
  cin>>a;
  cout<<"Enter the value of b:";
  cin>>b;
  cout<<"Enter the value of c:";
  cin>>c;
  determinant = pow(b,2)-4*a*c;
  x1=(-b+pow((pow(b,2))-4*a*c,0.5))/2*a;
  x2=(-b-pow((pow(b,2))-4*a*c,0.5))/2*a;
  (determinant>0)? cout<<"Roots are x = "<<x1<<" and x = "<<x2<<endl:(determinant==0)? cout<<"Roots are equal x = "<<x1<<endl:
   cout<<"Roots are imaginary(not possible) "<<endl;
 
}