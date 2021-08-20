#include<iostream>
using namespace std;
class Over_loading{

public:
    int add(int n1, int n2){          // function name is same but parameatrs is different..
    return n1+n2;
    }

int add(int n1,int n2,int n3){

return n1+n2+n3;
}
};

int main()
{

    Over_loading obj;
    cout<<obj.add(23,23)<<endl;
    cout<<obj.add(40,24,23);
    return 0;
}
