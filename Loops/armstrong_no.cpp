#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a 3-digit number :";
    cin >> n;
    int num = n;
    int cubeSum = 0;

    while (num > 0)
    {
        int lstdgt = num % 10;
        cubeSum += lstdgt * lstdgt * lstdgt;
        num /= 10;
    }
    if (n == cubeSum)
    {
        cout << n << " is an Armstrong number" << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number" << endl;
    }
}