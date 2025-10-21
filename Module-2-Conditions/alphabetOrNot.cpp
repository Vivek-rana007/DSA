#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int x = (int)ch;
    if(x>=65 && x<123 || x>=65 && x<91){
        cout<<"This is an alphabet";
    }
    else{
        cout<<"Not an alphabet";
    }
}