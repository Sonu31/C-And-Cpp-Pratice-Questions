    #include<iostream>
    using namespace std;

   void palindrome (int num){
   int rev =0,val;
   val= num;
   while(num>0){
    rev= rev* 10+num% 10;
    num=num/10;

   }
   if(val= rev)
    cout<<val<<"is a palindrome"<<endl;
   else
    cout<<val<<"is not a palindrome "<<endl;

   }
   int main()
   {

       palindrome(304);
       palindrome(12231);
       return 0;
   }
