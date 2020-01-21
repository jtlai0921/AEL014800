/*多段式百貨公司程式 */
//4-7-4.cpp
#include <iostream>
using namespace std;
int main(void)
{
    int money;
    cin>>money;     /* 輸入買了多少錢*/
    if(money > 10000)
      money = money*55/100;
    else if(money > 5000)
      money = money*6/10;
    else if(money > 2000)
      money = money*7/10;
    cout<<"實需付 "<<money<<endl;

    return 0;
}
