//3-7-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int chinese,english,math;
    float average;    //宣告average為浮點數變數
    cout<<"請輸入國文英文數學成績：";
    cin>>chinese>>english>>math;  //讀入各科成績
    average = (float)(chinese+english+math)/3;    //將分數加總後除以3
    cout<<"平均分數為： "<<average<<endl;
    
    return 0;
}
