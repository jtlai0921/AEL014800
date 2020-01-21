/*計算圓面積程式*/
#include <iostream>
#define A(r) (double)(r)*(r)*3.1415 //定義巨集
using namespace std;
int main(void)
{
  int r;  
  cin>>r;  
  cout<<A(r)<<endl;  //根據讀入的半徑值來呼叫巨集
  return 0;
}
