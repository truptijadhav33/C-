#include<iostream>
using namespace std;
                /*    inheritance
                    
                                    |class grandparent|
                                      /       \
                        |class  parent1|      |class parent2|
                                      \         /
                                    |class child|              */

class Student{
    public:
    int Roll_no;
    string name;
};

class Test: public Student
{
    public:
    int marks;
     void get_Student()
    {
        cout<<"\n\nEnter roll no : "<<endl;
        cin>>Roll_no;
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter marks in exam : "<<endl;
        cin>>marks;
    }

};
class sports:public Student
{
    public:
    int score;
    void get_score()
    {
        cout<<"Enter score in sports : "<<endl;
        cin>>score;
    }
};
class Result:public Test , public sports
{
    public:
    int total;
    void get_Result()
    {
        total = score + marks ;
        cout<<"Total is : "<<total<<endl;
    }
};

int main()
{
    Result r;
    r.get_Student();
    r.get_score();
    r.get_Result();
    return 0;
}
