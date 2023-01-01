#include <iostream>
using namespace std;

int main()
{
    int a;
    int i=0;
    cout<<"ENTER THE DESIRED NUMBER FOR TABLE\n";
    cin>>a;
    cout<<"**** MULTIPLICATION TABLE OF "<<a<<" ******\n";
    do
    {
        cout<<"\t"<<a<<" x "<<i+1<<" = "<<a*(i+1)<<"\n";
        i++;
    } while (i<10);
    
    return 0;
}