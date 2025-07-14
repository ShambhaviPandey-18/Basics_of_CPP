#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        { // spaces
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        { // stars
            cout << "*" ;
        }

        cout << endl;
    }

    return 0;
}