#include<iostream>
using namespace std;

int main()
{
    int num = 33;
    int *ptr = &num;

    cout<<ptr<<endl;    //print address of variable num
    cout<<*ptr<<endl;    //print value at address of num
    cout<<&ptr<<endl;         //prints address of 'ptr'
    return 0;
}