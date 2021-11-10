#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5;
    cout<<"Values should be in range (0-10)"<<endl;
    cout<<"Enter 1st value:";
    cin>>n1;
    cout<<"Enter 2nd value:";
    cin>>n2;
    cout<<"Enter 3rd value:";
    cin>>n3;
    cout<<"Enter 4th value:";
    cin>>n4;
    cout<<"Enter 5th value:";
    cin>>n5;
    
    for (int i=10;i>=1;i--){
        cout<<setw(2)<<i<<setw(2);
        if (n1==i){
            cout<<" *"<<setw(3);
            n1--;
        }
        else{
            cout<<"  "<<setw(3);
        }    
        if (n2==i){
            cout<<" *"<<setw(3);
            n2--;
        }
        else{
            cout<<"  "<<setw(3);
        }    
        if (n3==i){
            cout<<" *"<<setw(3);
            n3--;
        }
        else{
            cout<<"  "<<setw(3);
        }    
        
        if (n4==i){
            cout<<" *"<<setw(3);
            n4--;
        }
        else{
            cout<<"  "<<setw(3);
        }    
        
        if (n5==i){
            cout<<" *"<<setw(3);
            n5--;
        }
        else{
            cout<<"  "<<setw(3);
        }    
            
        cout<<endl;
        
    }
    for (int i=1;i<=5;i++){
        cout<<"  "<<i;
    }

    return 0;
}
