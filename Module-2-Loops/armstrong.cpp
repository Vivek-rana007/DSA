#include<iostream>
using namespace std;

int main() {
    for(int n=0; n<500; n++) {
        int temp = n;
        int sum = 0;   // reset sum for each number

        int t = temp; // copy for calculation
        while(t > 0) {
            int d = t % 10;
            sum += d*d*d;
            t /= 10;
        }

        if(sum == temp) {
            cout << temp << endl;
        }
    }
}
