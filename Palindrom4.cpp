
#include<iostream>
using namespace std;

class  palindrom4 {
int Num,r,c,s;
public :
    void input()
    {
        cout<<"Enter a Number";
        cin>> Num;
    }
    void output()
    {
             c=Num;
             s=0;
        while (Num>0)       //121>0   T   //12>0   T       //1>0 T     // 0>0   F out of the body
        {
            r=Num%10;       //r=1         //r =2           // r=1
            s=(s*10)+r;     // s=1        // s=12          //s=121
            Num= Num/10;    // Num=12     //Num=1          //0
        }

        if(c==s)
        {

            cout<<  "this is palindrome"<<endl;
        }
            else
            {
              cout<<"this is not palindrome "<<endl;
            }
}
};
int   main()
    {

        palindrom4 obj;
        obj.input();
        obj.output();
        return 0;
    }





