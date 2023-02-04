#include<iostream>
using namespace std;

int sum(int arr[] , int n )
{
    int s = 0;
    for(int i = 0 ; i < n ; i++)
    {
        s += arr[i];
    }
    return s;
}

int main()
{
    int arr[4] , key;
    cout<<"Enter array elements :"<<endl;
     for(int i = 0 ; i < 4 ; i++)
     {
        cin>>arr[i];
     }
     cout<<"sum of array element are :"<<sum(arr , 4)<<endl;
    return 0;
}