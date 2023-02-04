#include<iostream>
using namespace std;

                //  Branching statements are :
                //      1.break
                //      2.continue
                //      3.goto

int main()
{
    //e.g of 'continue' statement

    int n , total = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter number :"<<endl;
        cin>>n;
        if(n>99){
            cout<<"number is greater than 99 enter below 100"<<endl;
            continue;
        }
        total = total+n;
    }
    cout<<"total= "<<total;         //prints the sum of entered 5 two digit number

    return 0;
}