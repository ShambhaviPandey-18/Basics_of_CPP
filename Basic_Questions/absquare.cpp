#include<iostream>
using namespace std;

int abSquare(int a, int b){
    int square = a*a+b*b+2*a*b;
    cout<<"absquare :"<<square<<endl;
    return square ;
}
int main(){
    abSquare(2,3);
    return 0;
}