#include <iostream>
using namespace std;
int main()
{
    int i,j, count, temp;
    unsigned long new_num,num;
    cout<<"Enter number: ";
    cin>>num;
    //for (i= 0 ;i < 8 ; i++)
    i=1;
    while (i <= 8)
    {
        new_num =0;
        j= 1;
        cout<<num<<"  ";

        while (num)
        {
            temp = num % 10;
            num=num/10; //num=num/10
            count = 1;
            while (temp == (num%10))
            {
                count++;
                num=num/10; //num=num/10
            }

           
            new_num = (((10*count) + temp) *j) + new_num;

            j *= 100;
        }

        num = new_num;
        i++;
      }
    return 0;
}