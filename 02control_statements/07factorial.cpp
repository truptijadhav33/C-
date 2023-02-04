#include<iostream>
using namespace std;

int main()
{

 //factorial 5 = 5*4*3*2*1 (product of positive integer that are less than equals to n)

    int fact = 1 , n ;

    cout<<"Enter number :"<<endl;
    cin>>n;

    for(int i = 1 ; i <= n ; i++)
    {
        fact = fact * i;
    }

    cout<<"Factorial = "<<fact;
    
    return 0;
}