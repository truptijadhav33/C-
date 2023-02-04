#include<iostream>
using namespace std;

int main()
{
                        //    User defined data types are:
                        //          1. enum  (enumeration)
                        //          2. typedef
                        //          3. struct (structure)
        
        //enum e.g
        enum week{sunday , monday , tuesday , wednesday , thursday , friday , saturday};
        week day ;
        day = sunday;
        if(day==sunday)
        {
            cout<<"today is holiday..."<<endl;
        }
        else{
            cout<<"there is no holiday go to work.."<<endl;
        }
        return 0;
}