#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //No of stars wala concept that 
    // row no. + no. of stars = n+1
    // no. of stars = n+1-i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}