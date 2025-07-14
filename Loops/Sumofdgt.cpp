#include<iostream>
using namespace std;

int digits(int n){
    int res=0;
    while(n>0){
        res+=n%10;
        n=n/10;
    }
    cout<<res<<endl;
    return res;
}
int main(){
    digits(21);
    return 0;
}