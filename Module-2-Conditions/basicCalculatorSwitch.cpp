#include<iostream>
using namespace std;
int main(){
    int a, b;
    char opt;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter the operator : ";
    cin>>opt;
    switch(opt){
        case('+'):
            cout<<a+b;
            break;
        case('-'):
            cout<<a-b;
            break;
        case('*'):
            cout<<a*b;
            break;
        case('/'):
            cout<<a/b;
            break;  
        default:
            cout<<"Invalid operator";
    }
}