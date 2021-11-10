#include <iostream>
using namespace std;
int main()
{
    //Sourav Malani -- i19-0434
    /*I have used 4 total loops( 1 outer loop and 3 inner loops).
      Outer loops is for number of rows to be printed. (counter is l)
        first Inner loop is to print dots before *. (counter i)
        Second Inner loop is to print *. (counter j)
        Third Inner loop is to print dots after *. (counter k)
    */
int n,c,d,i,j,k,l;
cout<<"Enter number of rows:";
cin>>n;
c=2*n-1;  //c represents total number of columns for n rows.
//Outer loop.
l=1;
while (l <= n){
    d=(c-(2*l-1))/2; //d for number of dots to be printed before or after * on row number l.
    //First Inner loop.
    i=1;
    while (i <= d){
        cout<<".";
        i++;
    }

    //Second Inner loop.
    j=1;
    while (j <= (2*l-1) ){   //I have used 2l-1 for number of stars to be printed on row number l.
        cout<<"*";
        j++;
    }
    //Third Inner loop.
    k=1;

    while (k <= d){
        cout<<".";
        k++;
    }
    cout<<endl;
    l++;
}

    return 0;
}
