// Basic Syntax of program
#include <iostream>
using namespace std;
int main(){
    cout<<"Hello World";
    // Initialization
    int x;
    // Declaration
    x = 5;
    cout<<endl<<x;
    int y = 2;
    cout<<endl<<y;
    //Arithmetic Operations
    cout<<endl<<x+y;
    cout<<endl<<x-y;
    cout<<endl<<x*y;
    cout<<endl<<x/y;
    //Increment
    x++;
    y++;
    cout<<endl<<x;
    cout<<endl<<y;
    //Decrement
    x--;
    y--;
    cout<<endl<<x;
    cout<<endl<<y;
    //Float data type
    float a = 5;
    float b = 2;
    cout<<endl<<a+b;
    cout<<endl<<a-b;
    cout<<endl<<a*b;
    cout<<endl<<a/b;
    // Important
    cout<<77.0;
    // Output will be 77
    cout<<x<<endl<<y;
    // Modulus Operator
    cout<<endl<<x%y; //gives remainder when a is divided by b
    return 0;
}