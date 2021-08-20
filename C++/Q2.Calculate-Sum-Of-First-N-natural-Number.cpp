#include<iostream>
using namespace std;

int  main()
{

    int a,i,sum=0;
    cout<<"Enter a N natural number "<<endl;
    cin>>a;

    for(i=0;i<=a;i++)
        sum=sum+i;
    cout<<"sum of n natural is ="<<sum<<endl;
    return 0;
}
