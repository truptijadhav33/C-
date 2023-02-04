#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter name :";
//    cin>>name;             //only one word is getting
    getline(cin,name);      //more than one word can get
    cout<<"Name = "<<name;
}
