#include <iostream>
using namespace std;
void swap(int *,int *);
int main(void)
{
  int a=4,b=3;  //����ܼƪ���ȳ]�w
  swap(&a,&b);  //�N���з�@�޼ƨӶǻ��i�禡
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
