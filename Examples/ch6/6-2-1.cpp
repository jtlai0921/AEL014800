#include <iostream>
using namespace std;
int f(int,int);               //計算整數的次方
int main(void)
{
    int x,n;
    cout<<"計算x的n次方, 請輸入x & n:";
    cin>>x>>n;
    cout<<x<<"^"<<n<<" = "<<f(x,n);
	return 0;
}
int f(int x,int n)
{
    int i,k;
    k = x;
    for(i=1;i<n;i++)
      x = x*k;
    return x;
}

