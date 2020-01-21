#include <iostream>
#include "6-4-1-file2.cpp" //使用雙引號將file2檔含括進來 
using namespace std;
extern void f(int);           //宣告自訂函式mul
int a;                 //宣告全域變數a
int main(void)
{
    f(5);             //呼叫函式f並將回傳值儲存進變數a
    cout<<"a = "<<a<<endl;
    
}
