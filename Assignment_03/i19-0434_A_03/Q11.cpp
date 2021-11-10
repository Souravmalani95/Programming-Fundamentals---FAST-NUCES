#include <iostream>
using namespace std;
int main(){
    int num1=-1,num2=-1,sum,mult=0,numerator,number1,number2;
    char C;
    for(;num1<0;){
           cout<<"Enter first input value(positive):";
           cin>>num1;
    }       
    for(;num2<0;){
           cout<<"Enter Second input value(positive):";
           cin>>num2;
 
    }
    cout<<"Choose operator(num1(+,-,x,/,%)num2) from below:"<<endl;
    cout<<"A-Addition"<<endl;
    cout<<"S-Substraction"<<endl;
    cout<<"M-Multiplication"<<endl;
    cout<<"D-Division"<<endl;
    cout<<"R-Remainder"<<endl;
    cout<<"Enter Your choice:";
    cin>>C;
    
    switch(C){
        case 'A':
        case 'a':
                sum=num1;
                for(int i=1;i<=num2;i++,sum++)
                {}
                cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
                break;
        case 'S':
        case 's':
                sum=num1;
                for(int i=1;i<=num2;i++,sum--)
                {}
                cout<<endl<<num1<<" - "<<num2<<" = "<<sum<<endl;
                break;
        case 'M':
        case 'm':
              for(int j=1;j<=num2;j++){
                 for(int i=1;i<=num1;i++,mult++){
                 }
              }
              cout<<endl<<num1<<" x "<<num2<<" = "<<mult<<endl;
              break;

        case 'D':
        case 'd':
                number1=num1;
                number2=num2;
                numerator=num1;
                num1=num2;
                if (num2==0){
                    cout<<endl<<"0 can not be divided by any number."<<endl;
                    break;
                }
                else{ 
                    for(num2=1;mult<=numerator;num2++){
                        mult=0;
                        for(int j=1;j<=num2;j++){
                            for(int i=1;i<=num1;i++,mult++){
                            }
                        }
                
                    }
                    num2--;
                    cout<<endl<<number1<<" / "<<number2<<" = "<<--num2<<endl;
                    break;
                }    
        case 'R':
        case 'r':
                if (num2==0){
                    cout<<endl<<"Remainder by 0 is undefined.."<<endl;
                    break;
                }
                else{ 
                        /*Suppose 74 % 4. In this case num1=74 and num2 = 4.
                          All I  did is 74 - ( 4 x 18) = 2. 
                          obtained 18 from division program.
                          performing operations using privious written programs */  
                        
                        //Division---e.g.. (To get 4 and 18)
                              number1=num1;
                              number2=num2;
                              numerator=num1;
                              num1=num2;
                              for(num2=1;mult<=numerator;num2++){
                                  mult=0;
                                  for(int j=1;j<=num2;j++){
                                      for(int i=1;i<=num1;i++,mult++){
                                      }
                                  }
                              
                              }
                              num2--;
                              num2--;
                        //Multiplication e.g.. (4*18)
                              mult=0;
                              for(int j=1;j<=num2;j++){
                                 for(int i=1;i<=num1;i++,mult++){
                                 }
                              }
                        //Substraction e.g. 74- (4*18).
                                sum=number1;
                                num2=mult;
                                for(int i=1;i<=num2;i++,sum--)
                                {}
                                cout<<endl<<number1<<" % "<<number2<<" = "<<sum<<endl;
                                break;
                }            
        
        default:
            cout<<"WRONG OPERATOR INPUT.\nYour may select A,S,M,D or R  only."<<endl;
        
            

               
               
             
           
    }
    
    
    

return 0;

}
