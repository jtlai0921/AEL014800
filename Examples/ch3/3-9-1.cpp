/* 乘除運算程式 */
//3-9-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;      //讀入整數變數a,b
    cout<<"a * b = "<<a*b<<endl;    //印出相乘的結果
    cout<<"a / b = "<<(float)a/b<<endl; //將a/b的結果強制轉換為浮點數
    return 0;
}

