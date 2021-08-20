
#include<iostream>
using namespace std;
int main()
{
    int Num,sum,i=0;
    cout<<" Enter the Number to find sum natural Number";
    cin>> Num;
    do
    {

        sum=sum+i;
        i++;

    }
    while(i<=Num);
    cout<<"\n  The Sum of First "<< Num << "Natural Num is "<< sum;
    return 0;
}
