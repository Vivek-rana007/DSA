#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << min(i, j) << " ";
        }
        for(int j = n-1; j >= 1; j--) {
            cout << min(i, j) << " ";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            cout << min(i, j) << " ";
        }
        for(int j = n-1; j >= 1; j--) {
            cout << min(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
