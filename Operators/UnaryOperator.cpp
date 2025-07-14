#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int a = 5;
    n++;
    cout<<n<<endl; //11
    cout<<++n<<endl; //12
    cout<<n++<<endl; //12
    cout<<--a<<endl; //4
    cout<<a--<<endl; //4
    a--;
    cout<<a<<endl; //2
    return 0;
}