#include <iostream>
using namespace std;
int add(int,int);
int main(void)
{
  int ans,(*p) (int x,int y); //宣告函式指標p，具有兩個整數引數
  p = add;             //將p指向函式add
  ans = (*p) (3,4);      //間接呼叫add函式
  cout<<ans<<endl;
  return 0;
}
int add(int x,int y)
{
  return x+y;
}
