#include <iostream>
using namespace std;
int main(){
    //i19-0434 ---- Sourav Malani
    const int S1=3,S2=4,S3=2,S4=6,S5=8;
    int Array1[S1]={},Array2[S2]={},Array3[S3]={},Array4[S4]={},Array5[S5]={},i;
    int highest,second,j;
    highest =2147483648;
    second =-2147483648;

    cout<<"THERE ARE TOTAL OF 5 ARRAYS."<<endl;
    //----------------Array 1 input----------------.
    for (i=0;i<S1;i++){
        cout<<"Enter "<<S1<<" values for Array1:";
        cin>>Array1[i];
        if (i>0){
            while (Array1[i-1]>Array1[i]){
                cout<<"You must enter value in ascending order:";
                cin>>Array1[i];
            }
        }    
    }
    //----------------Array 2 input----------------.
    for (i=0;i<S2;i++){
        cout<<"Enter "<<S2<<" values for Array2:";
        cin>>Array2[i];
        if (i>0){
            while (Array2[i-1]>Array2[i]){
                cout<<"You must enter value in ascending order:";
                cin>>Array2[i];
            }
        }    
    }
    //----------------Array 3 input----------------.
    for (i=0;i<S3;i++){
        cout<<"Enter "<<S3<<" values for Array3:";
        cin>>Array3[i];
        if (i>0){
            while (Array3[i-1]>Array3[i]){
                cout<<"You must enter value in ascending order:";
                cin>>Array3[i];
            }
        }    
    }
    //----------------Array 4 input----------------.
    for (i=0;i<S4;i++){
        cout<<"Enter "<<S4<<" values for Array4:";
        cin>>Array4[i];
        if (i>0){
            while (Array4[i-1]>Array4[i]){
                cout<<"You must enter value in ascending order:";
                cin>>Array4[i];
            }
        }    
    }
    //----------------Array 5 input----------------.
    for (i=0;i<S5;i++){
        cout<<"Enter "<<S5<<" values for Array5:";
        cin>>Array5[i];
        if (i>0){
            while (Array5[i-1]>Array5[i]){
                cout<<"You must enter value in ascending order:";
                cin>>Array5[i];
            }
        }    
    }

    //----------------MERGING---------------------------
const int SM=S1+S2+S3+S4+S5;
int count=0;
int MergedArray[SM]={},smallest=0;
highest=Array1[0];
for(i=0;i<S1;i++){
   if (smallest>=Array1[i]){
       smallest=Array1[i];
   }
}
//Array2
for(i=0;i<S2;i++){
   if (smallest>=Array2[i]){
       highest=Array2[i];
   }
}
//Array3
for(i=0;i<S3;i++){
   if (smallest>=Array3[i]){
       smallest=Array3[i];
   }
}
//Array4
for(i=0;i<S4;i++){
   if (smallest>=Array4[i]){
       smallest=Array4[i];
   }
}
//Array5
for(i=0;i<S5;i++){
   if (smallest>=Array5[i]){
       smallest=Array5[i];
   }
}

for (i=0;i<S1;i++) {
    if (Array1[i] > highest){ 
        second = highest ; 
        highest = Array1[i]; 
    }    
    else if(Array1[i] > second && Array1[i]!=highest) 
        second = Array1[i]; 
}         
for (i=0;i<S2;i++) {
    if (Array2[i] > highest){ 
        second=highest ; 
        highest = Array2[i]; 
    }    
    else if(Array2[i] > second && Array2[i]!=highest) 
        second = Array2[i]; 
}         
for (i=0;i<S3;i++){ 
    if (Array3[i] > highest){ 
        second = highest ; 
        highest = Array3[i]; 
    }    
    else if(Array3[i] > second && Array3[i]!=highest) 
        second = Array4[i]; 
}         
for (i=0;i<S4;i++) {
    if (Array4[i] > highest){ 
        second = highest ; 
        highest = Array4[i]; 
    }    
    else if(Array4[i] > second && Array4[i]!=highest) 
        second = Array5[i]; 
}         
for (i=0;i<S5;i++) {
    if (Array5[i] > highest){ 
        second = highest ; 
        highest = Array5[i]; 
    }    
    else if(Array5[i] > second && Array5[i]!=highest) 
        second = Array5[i]; 
}         
for (int i=0;i<SM;i++){
    if (i>1){
        highest=second;
    }
    if (i>0){
        second=smallest;
    }
    if (i==0){
        MergedArray[i]=highest;
        count++; 
    }
    else{
      //cout<<" Hi ";    
      for(j=0;j<S1;j++){
       if (highest>Array1[j] && Array1[j]>=second){
           second=Array1[j];
       }
      }
    //Array2
      for(j=0;j<S2;j++){
       if (highest>Array2[j] && Array2[j]>=second){
           second=Array2[j];
       }
      }
    //Array3
      for(j=0;j<S3;j++){
       if (highest>Array3[j] && Array3[j]>=second){
           second=Array3[j];
       }
      }
    //Array4
      for(j=0;j<S4;j++){
       if (highest>Array4[j] && Array4[j]>=second){
           second=Array4[j];
       }
      }
    //Array5
      for(j=0;j<S4;j++){
       if (highest>Array4[j] && Array4[j]>=second){
           second=Array4[j];
       }
      }
      MergedArray[i]=second;
      count++;
      if (second == smallest){
          break;
      }
    }      
    
}

//Printing Arrays..............................................................
//Array1
cout<<endl;
cout<<"Array1:{";
for(i=0;i<S1;i++)
   cout<<Array1[i]<<" ";
cout<<"}"<<endl;
//Array2..
cout<<"Array2:{";
for(i=0;i<S2;i++)
   cout<<Array2[i]<<" ";
cout<<"}"<<endl;
//Array3
cout<<"Array3:{";
for(i=0;i<S3;i++)
   cout<<Array3[i]<<" ";
cout<<"}"<<endl;
//Array4
cout<<"Array4:{";
for(i=0;i<S4;i++)
   cout<<Array4[i]<<" ";
cout<<"}"<<endl;
//Array5
cout<<"Array5:{";
for(i=0;i<S5;i++)
   cout<<Array5[i]<<" ";
cout<<"}"<<endl;
//Merger Array
cout<<"MergedArray:{";
for(i=0;i<count;i++)
   cout<<MergedArray[i]<<" ";
cout<<"}"<<endl;


}