//購物計費程式
//4-7-3.cpp
#include <iostream>
using namespace std;
int main(void)
{
    int m,a1,a2,a3,total;  //宣告5個整數變數
    cin>>m>>a1>>a2>>a3;  //輸入所攜錢數及商品個數
    total=a1*199+a2*23+a3*85;  //計算購買的商品總價
    if(total<=m)   //判斷是否有足夠的錢數
      cout<<"剩下 "<<m-total<< "元"<<endl;  //所需錢<=擁有錢
    else 
      cout<<"還差 "<<total-m<< "元"<<endl;  //所需錢 > 擁有錢

    return 0;
}
