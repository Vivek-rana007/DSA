// to calculate a raise to the power b
#include<iostream>
using namespace std;
int main(){
    int a,b,power = 1;
    cout<<"Enter the base number : ";
    cin>>a;
    cout<<"Enter the exponent number : ";
    cin>>b;
    bool flag = true;
    if(a==0 && b==0){
        cout<<"Indeterminate form";
        return 0;
    }
    if(b<0){
        flag = false;
        b = -b;
    }
    for(int i =1;i<=b;i++){
        power = power * a ;
    }
    if(flag==false)
    cout<<"The value is : "<<(float)1/power;
    else        
    cout<<"The value is : "<<power;
}