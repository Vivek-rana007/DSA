#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // here we will use two variable
//     nsp --> that will print no.of spaces (first line mai space is n-1 and then nsp--)
//     nst --> that will print no. of stars (first line mai star is 1 so nst = 1 and then nst+=2)
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        // for spaces 
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        // for stars
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
    
}