
#include<iostream>
using namespace std;

class Student{

    public:

     int Roll_no;

    void display()
    {
        cout<<"Roll no : "<<Roll_no<<endl;
    }

};

int main()
{
    Student s;
    s.Roll_no = 101;
    s.display();            //By using (.)dot operator

    Student *ptr;
    
    // ptr = &s;   //assigning address of 's' object to pointer 'ptr'

    ptr = new Student;          //by using new keyword memory is allocated in free space
    ptr->Roll_no = 102;
    ptr->display();         //By using (->) arrow operator

    return 0;
}