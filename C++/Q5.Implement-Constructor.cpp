#include<iostream>
using namespace std;

class  test{
public :
    int x,y;
    test()
    {

        x=8;
        y=16;



    }


};
int main()
{

    test obj;
    cout<<"the sum is "<<obj.x+obj.y;
    return 1;
}
