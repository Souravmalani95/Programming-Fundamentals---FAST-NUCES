#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 //i19-0434
 //Sourav Malani
 /* The value of i should be inputed greater than or equal to 1 in order for this function to be defined.
    In numerator the domain is x>=1.
    In denometer the domain is X>0.6 and X>0.3.
 */
 float i;
 cout<<"Enter value of i(greater than 1): ";
 cin>>i;
 if (i<1)
    cout<<"Value of i should be >=1."<<endl;
 else
     const double u=1.234, p=3.334;
     cout<<"Answer= "<<sqrt(u*pow(i,1.5)*(pow(i,2)-1))/(sqrt((p*i)-2)+sqrt((p*i)-1))<<endl;
 return 0;


}
