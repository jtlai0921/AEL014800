#include <iostream>
using namespace std;
void swap(int *,int *);
int main(void)
{
  int a=4,b=3;  //整數變數的初值設定
  swap(&a,&b);  //將指標當作引數來傳遞進函式
  cout<<"a = "<<a<<"  b= "<<b<<endl;
  return 0;
}
void swap(int *x,int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
