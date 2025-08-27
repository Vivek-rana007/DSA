// 0 1 1 2 3 5 8 13 ....
#include<iostream>
using namespace std;
int main(){
    int n ,a=0 , b=1, c;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==1)
    {    cout<<0;
       return 0;
    }
     cout<<0<<" "<<1<<" ";
    for(int i=3;i<=n;i++){
        c=a+b;
        cout<<c<<"  ";
        a=b;
        b=c;
    }

}