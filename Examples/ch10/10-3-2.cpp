/* 計算圓周長、圓面積、圓球面積程式 */
#include <iostream>
#define round
#define volume
#define R(r) (double)2*(r)*3.1415
#define A(r) (double)(r)*(r)*3.1415
#define V(r) (double)4/3*(r)*(r)*(r)*3.1415
using namespace std;
int main(void)
{
  int r;  
  cin>>r;  
#if defined round
  cout<<R(r)<<endl;
#endif
#if defined area
  cout<<A(r)<<endl;
#endif
#if defined volume
  cout<<V(r)<<endl;
#endif    
  return 0;
}
