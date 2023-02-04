#include<iostream>
using namespace std;

class Student{
    int Roll_no;
    string name;                    //Data members of class

    public:         //Access specifiers of class if specifies  by default it will be private

    void get(int R , string n)          //Member function of class
    {
        Roll_no = R;
        name = n;
    }
    void set()
    {
        cout<<"Roll no. : "<<Roll_no<<endl;
        cout<<"Name : "<<name;
    }

};

int main()
{
    Student s;   // ' s ' is a object of class ' Student '
    
    // call member function using instance of class

    s.get(1,"Trupti");
    s.set();

    return 0;
}