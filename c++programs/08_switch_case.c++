#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    /*if(age<18){
        cout<<"you can't come to my party";
    }
    else{
        cout<<"you are welcome to my party.";
    }*/
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 22:
        cout<<"you are 22";
        break;
    case 2:
        cout<<"you are 2";
        break;
    
    default:
        cout<<"No special cases";
        break;
    }
    return 0;
}