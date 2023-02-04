#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1 = 3 , n2 = 6 ;
    cout<<"Before swaping :"<<endl;
    cout<<"n1 = "<<n1<<"\nn2= "<<n2<<endl;

    swap(&n1,&n2);

    cout<<"After swaping :"<<endl;
    cout<<"n1 = "<<n1<<"\nn2= "<<n2<<endl;

return 0;
}