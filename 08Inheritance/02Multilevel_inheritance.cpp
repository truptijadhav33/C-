#include<iostream>
using namespace std;
                //   Multilevel inheritance

                //    |class grandparent|
                //          |
                //     |class parent|
                //           |
                //     |class  child|

class Student{
    public :
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
class Marks:public Student{
    public:
    int m1;
    int m2;
    void get_marks()
    {
        cout<<"Enter marks of two sub :"<<endl;
        cin>>m1>>m2;
    }

};
class Result:public Marks{
    public:
    int total;

    void Remark()
    {
        total = m1 + m2;
        if(total>35)
        {
            cout<<"pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }

};

int main()
{
    Result r;
    r.get_Student();
    r.set_Student();
    r.get_marks();
    r.Remark();
    return 0;
}
