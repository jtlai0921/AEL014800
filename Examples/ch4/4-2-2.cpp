/*遊樂園總票價計算程式*/
//4-2-2.cpp
#include <iostream>
using namespace std;
int main()
{
    int people, money;
    cout<<"請輸入購買人數:";
    cin>>people; 
    money=people*399;              // 輸入人數 
    if(people > 20)                // 若人數大於二十 
      money = money*8/10;          // 打八折 
    cout<<"總票價"<<money<<endl;   //印出計算結果
   
    return 0;
}
