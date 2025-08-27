// 1-2+3-4+5-6.....upto n
#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    // for(int i =0;i<=n;i++){
    //     if(i%2==0){
    //         sum -= i;
    //     }
    //     else{
    //         sum += i;
    //     }
    // }
    // cout<<sum;

    // 2nd method , we can make the pairs and then calculate
    if(n%2==0) cout<< -n/2;
    else cout<< -n/2 + n;
}