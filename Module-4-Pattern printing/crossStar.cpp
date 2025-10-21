#include<iostream>
using namespace std;
int main(){
    int n;
    int x=1;
    cout<<"Enter the number : ";
    cin>>n;
    int y=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(x==j || y==j) cout<<"*";
            else cout<<" ";
        }
        x++;
        y--;
        cout<<endl;
    }
    
}