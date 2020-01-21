/*九九乘法表*/
//5-6-4.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,j;
    for(i=1;i<10;i++) {    //外迴圈，將被乘數每次遞增1
      for(j=1;j<10;j++)    //內迴圈，將乘數每次遞增1
        cout<<i<<"*"<<j<<"="<<i*j<<" ";  //計算並印出99乘法表的值
      cout<<endl;  //印完一列後換行
    }

    return 0;
}
