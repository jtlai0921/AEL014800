//4-2-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int money;
    cout<<"請輸入購買金額:";
    cin>>money;                    // 輸入買了多少錢
    if(money > 2000)               // 若金額大於兩千 
      money = money*7/10;          // 打七折 
    cout<<"實需付"<<money<<endl;   
   
    return 0;
} 
