#include<iostream>
using namespace std;

                // Types of constructors :
                //      1.Default constructor
                //      2.Parameterized constructor
                //      3.Copy constructor

class Student{

    int Roll_no;

    public:

    Student()           //Default constructor
    {
        cout<<"Default constructor invoked...!!"<<endl;
    }

    Student(int R)      //parameterized constructor
    {
        Roll_no = R;
        cout<<"Roll no : "<<Roll_no<<endl;
    }

};

int main()
{
    Student s;

    Student s1(1);
    return 0;
}