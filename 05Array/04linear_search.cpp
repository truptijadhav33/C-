#include<iostream>
using namespace std;

int linear(int arr[] , int n , int key)
{
    
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == key)
        {
            return i;
            
        }
    }
    return -1;
}

int main()
{
    int arr[4] , key;
    cout<<"Enter array elements :"<<endl;
     for(int i = 0 ; i < 4 ; i++)
     {
        cin>>arr[i];
     }
     cout<<"Enter key element i will return you its index :"<<endl;
     cin>>key;
    int index = linear(arr , 4 , key);
    if(index == -1)
    {
        cout<<"Key not found "<<endl;
    }
    else
    {
    cout<<"Element found at "<<index<<" index"<<endl;
    }
    return 0;
}