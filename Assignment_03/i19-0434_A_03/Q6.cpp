#include <iostream>
using namespace std;
int main()
{
    //Sourav Malani -- i19-0434
    /*I have used 10 total loops( 2 outter loops, 1 middle loop and 3 inner loops for each).
      Outer loops are for number of rows to be printed. (counter is l)
        first Inner loop is to print dots before *. (counter i)
        Second Inner loop is to print *. (counter j)
        Third Inner loop is to print dots after *. (counter k)
        one while loop for validation.
    */

int n,r,c,d,s,i,j,k,l;
cout<<"Enter the diameter:";
cin>>n; //n for diamerer
r=n/2; //r for radius

//First Outter loop.
l=1;
while(n%2==0){
    cout<<"Enter an odd number diameter please:";
    cin>>n; //n for diamerer
}
r=n/2; //r for radius

//First Outter loop.
while (l <= r){
    s=3+2*(l-1); //s for number of stars to be printed on row l.
    d=r-l; //d for number of dots to be printed before or after * on row number l.
    //First Inner loop.
    i=1;
    while (i <= d){
        cout<<".";
        i++;
    }
    //Second Inner loop.
    j=1;
    while (j <= s){   //
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


//Middle loop
l=1;
while (l <= n){
    cout<<"*";
    l++;
}
cout<<endl;

//Second outer loop
//This loops is just reverse of First outer loop. The only change is formulas for s and d.
l=1;
while (l <= r){
    s=n-2*(l-1); //And formula for number of stars reverses.
    d=l-1; //d for number of dots to be printed before or after * on row number l. Which is half of  total coloumns minus stars on row number l.

    //First Inner loop.
    i=1;
    while (i <= d){
        cout<<".";
        i++;
    }

    //Second Inner loop.
    j=1;
    while (j <= s  ){   //I have used 4l-3 for number of stars to be printed on row number l.
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

