#include<iostream>
using namespace std;
int main(){
    int n,a =1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<a<<endl;
        a = a *2;
    }
}