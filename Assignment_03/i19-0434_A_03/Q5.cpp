#include <iostream>
using namespace std;
int main()
{
    //i19-0434 -- Sourav Malani  
    
    /* What i have done in this program is that i have computed next term by 
       adding privious term in the multiplication of each digit of the privious term.
       e.g.  12,14 ==> 12 +( 1 * 2 ) = 14  
       but if there is an zero in privious term then i have ignored zero.
       e.g. 102,104 ==> 102 + (1 * 2) = 104 (i have ignored zero)    */
       
    int number,temp,next,i,mult,add;
    cout<<"Enter number:";
    cin>>number;
    cout<<number<<" ";
    i=1;
    //First loop to get next 10 terms.
    while ( i <= 11){
        temp=number;
        add=1;
        //Second loop to get next term. this loop find the sum of multiplication of privious number which is to be added in the privious number.
        //e.g. 132 ==> add = (1*3*2). which is to be added in 132 to get next term (138).    
        while (temp != 0){
            mult= temp%10;
            if (mult==0)
                break;
            if (number>=1 && number<10)
                add=1*mult;
            else
                add=add*mult;
            
            temp=temp/10;
            
        }
        number=number+add;
        cout<<number<<" ";
        i++;
    }    
    
    return 0;
}