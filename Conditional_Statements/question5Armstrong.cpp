#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num; // 371

    int n = num; // Store the original number
    int dig1, dig2, dig3;

    dig1 = n % 10;  // Extract last digit
    n /= 10;        // Remove last digit

    dig2 = n % 10;  // Extract second last digit
    n /= 10;        // Remove second last digit

    dig3 = n % 10;  // Extract first digit

    int cubeSum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;

    if (num == cubeSum)
    {
        cout << "The number is an Armstrong Number." << endl;
    }
    else
    {
        cout << "The number is not an Armstrong Number." << endl;
    }

    return 0;
}
