#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;

    int largest = (a>=b)?a:b;
    cout<<"Largest is:"<<largest<<endl;
    return 0;
}