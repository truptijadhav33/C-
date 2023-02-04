#include<iostream>
using namespace std;

int main()
{
    int num[5] = {34,56,78,89,12};
    int *ptr = num;

    //num[0]
    cout<<*ptr<<endl;  
    //num[1]
    cout<<*(++ptr)<<endl;    //address of num is increase by 4 because, size of int 4 byte i.e num[1]
    //num[0]
    cout<<*(--ptr)<<endl; //address of num is decrease by 4 because, size of int 4 byte i.e num[2]
    
    return 0;
}