#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    //i19-0434
    //Sourav Malani
    cout<<"A. Draw an arrow pattern "<<endl;
    cout<<"B. Draw an X pattern "<<endl;
    cout<<"C. Draw a pyramid pattern"<<endl;
    cout<<"Make your choice from above(A,B or C):";
    char choice;
    int S;
    string str;
    cin>>choice;
    switch(choice)
    {
        case 'A':
        case 'a':

            cout<<"Enter a string:";
            cin>>str;
            S=str.size(); //size of the string
            cout<<setw((8*S)-5)<<str<<endl;
            cout<<setw((8*S)-4)<<str<<endl;
            cout<<setw((8*S)-3)<<str<<endl;
            cout<<setw((8*S)-2)<<str<<endl;
            cout<<setw((8*S)-1)<<str<<endl;
            cout<<str<<str<<str<<str<<str<<str<<str<<str<<endl;
            cout<<setw((8*S)-1)<<str<<endl;
            cout<<setw((8*S)-2)<<str<<endl;
            cout<<setw((8*S)-3)<<str<<endl;
            cout<<setw((8*S)-4)<<str<<endl;
            cout<<setw((8*S)-5)<<str<<endl;
        case 'B':
        case 'b':



        cout<<"Enter a string:";
        cin>>str;
        cout<<str<<setw(22)<<str<<endl;
        cout<<setw(7)<<str<<setw(18)<<str<<endl;
        cout<<setw(9)<<str<<setw(14)<<str<<endl;
        cout<<setw(11)<<str<<setw(10)<<str<<endl;
        cout<<setw(13)<<str<<str<<str<<endl;
        cout<<setw(11)<<str<<setw(10)<<str<<endl;
        cout<<setw(9)<<str<<setw(14)<<str<<endl;
        cout<<setw(7)<<str<<setw(18)<<str<<endl;
        cout<<str<<setw(20)<<str<<endl;


        case 'C':
        case 'c':
            int C;
            cout<<"Enter a Number:";
            cin>>C;
	        cout << C << setw(24) <<C<<endl;
	        cout<<showpoint;
	        cout<< setprecision(2) << (float)C<<setw(22)<<(float)C<<endl;
	        cout<< setprecision(3) << (float)C<<setw(21)<<(float)C<<endl;
	        cout<< setprecision(4) << (float)C<<setw(20)<<(float)C<<endl;
	        cout<< setprecision(5) << (float)C<<setw(19)<<(float)C<<endl;
	        cout<< setprecision(6) << (float)C<<setw(18)<<(float)C<<endl;
	        cout<< setprecision(7) << (float)C<<setw(17)<<(float)C<<endl;
	        cout<< setprecision(8) << (float)C<<setw(16)<<(float)C<<endl;
	        cout<< setprecision(9) << (float)C<<setw(15)<<(float)C<<endl;
	        cout<< setprecision(10)<< (float)C<<setw(14)<<(float)C<<endl;
         
        default:
            cout<<"Wrong Input for the Question part(choose A or B)"<<endl;
       

    }
}
