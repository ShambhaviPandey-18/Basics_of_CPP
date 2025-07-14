#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0){
        cout<<"The number is Even.";
    }
    else if(num == 0){
        cout<<"The number is Neutral.";
    }
    else{
        cout<<"The number is Odd.";
    }
    return 0;

}