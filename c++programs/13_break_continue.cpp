#include <iostream>
using namespace std;

int main()
{// break : it breaks the loop for a given condition
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==2){
    //         break;
    //     }
    // }
    //continue : it skips that condition command and executes next command.
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(i==2)
        {continue;
            /* code */
        }
        cout<<i<<endl;
        
    }
    
    
    return 0;
}