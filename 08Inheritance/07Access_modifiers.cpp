#include<iostream>
using namespace std;

// * private   : not allowed to be accessed directly by any object or function outside the class
// * public    : members are accessible from outside the class.
// * protected : same as private but it can inherits by othe class

class Base{

    int pri;        //private data

    protected:
    int pro;       //protected data

    public:
    int pub;        //public data

    void read_pri(int p)
    {
        pri = p;
        cout<<"pri = "<<pri<<endl;
    }
    void read_pro(int p)
    {
        pro = p;
        cout<<"pro = "<<pro<<endl;
    }
};

int main()
{
    Base b;
    b.read_pri(45);
    b.read_pro(67);
    b.pub = 56;
    cout<<"pub = "<<b.pub<<endl;

    return 0;
}