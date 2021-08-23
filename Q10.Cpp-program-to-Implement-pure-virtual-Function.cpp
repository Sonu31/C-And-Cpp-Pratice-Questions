
#include<iostream.h>
Class bb
{
    Public:
    Virtual void ppp()= 0;
 
};
 
Class d1: public bb
{
 
Public:
Void ppp()
{
 
Cout<<”it is the first derived class”<<endl;
}
};
Class d2 : public bb
{
Public:
Void ppp()
{
Cout<<”it is the second derived class”<<endl;
}
};
Main()
{
bb *p;
d1 a;
d2 b;
p=&a;
p->ppp();
p= &b;
p->ppp();
 
}
