#include <iostream>
using namespace std;
int main()
{
    // int age;
    // cout<<"Enter the age:";
    // cin>>age;
    // if(age>18){ //non-zero number is True and zero is false in if-else.
    //     cout<<"Can Vote"<<endl;

    // }
    // else if(age >= 45){
    //     cout<<"Contest for Elections";
    // }
    int percent;
    cout << "Enter the percentage:";
    cin >> percent;
    if (percent >= 90)
    {
        cout << "Grade:A" << endl;
    }
    else if (percent >= 80)
    {
        cout << "Grade:B" << endl;
    }
    else
    {
        cout << "Grade:C";
    }

    return 0;
}