#include <iostream>
using namespace std;
int main()
{
    bool isAdult;
    int age;
    cout << "Enter Age:";
    cin >> age;
    // if (age >= 18)
    // {
    //     isAdult = true;
    // }
    // else
    // {
    //     isAdult = false;
    // }
    isAdult = (age >= 18) ? "The Person is Adult." : "The Person is not an Adult.";
    return 0;
}