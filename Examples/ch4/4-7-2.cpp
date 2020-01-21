/* 季節判斷程式 */
//4-7-2.cpp
#include <iostream>
using namespace std;
int main(void)
{
    int month;
    cout<<"請輸入月份：";
    cin>>month;
    if(month >= 1 && month <=3)           //判斷是否為1月到3月
      cout<<month<<" 月是春天"<<endl;
    else if(month <=6)                     //判斷是否為4月到6月
      cout<<month<<" 月是夏天"<<endl;
    else if(month <=9)                     //判斷是否為7月到9月
      cout<<month<<" 月是秋天"<<endl;
    else if(month <=12)                    //判斷是否為10月到12月
      cout<<month<<" 月是冬天"<<endl;
    else
      cout<<"不合法的月份"<<endl;

    return 0;
}
