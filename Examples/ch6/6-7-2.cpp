#include <iostream>
using namespace std;
int C(int,int);               //計算組合數
int main(void)
{
    int  n,r;
    cout<<"計算組合數C, 請輸入n,r:";
    cin>>n>>r;
    cout<<"C("<<n<<","<<r<<") = "<<C(n,r);
    return 0;
}
int C(int n,int r)
{
    if(n < r || r<0 )  //n必須大於r，r必須大於等於0
      return -1;
    if(n == r || r==0)     //取相同數目與取0種的方法都只有一個
      return 1;
    return C(n-1,r) + C(n-1,r-1); //組合公式
}	



