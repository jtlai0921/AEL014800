//4-6-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int a,b;          //用來儲存使用者輸入的數值 
    char oper;        //用來存使用者輸入的計算子+ - * / 
    cout<<"請輸入 + - * / 之二元計算式： ";
    cin>>a>>oper>>b;
    switch(oper)    //利用switch判斷計算子為+-*/中哪一項 
    {
      case '+':      //若計算子為+ 
        cout<<"計算結果為"<<a+b<<endl;
        break;
      case '-':      //若計算子為-            
        cout<<"計算結果為"<<a-b<<endl;
        break;
      case '*':       //若計算子為*                  
        cout<<"計算結果為"<<a*b<<endl;
        break;
      case '/':       //若計算子為/                   
        cout<<"計算結果為"<<(float)a/b<<endl; //此處強制轉換形態為浮點數 
        break;
      default:        //若計算子不為+-*/中其中一項                        
        cout<<"輸入的四則運算格式有誤"<<endl;
    }

    return 0;
} 
