#include<iostream>
using namespace std;

            //e.g of goto statement
int main()
{
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;

    if((n%2)==0){
        goto even;
    }
    else{
        goto odd;
    }
even:       //label
    cout<<"Even number"<<endl;
    exit(0);

    odd:
    cout<<"odd number"<<endl;
return 0;
}