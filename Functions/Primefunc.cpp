#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=n-1;i++){
        if(n%2==0){
            return false;
        }
    }
    return true;
}

void allPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    allPrime(13);
    return 0;
}