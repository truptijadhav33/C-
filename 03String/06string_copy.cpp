#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20] ="Trupti Jadhav";
    char str1[20];
    strcpy(str1,str);     // copy the content from str to str1
    cout<<str1;
    return 0;
}