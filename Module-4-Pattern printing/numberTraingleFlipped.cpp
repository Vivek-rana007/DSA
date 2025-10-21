#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=n;i>0;i--){
        // for spaces
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        // for numbers
        int number =1;
        for(k=n;k>i-1;k--){
            cout<<number;
            number++;
        }
        cout<<endl;
    }
}