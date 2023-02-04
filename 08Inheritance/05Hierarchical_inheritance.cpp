#include<iostream>
using namespace std;
                        //   Hierarchical inheritance

                //               | class   _____________________parent|

                //                  /            \..................\
               //                  /              \                  \
                //     |class  child 1|  |class child 2|..........|class child n|
                

class Staff
{
    protected:
    string name;
    int code;
};

class Teacher:public Staff{
    char sub;
    public:
    void read_T()
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter code : "<<endl;
        cin>>code;
        cout<<"Enter sub:"<<endl;
        cin>>sub;
    }

    void display_T()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"code : "<<code<<endl;
        cout<<"sub : "<<sub<<endl;
    }

};

class Officer: public Staff
{
    string dept;
    char grade;
    public:
    void read_O()
    {
        cout<<"Enter Name : "<<endl;
        cin>>name;
        cout<<"Enter code : "<<endl;
        cin>>code;
        cout<<"Enter Department :"<<endl;
        cin>>dept;
        cout<<"Enter grade : "<<endl;
        cin>>grade;
    }
    void display_O()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Code : "<<code<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Grade : "<<grade<<endl;
    }
};

int main()
{
    Teacher t;
    Officer o;
    int ch;
    cout<<"\n1.Teacher\n2.Officer"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>ch;
    if(ch==1)
    {
        t.read_T();
        t.display_T();
    }
    else if(ch==2)
    {
        o.read_O();
        o.display_O();
    }
    else{
        cout<<"Invalid choice*******"<<endl;
    }

    return 0;

}