#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 5;
    int c = 3;
    cout << (a == c) << endl; // True
    cout << (a > b) << endl;  // False
    cout << (a < b) << endl;  // True
    cout << (a != b) << endl; // True

    return 0;
}