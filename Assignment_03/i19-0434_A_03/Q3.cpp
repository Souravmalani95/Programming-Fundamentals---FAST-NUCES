#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int i=1,N,sum;
    float average=0;
    N=1000;
    int j=0;
    while(!(average<=16383.5001 && average>=16383.499))
        {
        N=1000,sum=0;
        for(int i=1; i<=1000;i++){
            sum+=rand()%32767;
            average=float(sum)/float(N);
        }
        j++;
        }
        cout<<"The average of "<<average;
        cout<<"  comes after running loop "<<j<<" times"<<endl;



return 0;
}


/*
srand(time(0));
for (int i=1; i<10;i++)
    cout<<rand()%32767<<endl;
*/



