#include <iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
float divide(int,int);
int main(void)
{
    int a,b;
    char choice;
    cout<<"請輸入您的計算式：";
    cin>>a>>choice>>b;
    switch(choice) {
        case '+': cout<<a<<" + "<<b<<" = "<<add(a,b); break;
        case '-': cout<<a<<" - "<<b<<" = "<<sub(a,b); break;
        case '*': cout<<a<<" * "<<b<<" = "<<mul(a,b); break;
        case '/': cout<<a<<" / "<<b<<" = "<<divide(a,b); break;
        default: break;
      }
    return 0;
}
int add(int a,int b)
{
  return a+b;
}
int sub(int a,int b)
{
  return a-b;
}
int mul(int a,int b)
{
  return a*b;
}
float divide(int a,int b)
{
  return (float)a/b;
}
