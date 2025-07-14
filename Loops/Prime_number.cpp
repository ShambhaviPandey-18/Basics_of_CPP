#include<iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    if (n <= 1) {
        cout << "The number is neither Prime nor Composite" << endl;
        return 0;
    }

    bool isPrime = true;
    for (i = 2; i * i <= n; i++) { // Optimized loop condition
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime==true) {
        cout << "The number is Prime" << endl;
    } else {
        cout << "The number is Composite" << endl;
    }

    return 0;
}
