#include<iostream>
using namespace std;
                /*   single inheritance

                                     |class parent|
                                      /       \
                          |class child_1|    |class child2|     */

class Student{
    public:
    int Roll_no;
    string name;

    void get_Student()
    {
        cout<<"\n\nEnter roll no : "<<endl;
        cin>>Roll_no;
        cout<<"Enter name : "<<endl;
        cin>>name;
    }

    void set_Student()
    {
        cout<<"Roll no = "<<Roll_no<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

class Info{
    public:
    int contact;
    int age;
    void get_Info()
    {
        cout<<"Enter age : "<<endl;
        cin>>age;
        cout<<"Enter contact no : "<<endl;
        cin>>contact;
    }
    void set_Info()
    {
        cout<<"contact no = "<<contact<<endl;
        cout<<"age = "<<age<<endl;
    }
};

class Result:public Student , public Info
{
    public:
    int total;

    void mark()
    {
        cout<<"Enter total marks get in exam : "<<endl;
        cin>>total;
    }

    void Remark()
    {
        if(total>35)
        {
            cout<<"pass"<<endl;
        }
        else{
            cout<<"Fail **"<<endl;
        }
    }
};

int main()
{
    Result r;
    r.get_Student();
    r.get_Info();
    r.mark();
    r.set_Student();
    r.set_Info();
    r.Remark();
    return 0;
}