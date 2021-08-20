// CPP program to Calculate sum of first N natural number.  Using while loop

#include<iostream>
using namespace std;
int main()
{

    int Num ,i=1,sum=0;
    cout<<"\n Enter number find sum Natural Number";
    cin>>Num;
    while(i<=Num)
    {

        sum=sum+i;
        i++;

    }
    cout<<"\n Sum of Natural Num 1 to "<<Num<<"= "<<sum;
    return 0;
}
