#include<iostream>
using namespace std;
int main(){
    float C_pencil;
    float C_pen;
    float C_eraser;
    float Total_cost;
    float Total_costGST;
    cout<<"Enter the cost of the pencil:";
    cin>>C_pencil;
    cout<<"Enter the cost of the pen:";
    cin>>C_pen;
    cout<<"Enter the cost of the eraser:";
    cin>>C_eraser;

    Total_cost = C_pencil+C_eraser+C_pen;
    Total_costGST = (Total_cost*18)/100 + Total_cost;
    cout<<"The total cost of your items is:"<<Total_costGST<<endl;


}