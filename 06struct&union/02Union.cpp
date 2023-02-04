#include<iostream>
using namespace std;

//union can contain many different data types
//it is same as structure only difference in memory allocation

union Student{

 char Grade;
};

int main()
{
    union Student s;
    s.Grade = 'A';
    cout<<"Grade : "<<s.Grade<<endl;

    return 0;
}