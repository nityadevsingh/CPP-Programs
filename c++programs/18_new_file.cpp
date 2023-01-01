#include <iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favchar;
    float salary;
}ep ;


int main()
{
    ep harry;
    harry.eID = 1;
    harry.favchar = 'c';
    harry.salary = 12343.56;
    cout<<"The value is "<<harry.salary<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.eID<<endl;
    return 0;
}