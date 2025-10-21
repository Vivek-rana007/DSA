#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int i=m;i>=1;i--){
        int number =1;
        for(int j=1;j<=i;j++){
            cout<<number;
            number++;
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
            number++;
        }
        nsp+=2;
        for(int k=1;k<=i;k++){
            cout<<number;
            number++;
        }
        cout<<endl;
    }
}