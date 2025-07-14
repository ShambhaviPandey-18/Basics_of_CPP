#include<iostream>
using namespace std;

int reverse(int n){
    int result=0;
    while(n>0){
        int lastdgt = n%10;
        result = result*10 +lastdgt;
        n=n/10;
    }
    return result;
}

int palindrome(int num){
   int revnum = reverse(num);
   cout<<"It is a palindrome"<<endl;
   return num == revnum;
}
int main(){
    palindrome(121);
    return 0;
}