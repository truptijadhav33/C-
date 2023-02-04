#include<iostream>
using namespace std;

int reverse(int num)
{
   static int rev = 0 , rem;
    if(num>0)
    {
        rem = num%10;
        rev = rev * 10 + rem;
        reverse(num/10);
    }
    return rev;
}

int main()
{
    int num ;
    cout<<"Enter number : "<<endl;
    cin>>num;
    cout<<"Reverse number : "<<reverse(num);
    return 0;
}