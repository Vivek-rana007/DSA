#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=i-1;j>0;j--){
            cout<<" ";
        }
        for(k=i-1;k<n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}