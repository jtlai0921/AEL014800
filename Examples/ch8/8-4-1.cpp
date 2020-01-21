#include <iostream>
using namespace std;
void vset(int,int);
void rset(int*,int);
int main(void)
{
  int x=0,*p;           //宣告變數x及整數指標p
  p = &x;             //取得變數x的位址（將p指向x）
  vset(x,1);            
  cout<<"x = "<<x;
  rset(p,1);            //將指標當作引數來傳遞進函式
  cout<<"x = "<<x;
  return 0;
}
void vset(int x,int y)
{
  x = y;
}
void rset(int *p,int y)
{
  *p = y;              //間接存取變數x
}

