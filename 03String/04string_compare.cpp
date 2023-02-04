#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str1 = "Trupti";
    string str2 = "Jadhav";

    //compare the values of both string if it equal to 0 the true else false
    
    if(str1.compare(str2)==0)
    {
        cout<<"Both strings are equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }
    return 0;

}