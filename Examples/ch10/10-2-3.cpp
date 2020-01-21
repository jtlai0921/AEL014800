/* 四則運算計算機程式 */
#include <iostream>
#define add(x,y)      ((x)+(y))
#define minus(x,y)    ((x)-(y))
#define multiply(x,y) ((x)*(y))
#define divide(x,y)   ((double)(x)/(y))
using namespace std;
int main(void)
{
    int a,b;
    char choice;
    cout<<"請輸入您的計算式：";
    cin>>a>>choice>>b;
    switch(choice) {
        case '+': cout<<a<<"+"<<b<<"="<<add(a,b); break;
        case '-': cout<<a<<"-"<<b<<"="<<minus(a,b); break;
        case '*': cout<<a<<"*"<<b<<"="<<multiply(a,b); break;
        case '/': cout<<a<<"/"<<b<<"="<<divide(a,b); break;
        default: break;
      }
    return 0;
}
