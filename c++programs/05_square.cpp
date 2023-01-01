#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}
void print_square(int x){
    cout<<"The square of "<<x <<" is "<< square(x)<<"\n";
}
int main(){
    int num1;
    cout<<"enter any number : \n";
    cin>>num1;
    print_square(num1);
}