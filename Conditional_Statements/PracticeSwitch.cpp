#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    char op;
    cout << "Enter Operator(Among +,-,*,/) = ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "The Result is:" << a + b << endl;
        break;
    case '-':
        cout << "The Result is:" << a - b << endl;
        break;

    case '*':
        cout << "The Result is:" << a * b << endl;
        break;

    case '/':
        cout << "The Result is:" << a / b << endl;
        break;

    default:
        cout << "Invalid Key" << endl;
        break;
    }
    return 0;
}