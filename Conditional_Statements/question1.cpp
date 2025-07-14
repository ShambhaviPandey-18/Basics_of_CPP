#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num>0){
        cout<<"The number is Positive.";
    }
    else if (num==0)
    {
        cout<<"The number is equals to 0.";
    }
    else{
        cout<<"The number is Negative.";
    }
    return 0;
}