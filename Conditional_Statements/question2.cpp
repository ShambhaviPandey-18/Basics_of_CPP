#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the Year = ";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " is a Leap Year.";
    }
    else if (year % 100 == 0)
    {
        cout << year << " is NOT a leap year." << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is Not a leap year";
    }

    return 0;
}