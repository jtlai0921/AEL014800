/*單位轉換程式 */
//4-7-1.cpp
#include <iostream>
using namespace std;
int main(void)
{
    char ch;        //宣告儲存使用者選擇的變數
    double input;    //宣告儲存使用者輸入的數字
    cout<<"您要轉換 1)公尺 -> 英呎 2)公斤 -> 英鎊"<<endl;
    cin>>ch;         /* 輸入選擇 */
    cout<<"請輸入預轉換的數字:"<<endl;
    cin>>input;       /* 輸入欲轉換的數 */
    if(ch == '1')      //轉換公尺
      cout<<input<<"公尺 = "<<input*3.28<<" 英呎"<<endl;
    else if(ch == '2')    //轉換公斤
      cout<<input<<"公斤 = "<<input*2.2<<" 英磅"<<endl;
    else 
    cout<<"沒有這個選項"<<endl;
    
    return 0;
}
