#include <iostream>
using namespace std;
void vset(int,int);
void rset(int*,int);
int main(void)
{
  int x=0,*p;           //�ŧi�ܼ�x�ξ�ƫ���p
  p = &x;             //���o�ܼ�x����}�]�Np���Vx�^
  vset(x,1);            
  cout<<"x = "<<x;
  rset(p,1);            //�N���з�@�޼ƨӶǻ��i�禡
  cout<<"x = "<<x;
  return 0;
}
void vset(int x,int y)
{
  x = y;
}
void rset(int *p,int y)
{
  *p = y;              //�����s���ܼ�x
}

