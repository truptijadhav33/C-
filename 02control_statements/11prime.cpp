#include<iostream>
using namespace std;

int main()
{
    int num , flag = 0 , i = 2;
    cout<<"Enter number : "<<endl;
    cin>>num;
    while(i<num)
    {
        if((num%i) == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1)
    {
        cout<<"Number is not prime"<<endl;
    }
    else{
        cout<<"Number is prime"<<endl;
    }
    return 0;
}