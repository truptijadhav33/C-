#include<iostream>
using namespace std;

int main()
{
    int num , rem ,sum = 0;
    cout<<"Enter number :"<<endl;
    cin>>num;
    int n = num;
    while (n!=0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(sum == num)
    {
        cout<<"Number is armstrong"<<endl;
    }
    else{
        cout<<"number is not armstrong"<<endl;
    }
    return 0;
}