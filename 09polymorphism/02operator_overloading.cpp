#include<iostream>
using namespace std;

class Base{
    public:
    int a;

    Base(int x )
    {
        a = x;
    }
    void operator+(Base& b);
};

void Base::operator+(Base& b)
{
        int total = a + b.a;
        cout<<total<<endl;
}

int main()
{
    Base b1(5);
    Base b2(5);
    b1+b2;
    return 0;
}