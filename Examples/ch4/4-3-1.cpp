//4-3-1.cpp
#include <iostream>
using namespace std;
int main()
{
    char rain;
    cout<<"今天降雨機率大於50%嗎?";
    cin>>rain;                              //儲存答案至字元型態變數rain
    if(rain == 'y' || rain =='Y')           //判斷輸入是否為y或是Y
      cout<<"你最好要帶傘"<<endl;            //輸入為Y或y的情況
    else                                   //當使用者沒有按下y或Y時，進入else敘述中
      cout<<"可能不會下雨，不必帶傘了!"<<endl;
      
    return 0;
}
