#include<iostream>
using namespace std;

int main()
{
    int arr[4]={34,89,12,9};
    int min = arr[0];
    int max = arr[0];
    for(int i = 0 ; i < 4 ; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"Minimum element is : "<<min<<endl;
    cout<<"Maximum element is : "<<max<<endl;
    return 0;
}