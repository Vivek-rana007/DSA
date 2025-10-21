#include<iostream>
using namespace std;
int main(){
    // 1st method
    // Main concept is ki tumhe odd number pr pattern print krna aana chaiye
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // fpr spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // for pattern/stars
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

}