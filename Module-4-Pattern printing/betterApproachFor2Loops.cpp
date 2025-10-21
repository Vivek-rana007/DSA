#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
for(int i=1;i<=n;i++){
    // for spaces --> kyuki hme aise krna hai ki agre i=1 hai to n-1 spaces hone chahiye
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    // for stars --> jo row number hai utne he stars print krne hai
    for(int k=1;k<=i;k++){
        cout<<k;
    }
    cout<<endl;
} 
}