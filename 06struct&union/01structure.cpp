#include<iostream>
using namespace std;

//structure can contain many different data types

struct Student{

    int Roll_no;
    char name[20];
};

int main()
{
    struct Student s1[5];

    cout<<"Enter roll no and name for 5 student's : "<<endl;

    for(int i = 1 ; i<=5 ; i++)
    {
    cout<<"Enter Roll_no for "<<i<<" student"<<endl;
    cin>>s1[i].Roll_no;
    cout<<"Enter name for "<<i<<" student"<<endl;
    cin>>s1[i].name;
    }

cout<<"Entered data is : "<<endl;

    for(int i = 1 ; i<=5 ; i++)
    {
        cout<<i<<".Roll_no :"<<s1[i].Roll_no<<endl;
        cout<<i<<".name :"<<s1[i].name<<endl;
        
    }

    return 0;
}