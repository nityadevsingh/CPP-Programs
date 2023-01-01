#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 67 , 89};
    //address of arrays are not like simple &i, they are like direct by pointers
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;

    return 0;
}