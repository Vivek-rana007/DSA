#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int number =n;
    //row ke liye loop
    for(int i=1;i<=2*n-1;i++){
        if(i<n){
            cout<<number;
            number--;
        }
        else{
            cout<<number;
            number++;
        }
    }
}