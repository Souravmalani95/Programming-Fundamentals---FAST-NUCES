#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
int x_max,y_max,y,power;
cout<<"Enter Absolute max value of x:";
cin>>x_max;
cout<<"Enter the odd power of x:";
cin>>power;
//RESTRICTION of odd power.
while(power%2==0){
    cout<<"Enter the ODD power please:";
    cin>>power;
}    
y_max=pow(x_max,power); //x^n.
//Outer loop to print y-axix values and *.
for(int i=y_max;i>=-(y_max);i--){
    cout<<setw(2)<<i;
    //Print stars where the value of x is equall to f(x).
    for (int j=-1*x_max;j<=(x_max);j++){
        y=pow(j,power);
        if (pow(j,power)==i)
            cout<<setw(3)<<"*";
        else
            cout<<setw(3)<<" ";
    }
    cout<<endl;
    
}
//x-axix lables.
cout<<setw(2)<<" ";
for (int i=-1*x_max;i<=(x_max);i++)
    cout<<setw(3)<<i;
return 0;
}
