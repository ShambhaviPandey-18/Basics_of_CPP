//WAP to show the numbers entered by user except the multiples of 10.

#include<iostream>
using namespace std;
int main(){
    int n;
     do{
        cout<<"Enter number : ";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"You have entered "<<n<<endl;
     }while(true);
        return 0;
     

}