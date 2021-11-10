#include<iostream>
#include<string>
using namespace std;
int main()
{
   //i19-0434
   //Sourav Malani
   //1GB=1000 MBs
   double bill,GB,bill_1,bill_2,bill_3;
   int part;
   char pckg; //pckg stands for package. 
   cout<<"Enter part A or B of the question(Enter 1 for part A and 2 for part B):";
   cin>>part;
   cout<<part<<endl;
   switch(part)
   {
     case 1: //Part A  
           cout<<"How many GBs you have used in the month:";
           cin>>GB;
           cout<<"Which package you had subscribed(A,B,or C):";
           cin>>pckg;
           if (pckg=='A' || pckg =='a')
           {     if (GB>=1)
                     bill=100+(200*(GB-1));
                 else
                     bill=100;
                 cout<<"Your monthly bill is "<<bill<<endl;     }
           else if (pckg=='B' || pckg =='b')
            {   if (GB>=2.5)
                    bill=100+(100*(GB-2.5));
                else
                    bill=200;
                cout<<"Your monthly bill is "<<bill<<endl;     }
           else if (pckg=='C' || pckg =='c')    
            {    bill=1000;
                 cout<<"Your monthly bill is "<<bill<<endl; }
           else
               cout<<"Wrong pckg choice"<<endl;
           break;       
     case 2: //part B of the question,
           cout<<"How many GBs you have used in the month:";
           cin>>GB;
           cout<<"Which package you had subscribed(A,B,or C):";
           cin>>pckg;
           if (pckg=='A' || pckg =='a')
           {     if (GB>=1)
                     bill_1=100+(200*(GB-1));
                 else
                     bill_1=100;
                 cout<<"Your monthly bill is "<<bill_1<<endl;
                 
                 if (GB>=2.5)
                    bill_2=100+(100*(GB-2.5));
                 else
                    bill_2=200;
                 
                 bill_3=1000;    
                 
                 if (bill_2<bill_1)  //If pckg B chosen.   
                    cout<<"You would have saved "<<bill_1-bill_2<<" if you had chosen package B"<<endl;
                 else
                    cout<<"You would have no savings if you had chosen package B"<<endl;
                 
                 if (bill_3<bill_1) //If part C chosen.
                    cout<<"You would have saved "<<bill_1-bill_3<<" if you had chosen package C"<<endl;
                 else
                    cout<<"You would have no savings if you had chosen pckg C"<<endl;
            }
           else if (pckg=='B' || pckg =='b')
            {   if (GB>=2.5)
                    bill_2=100+(100*(GB-2.5));
                else
                    bill_2=200;
                cout<<"Your monthly bill is "<<bill_2<<endl;
                // pckg A calculations
                if (GB>=1)
                     bill_1=100+(200*(GB-1));
                else
                     bill_1=100;
                if (bill_1<bill_2)     
                    cout<<"You would have saved "<<bill_2-bill_1<<" if you had chosen package A"<<endl;
                else
                    cout<<"You would have no savings if you had chosen package A"<<endl;
                //pckg C calculations
                bill_3=1000;
                if (bill_3<bill_2)
                   cout<<"You would have saved "<<bill_2-bill_3<<" if you had chosen package C"<<endl;
                else
                    cout<<"You would have no savings if you had chosen package C"<<endl;
                   
            }
           else if (pckg=='C' || pckg =='c')    
            {    bill=1000;
                 cout<<"Your monthly bill is "<<bill<<endl;
                 //pckg A calculations
                 if (GB>=1)
                     bill_1=100+(200*(GB-1));
                else
                     bill_1=100;
                if (bill_1<bill_3)     
                   cout<<"You would have saved "<<bill_1-bill_3<<" if you had chosen package A"<<endl;
                else
                    cout<<"You would have no savings if you had chosen package A"<<endl;
                    
                 //package B caclucations 
                 if (GB>=2.5)
                    bill_2=100+(100*(GB-2.5));
                 else
                    bill_2=200;
                 
                 if (bill_2<bill_3)     
                     cout<<"You would have saved "<<bill_1-bill_2<<" if you had chosen package B"<<endl;
                 else
                    cout<<"You would have no savings if you had chosen package B"<<endl;
                  
                
                
            }
           else
               cout<<"Wrong pckg choice "<<endl;
           break;
     default:
          cout<<"Wrong Choice of question part (Enter 1 for part A and 2 for part B)"<<endl;
                
       
   }       
 

   
    
    
    
    
    
    
}