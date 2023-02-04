#include<iostream>
using namespace std;

class Student{

    int Roll_no;

    public:

    Student(int R)
    {
        Roll_no = R;
    }

    Student(Student &s)             //  Copy constructor
    {
        Roll_no = s.Roll_no;
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
    Student s1(s);  //passing instance through parameter
    s1.display();

    return 0;
}