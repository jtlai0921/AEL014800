#include <iostream>
using namespace std;
int add(int,int);
int main(void)
{
  int ans,(*p) (int x,int y); //�ŧi�禡����p�A�㦳��Ӿ�Ƥ޼�
  p = add;             //�Np���V�禡add
  ans = (*p) (3,4);      //�����I�sadd�禡
  cout<<ans<<endl;
  return 0;
}
int add(int x,int y)
{
  return x+y;
}
