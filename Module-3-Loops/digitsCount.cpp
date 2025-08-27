#include<iostream>
using namespace std;
int main(){
    int n , count = 0;
    cout<<"Enter a number : ";
    cin>>n;
    int a = n;
    for(;n>0;){
        count +=1;
        n/=10;
    }
    if(a==0) cout<<1;
    else cout<<count;
}