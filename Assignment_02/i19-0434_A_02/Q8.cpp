#include<iostream>
using namespace std;
int main()
{
    //i19-0434
    //Sourav Malani
    int total,CN,PCN,N_PCN,N500,N100,N50,N20,N10,N5,N1,notes; //total= amount in rupees , PCN=prefered currency note, rem= remaining rupees.
    //N500,N100 and other represent number of notes of the number mentioned
    cout<<"Enter the amount in rupees:";
    cin>>total;
    if (total>=100 && total <=100000)
    {       cout<<"Enter prefered currency note:";
            cin>>PCN;
            //Cheking whether the input is valid or not.
            if (PCN==500 || PCN==100 || PCN==50 || PCN==20 || PCN==10 || PCN==5 || PCN==1)
            {    N_PCN=(total/PCN); //N_PCN = number of notes of PCN. 
                 if (N_PCN>200)
                 {   total=(total-(200*PCN));
                     N_PCN=200;  
                     
                 }
                 else if (N_PCN<200)
                 {    N_PCN=(total/PCN); 
                      total=(total-PCN*N_PCN);
                     
                      
                 }              
                 cout<<"Currency Note : Number"<<endl;
                 //500
                 CN=500;   //CN is Currency note i'm handeling with now. 
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N500=(total/500);
                     total=total-(500*N500);
                     cout<<"500           : "<<N500<<endl; }
                 else
                     cout<<PCN<<"           : "<<N_PCN<<endl;
                          
                      
                 //100
                 CN=100;
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N100=(total/100);
                     total=total-(100*N100);
                     cout<<"100           : "<<N100<<endl; }
                 else
                     cout<<PCN<<"           : "<<N_PCN<<endl;
                 
                 //50
                 CN=50;
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N50=(total/50);
                     total=total-(50*N50);
                     cout<<"50            : "<<N50<<endl; }
                                                           
                 else  
                      cout<<PCN<<"           : "<<N_PCN<<endl;
                      
                     
                 
                 //20
                 CN=20;
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N20=(total/20);
                     total=total-(20*N20);
                     cout<<"20           : "<<N20<<endl; }
                 else
                     cout<<PCN<<"           : "<<N_PCN<<endl;
                 
                 //10
                 CN=10;
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N10=(total/10);
                     total=total-(10*N10);
                     cout<<"10           : "<<N10<<endl; }
                 else
                     cout<<PCN<<"           : "<<N_PCN<<endl;
                 
                 //5
                 CN=5;
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N5=(total/5);
                     total=total-(5*N5);
                     cout<<"5            : "<<N5<<endl; }
                 else
                     cout<<PCN<<"           : "<<N_PCN<<endl;
                 
                  //1
                 CN=1;
                 if (PCN!=CN)  //This is so that prefered Currency note output does not repeats.
                 {   N1=(total/1);
                     total=total-(1*N1);
                     cout<<"1            : "<<N1<<endl; }
                 else
                     cout<<PCN<<"           : "<<N_PCN<<endl;
                 
                                                             
                 
            }
            else //(PCN!=500 || PCN!=100 || PCN!=50 || PCN!=20 || PCN!=10 || PCN!=5 || PCN!=1)
                 cout<<"You entered an wrong currency note"<<endl;
                                   

    }
    else
        cout<<"Wrong Input, choose between Rs 100-1000000(choose from 500,100,50,20,10,5,1)"<<endl;
       
         4000+3500+300+40+5
    
        
    
    
    
    
    
    
}