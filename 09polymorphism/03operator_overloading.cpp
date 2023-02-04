#include<iostream>
using namespace std;

class Base{
    public:
    int a;

    Base(int x )
    {
        a = x;
    }
    void operator++();
};

void Base::operator++()
{
    a = a+2;
    cout<<a<<endl;
}

int main()
{
    Base b1(5);
    ++b1;
    return 0;
}