#include<iostream>
using namespace std;

int add(int a , int b)
{
    return a+b;
}

int sub(int a , int b)
{
    return a-b;
}

int mul(int a , int b)
{
    return a*b;
}
int divide(int a , int b)
{
    return a/b;
}

int mod(int a , int b)
{
    return a%b;
}

int main()
{
    int num1 ,num2;
    cout<<"add = "<<add(5,4)<<endl;
    cout<<"sub = "<<sub(5,4)<<endl;
    cout<<"mul = "<<mul(5,4)<<endl;
    cout<<"mod = "<<mod(5,4)<<endl;
    cout<<"division = "<<divide(5,4)<<endl;
return 0;
}