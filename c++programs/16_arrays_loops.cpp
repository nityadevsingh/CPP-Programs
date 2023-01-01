#include <iostream>
using namespace std;

int main()
{   
    int a=0;

    int marks[4] = {23, 45, 34, 12};

    // for ( int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    // while (a<4)
    // {
    //     cout<<marks[a]<<endl;
    //     a++;
    // }
    do
    {
        cout<<marks[a]<<endl;
        a++;
    } while (a<4);
    
    
    
    return 0;
}