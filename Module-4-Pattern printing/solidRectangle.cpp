#include<iostream>
using namespace std;
int main(){
    int row,stars;
    cout<<"Enter the number of row : ";
    cin>>row;
    cout<<"Enter the number of stars : ";
    cin>>stars;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=stars;j++){
            cout<<" *  ";
        }
        cout<<endl;
    }
}