#include <iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime = true;
    cout<<"Enter a number :";
    cin>>n;

    for(i=2;i<=n-1;i++){
        if(n%i==0){// i is a factor of n; i completely devides n;i is a factor of n.
            isPrime = false;
            break;
        }
    }
    
    if(isPrime == true){
        cout<<"The number is Prime"<<endl;
    }else{
        cout<<"The number is not Prime"<<endl;
    }
    return 0;
}