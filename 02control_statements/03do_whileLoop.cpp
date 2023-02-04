#include<iostream>
using namespace std;
                        //do while loop is exit control
                        //Execute the loop once when condition is false
int main()
{

    int n=10;

    do{
        cout<<n<<endl;
        n--;            // '--' is decrement operator decrease the value by one
    }while(n!=0);

    return 0;
}