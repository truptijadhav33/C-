
#include<iostream>
using namespace std;

class Student{

    int Roll_no;

    public:

    Student(int Roll_no)
    {
        this->Roll_no = Roll_no;    // Indicates the current class instance variable
    }

    void display()
    {
        cout<<"Roll no : "<<Roll_no<<endl;
    }

};

int main()
{
    Student s(101);
    s.display();

    return 0;
}