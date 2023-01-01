#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if(age<18){
        cout<<"you can't come to my party";
    }
    else{
        cout<<"you are welcome to my party.";
    }
    return 0;
}