#include<iostream>
using namespace std;
int main(){
    int number , a ;
    bool flag = true;
    cout<<"Enter the number : ";
    cin>>number;
    for(a=2;a<=number/2;a++){
        if(number%a==0){
            flag = false;
            break;
        }
    }
    if(number==1){
        cout<<number<<" is neither prime nor composite.";  
    }
    else if(flag){
        cout<<number<<" is a prime number.";
    }
    else{
        cout<<number<<" is a composite number.";
    }
}