#include <iostream>
using namespace std;
int factorial(int);               //宣告自訂函式f
int main(void)
{
    int n;
    cout<<"Input n:";
    cin>>n;
    cout<<n<<"! = "<<factorial(n);
    return 0;     
}
int factorial(int n)
{
  int i,fac=1;
  for(i=1;i<=n;i++)
    fac = fac * i;      //非遞迴方式求n!計算程式
  return fac;
}

