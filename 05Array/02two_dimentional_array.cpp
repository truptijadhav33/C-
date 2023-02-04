#include<iostream>
using namespace std;

int main()
{
    int arr[2][2] = { {34,89} , {12,9} };
    for(int i = 0 ; i < 2 ; i++)
    {
     for(int j=0 ; j < 2 ; j++)
     {
        cout<<arr[i][j]<<endl;
      }
    }
    return 0;
}