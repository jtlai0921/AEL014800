#include <iostream>
using namespace std;
int f(int,int);               //�p���ƪ�����
int main(void)
{
    int x,n;
    cout<<"�p��x��n����, �п�Jx & n:";
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

