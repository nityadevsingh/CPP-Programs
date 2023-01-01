#include <iostream>
using namespace std;

int main()
{
    // what is is a pointer? ---> data type which stores address of other data types

    int a = 3;
    int* b = &a;

    // & ----> (address of) operator
    cout<<"The adderss of a is "<<&a<<"\n";
    cout<<"The address of a is "<<b<<endl;

    //* -----> (The value of ) Derefrence operator
    cout<<"The value at the address is "<<*b<<endl;

    // pointer to pointer

    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address value_at(value_at_c) is "<<**c<<endl;

    return 0;
}