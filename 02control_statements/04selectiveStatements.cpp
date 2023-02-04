#include<iostream>
using namespace std;

                // selective statements are:
                //  1. if else
                //  2. switch case

int main()
{
    int a ,b , ch ;
    
    cout<<"1.Add\n2.sub\n3.Div\n4.Mul"<<endl;

    cout<<"Enter your choice :"<<endl;
    cin>>ch;

    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;

    switch (ch)
    {
    case 1:
    cout<<"Addition: "<<a+b<<endl;
        break;
    case 2:
    cout<<"Subtraction: "<<a-b<<endl;
        break;
    case 3:
    cout<<"Division: "<<a/b<<endl;
        break;
    case 4:
    cout<<"Multiplication: "<<a*b<<endl;
        break;
    default:
    cout<<"Invalid choice"<<endl;
        break;
    }

    return 0;
}