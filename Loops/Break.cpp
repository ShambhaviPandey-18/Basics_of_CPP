//WAP where user will keep entering numbers until they enter a multiple of 10.

#include<iostream>
using namespace std;
int main(){
    int n;
     do{
        cout<<"Enter number : ";
        cin>>n;
        if(n%10==0){
            break;
        }
        cout<<"You have entered "<<n<<endl;
     }while(true);
        return 0;
     

}