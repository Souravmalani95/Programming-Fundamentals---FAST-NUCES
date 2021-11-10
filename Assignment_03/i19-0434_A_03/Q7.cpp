#include <iostream>
using namespace std;
int main()
{
    /* Alograithum is that I have printed dots on odd coloumns and underscores on even coloumns (first half of pattern)
       And I have printed dots on even coloumns and underscores on odd coloumns (later half of pattern.)
       To do this problem with one loop i reset the loop when first half got printed */
    int n,i=1,j=1,repeat=0;  //i for row and j for coloumn 
    cout<<"Enter number:";
    cin>>n;

    while (j <= n){
        //To know if the loop is being executed again or not I set an counter named repeat.
        
        //stars *For second half of pattern (when repeat==1)*
        if ( (j<=n-i)  && (repeat==1))
             cout<<"*";
        //stars *For first half of pattern (when repeat!=1)*     
        else if ((i >= j) && (repeat!=1))
            cout<<"*";
        //underscores _For first half of pattern (when repeat!=1)_    
        else if (j%2==0 && repeat!=1)
            cout<<"_";
        //dots .For first half of pattern (when repeat!=1).    
        else if (j%2!=0 && repeat!=1)
            cout<<"."; 
        //dots .For second half of pattern (when repeat==1).    
        else if (j%2==0 && repeat==1)
            cout<<".";
        //underscores _For second half of pattern (when repeat==1)_
        else if (j%2!=0 && repeat==1)
            cout<<"_";
        //When loop resets and repeat then the patten rows should be printed n-1 times.    
        if ((i==n-1) && (repeat==1) && (j==n) )
            break;
        j++;
        //This is to keep running coloumn   
        if (j >n ){
            cout<<endl;
            i++;
            j=1;
            //if rows gets greater than n then the loop breaks and does not initialize i . 
            if (i >n)
                break;
        }
        //LOOP RESETER.
        if ( ( (i == n) && (j == n) ) && ( repeat<1) ){
            i=1,j=1,repeat++;
            cout<<"*"<<endl;
        }    
    }
return 0;
}
