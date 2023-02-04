// function overriding provide specific implementation of the function which is already provided by its base class

#include<iostream>
using namespace std;
class Base{
    public:
    void disp()
    {
        cout<<"disp invoked"<<endl;
    }
};

class Derived:public Base{
    public:
    void disp()
    {
        cout<<"Display function invoked"<<endl;
    }
};

int main()
{
    Derived d;
    d.disp();
    return 0;
}