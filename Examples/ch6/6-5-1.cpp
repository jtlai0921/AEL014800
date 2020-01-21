#include <iostream>
using namespace std;
int factorial(int);         //宣告自訂函式f
int main(void)
{
    int n;
    cout<<"Input n:";
    cin>>n;
    cout<<n<<"! = "<<factorial(n); 
}
int factorial(int n)
{
  if(n==1)
    return 1;
  return n*factorial(n-1);   //此行敘述會再呼叫factorial函式一次
}
