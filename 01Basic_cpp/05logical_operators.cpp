#include<iostream>
using namespace std;

int main()
{
                //  Logical operators:
                //          1. && AND operator
                //          2. || OR OPERATOR

    int a = 5;

    if(a>0 && a<10)         //And operator both conditions must be true
    {
        cout<<"value of a is between 1 and 10"<<endl;
    }

    if(a>0 || a==6)         //there is no must both conditions must be true
    {
        cout<<"a is an integer :"<<endl;
    }

    return 0;
}