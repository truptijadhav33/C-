#include<iostream>
using namespace std;

void sum(int x , int y)
{
    cout<<x+y<<endl;
}
void sum(int x , float y)
{
    cout<<x+y<<endl;
}
void sum(float x , int y , double z)
{
    cout<<x+y+z<<endl;
}
int main()
{
    sum(3,6);
    sum(30,6.4f);
    sum(12.1f,89,12.90);
    return 0;
}