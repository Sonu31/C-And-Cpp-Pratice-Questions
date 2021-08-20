#include<iostream>
using namespace std;

int sumofN_Num(int Num)
{
    int sum=0;
for(int i=1;i<=Num;i++)
{

    sum=sum+i;

}
  return sum;
  }
  int main()
  {
   int Num;
  cout<<"\n Enter the Number ";
  cin>>Num;
  int sum= sumofN_Num(Num);
  cout<<"\n The sum of Natural Number "<<sum;

  }
