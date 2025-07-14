#include <iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter the age:";
    cin>>age;
    if (age > 18)
    {
        /* code */
        cout << "Can Vote." << endl;
    }
    else
    {
        cout << "Cannot Vote." << endl;
    }
    return 0;
}