#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
//i19-0434 ---- Sourav Malani     
long double TOTAL;    
string Array,N;
bool found=false,valid=true;
int i,dots,dot_index;
//........................................................................................INTEGER..............................................................................................
bool negative=false;
cout<<"Enter an integer value:";
getline(cin,Array);
TOTAL=0;
//If the first char is + then false.
if (Array[0]=='+')
   valid=false;

//If any element of string,internally stored as array of chars, is other then digit then input is not an integer.
for (i=0;i<Array.length();i++){
     if (Array[0]!='-'){ //does not include -ve in the sum.
	if (Array[i]>=48 && Array[i]<=57)
	   TOTAL+=(int(Array[i])-48)*(pow(10,Array.length()-i-1));	 
        else
	    valid=false;
     }
     else
          negative=true; //THE TOTAL IS -VE IF -ve is true.          	 
}
//If negative multiplies sum by -ve.
if (negative)
   TOTAL=TOTAL*-1;
   
//If the range of integer exceeds then it is also invalid.
if (TOTAL<(-2147483647) || TOTAL>(2147483647))
   valid=false;	
//OUTPUT..
if (valid==true)
    cout<<endl<<"Valid input"<<endl;
else
    cout<<endl<<"Invalid input"<<endl;

//........................................................................................FLOAT..............................................................................................
cout<<"Enter an float value:";
getline(cin,Array);
TOTAL=0;
valid=true;
negative=false;
//If the first char is + then false.
if (Array[0]=='+'){
   valid=false;
}

//FINDING IF THERE IS A DOT IN THE INPUT OR NOT
for (i=0,dots=0;i<Array.length();i++){
   if (Array[i]=='.'){  
      dot_index=i;
      found=true;
      dots++;
      if (dots==2){ //If there are two dots then the float input is invalid.
          valid=false;           
          break;
           
      }
   }  
}
//CHECKING IF THE LAST Char IS f OR NOT.
if (Array[(Array.length())-1]!='f'){
    valid=false;
        
}
//IF THERE IS NO . THE input is invalid for float.
if (!found)
   valid=false;    
//Negative or not.
if (Array[0]=='-')
   negative=true;
//GETTING THE SUM.
i=0;
while( i < Array.length()){
     if (Array[i]!='-') //does not include -ve in the sum.
	if (Array[i]>=48 && Array[i]<=57)
	   TOTAL+=(int(Array[i])-48)*(pow(10,Array.length()-i-1));	 
     if  (Array[i]=='.' || Array[i]=='f')
            break;
     i++;   
}
for(i=0;i<(Array.length()-dot_index);i++){
   TOTAL=TOTAL/10;
}
//if -ve then sum multiplies by -ve.
if (negative)
   TOTAL=TOTAL*-1;
//IF THE RANGE EXCEEDS OR NOT.
double rangeP_f,rangeN_f;
rangeP_f=(3.4*pow(10,38));
rangeN_f=(3.4*pow(10,-38));
if (TOTAL>rangeP_f || TOTAL<rangeN_f){
   valid=false;
   
   	
}
//CHECKING IF THERE IS ANY OTHER ALPHABET OR SOMETHING. 
for (i=0;i<Array.length();i++){
           if (!( ( int(Array[i])>=48 && int(Array[i])<=57 ) || Array[i]=='.' || Array[Array.length()-1]=='f' || Array[i]=='-' ) ){ //CHECKING FLOAT CONDITIONS.
                valid=false;
                
           }   

}          

if (valid==true)
    cout<<endl<<"Valid input"<<endl;
else
    cout<<endl<<"Invalid input"<<endl;
//................................................................DOUBLE.................................................................................
cout<<"Enter an double value:";
getline(cin,Array);
TOTAL=0;
valid=true;
negative=false;
//If the first char is + then false.
if (Array[0]=='+'){
   valid=false;
   
}

//FINDING IF THERE IS A DOT IN THE INPUT OR NOT
for (i=0,dots=0;i<Array.length();i++){
   if (Array[i]=='.'){  
      dot_index=i;
      found=true;
      dots++;
      if (dots==2){ //If there are two dots then the float input is invalid.
          valid=false;           
          break;
           
      }
   }  
}

//Negative or not.
if (Array[0]=='-')
   negative=true;
//GETTING THE SUM.
i=0;
while( i < Array.length()){
     if (Array[0]!='-') //does not include -ve in the sum.
	if (Array[i]>=48 && Array[i]<=57)
	   TOTAL+=(int(Array[i])-48)*(pow(10,Array.length()-i-1));	 
     if  (Array[i]=='.' || Array[i]=='f')
            break;
     i++;   
}
for(i=0;i<Array.length()-dot_index;i++){
   TOTAL=TOTAL/10;
}
//if -ve then sum multiplies by -ve.
if (negative)
   TOTAL=TOTAL*-1;
//IF THE RANGE EXCEEDS OR NOT.
long double rangeP,rangeN;
rangeP=(1.7*pow(10,308));
rangeN=(5*pow(10,-345));
if (TOTAL>rangeP or TOTAL<rangeN){
   valid=false;
   	
}
//CHECKING IF THERE IS ANY OTHER ALPHABET OR SOMETHING. 
for (i=0;i<Array.length();i++){
           if (!( ( int(Array[i])>=48 && int(Array[i])<=57 ) || Array[i]=='.'|| Array[i]=='-') ){ //CHECKING DOUBLE CONDITIONS.
                valid=false;
           }   

}          

if (valid==true)
    cout<<endl<<"Valid input"<<endl;
else
    cout<<endl<<"Invalid input"<<endl;

return 0;
}
