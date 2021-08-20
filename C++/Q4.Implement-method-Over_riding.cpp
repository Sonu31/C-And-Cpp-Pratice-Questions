#include<iostream>
using namespace std;
class BaseClass{
public :
    void disp(){

    cout<<"parent class Function";
    }
};
class DerivedClass:public  BaseClass{
public:
void disp()
{

    cout<<"child Class function";

}


};
int main()
{

    DerivedClass obj= DerivedClass();
    obj.disp();
    return 0;

}
