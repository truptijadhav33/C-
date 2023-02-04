#include<iostream>
using namespace std;

 static int count = 0;  

void count_fun()
{
    count++;
    cout<<count<<endl;
}
int main()
{
    count_fun();
    count_fun();
    count_fun();
    count_fun();
    return 0;
}