#include <iostream>
using namespace std;
int C(int,int);               //�p��զX��
int main(void)
{
    int  n,r;
    cout<<"�p��զX��C, �п�Jn,r:";
    cin>>n>>r;
    cout<<"C("<<n<<","<<r<<") = "<<C(n,r);
    return 0;
}
int C(int n,int r)
{
    if(n < r || r<0 )  //n�����j��r�Ar�����j�󵥩�0
      return -1;
    if(n == r || r==0)     //���ۦP�ƥػP��0�ت���k���u���@��
      return 1;
    return C(n-1,r) + C(n-1,r-1); //�զX����
}	



