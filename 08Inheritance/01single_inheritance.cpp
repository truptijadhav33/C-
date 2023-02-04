#include<iostream>
using namespace std;
                //   single inheritance
                    
                //     |class parent|
                //           |
                //     |class  child|

class Student{
    public:
    int Roll_no;
    string name;

    void get_Student()
    {
        cout<<"\n\nEnter roll no and name of student :"<<endl;
        cin>>Roll_no>>name;
    }

    void set_Student()
    {
        cout<<"Roll no = "<<Roll_no<<endl;
        cout<<"Name = "<<name<<endl;
    }

};
class Result:public Student{   //class 'Result' inherits the properties of 'Student' class
    public:
    int total_marks;

    void get_Result()
    {
        cout<<"Enter total marks of student :"<<endl;
        cin>>total_marks;
    }

    void set_Result()
    {
        cout<<"Total marks = "<<total_marks<<endl;
    }
};

int main()
{
    Result r;

    r.get_Student();
    r.get_Result();
    r.set_Student();
    r.set_Result();

    return 0;
}