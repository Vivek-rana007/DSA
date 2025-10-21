#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an Integer : ";
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<<"Absolute Value : "<<n;
    return 0;

}