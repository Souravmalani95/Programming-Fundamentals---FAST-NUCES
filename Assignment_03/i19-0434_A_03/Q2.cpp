#include <iostream>
using namespace std;
int main()
{
    //Sourav Malani -- i19-0434
    /*I have used 8 total loops( 2 outter loops and 3 inner loops for each).
      Outer loops is for number of rows to be printed. (counter is l)
        first Inner loop is to print dots before *. (counter i)
        Second Inner loop is to print *. (counter j)
        Third Inner loop is to print dots after *. (counter k)
    */

int n,c,d,s,i,j,k,l;
cout<<"Enter number of rows:";
cin>>n;
c=4*n-3;  //c represents total number of coloumns for n rows. 

//First Outter loop.
l=1;
while (l <= n){
    s=4*l-3; //s for number of stars to be printed on row l. 
    d=(c-s)/2; //d for number of dots to be printed before or after * on row number l.
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
//Second outer loop
//This loops is just reverse of First outer loop. The only change is formulas for s and d. 
l=1;
while (l <= n){
    s=c-4*(l-1); //And formula for number of stars reverses. 
    d=(c-s)/2; //d for number of dots to be printed before or after * on row number l. Which is half of  total coloumns minus stars on row number l.
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

