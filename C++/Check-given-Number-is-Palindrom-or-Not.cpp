#include<iostream>

using namespace std;
int main()
{

    int num ,digit,reverse=0;
    cout<<"Enter s pogitive integer:";
    cin>>num;
    int temp=num;
    do
    {

        digit= num%10;
        reverse =(reverse* 10)+digit;
        num=num/10;

    }
    while(num!=0);
    cout<<"The reverse of "<< temp<<"is "<< reverse<<endl;
    if(temp==reverse)
        cout<<"The number is apalindrome ";

else


    cout<<"The number is not  a palindrome.";


}
