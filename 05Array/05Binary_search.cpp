#include<iostream>
using namespace std;

int Binary(int arr[] , int start , int end , int key)
{
    int mid = (end + start)/2;
    while(start<end)
    {
    if(key == arr[mid])
    {
        return mid;
    }
    else
    if(key > arr[mid])
    {
        start = mid + 1;
        Binary(arr , start , end , key);
    }
    else
    {
        end = mid - 1;
        Binary(arr , start , end , key);
    }
    }
    return -1;
}

int main()
{
    int arr[4] , key;
    cout<<"Enter array elements in ascending or descending order :"<<endl;
     for(int i = 0 ; i<4 ; i++)
     {
        cin>>arr[i];
     }
     cout<<"Enter key element i will return you its index :"<<endl;
     cin>>key;
    int index = Binary(arr , 0 , 4 , key);
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