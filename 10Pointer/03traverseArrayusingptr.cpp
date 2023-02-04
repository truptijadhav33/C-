#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {23,56,78,12,43};
    int *ptr = arr;
    for(int i=0 ; i < 5 ; i++)
    {
        cout<<*(ptr+i)<<endl;
    }
return 0;
}