#include<iostream>
using namespace std;

// friend function access the private and protected data of a class.
// is a non-member function of a class

class A{
    int priData;
    protected:
    int proData;
    public:

    A()
    {
        priData = 23;
        proData = 12;
    }
    friend void disp(A& a);
};

void disp(A& a)
{
    cout<<"priData = "<<a.priData<<endl;
    cout<<"proData = "<<a.proData<<endl;
}

int main()
{
    A a;

    //because it is non member function of class it can't call using class or object name

    disp(a);

    return 0;
}