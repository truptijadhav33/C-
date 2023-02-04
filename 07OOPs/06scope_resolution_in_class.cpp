#include<iostream>
using namespace std;
                //         (::)scope resolution operator 
class Student{

int Roll_no;

    public:

    Student(int Roll_no)
    {
        this->Roll_no = Roll_no;
    }

    void display();
};

//in this we use it to access or define method out of the class

void Student::display(){
    cout<<"Roll no. : "<<Roll_no<<endl;
}

int main()
{
    Student s(101);
    s.display();

    return 0;
}
