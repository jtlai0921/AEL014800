//2-5-2.cpp
#include <iostream>
#define rate 0.0168  
using namespace std;

int main()
{
    //宣告整數myAccount
    int myAccount;      
    //印出指令
    cout<<"請輸入存款金額:";
    //將輸入的金額存入變數myAccount 
    cin>>myAccount;  
    //印出利率計算的結果
    cout<<"戶頭一利息:"<< myAccount*rate<<endl; 

    return 0;
}

