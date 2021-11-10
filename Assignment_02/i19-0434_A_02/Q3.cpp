// Task_03
#include <iostream>
using namespace std;

int main()
{
  //i19-0434
  //Sourav Malani
  char alphabet;
  bool vowel,valid;
  cout << "Enter the alphabet:";
  cin>>alphabet;
  vowel = (alphabet=='a'||alphabet=='A'||alphabet=='e'||alphabet=='E'||
           alphabet=='i'||alphabet=='I'||alphabet=='o'||alphabet=='O'||
           alphabet=='u'||alphabet=='U');
  valid = ( (alphabet>=char(65) && alphabet<=char(90)) ||(alphabet>=char(97) && alphabet<=char(122) ) );
  switch(valid)
  {
      case true:
            switch(vowel)
            {
             case true:
                cout<<alphabet<<" is  vowel"<<endl;
                break;
             default:
                cout<<alphabet<<" is  consonant"<<endl;
            }
            break;
     default:
            cout<<"You enterend a invalid input"<<endl;
            
  }      
  
}  
