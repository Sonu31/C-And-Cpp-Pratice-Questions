#include<iostream>
using namespace std;
int main()
{

    int num,rem ,sum=0,temp;
    cout<<"please Enter Your number";
    cin>>num;
    temp=num;
    while(num>0)
    {

        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;


    }
    if(temp==sum)
    {

        cout<<"Givem number is palindrome number";

    }
    else
    {

        cout<<"Given Number is not palindrome number";

    }

}
