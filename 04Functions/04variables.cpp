#include<iostream>
using namespace std;

                //types of variable are:

                        //1. static variables(static is a keyword (memory for static variable is allocate only once in program))

                        //2.local variables(which is declared inside the function)

                        //3.global variables(which is declared outside the function)

int num1 = 6 ;  //global variable accessible for all functions in program

int main()
{
    int num1 = 7;

    //local variable scope is only for that function only

cout<<"local = "<<num1<<endl;

   //(::) scope resolution operator used to access variables which is out of the scope
   
 cout<<"Global = "<<::num1<<endl;

return 0;
}
