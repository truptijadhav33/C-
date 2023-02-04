#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str1 = "Trupti";
    string str2 = "Jadhav";
    cout<<"Before swaping :"<<endl;
    cout<<"str1 = "<<str1<<"\nstr2 = "<<str2<<endl;

    str1.swap(str2);    // swap function interchanges the values of two string variable

    cout<<"After swaping :"<<endl;
    cout<<"str1 = "<<str1<<"\nstr2 = "<<str2<<endl;
    return 0;
}