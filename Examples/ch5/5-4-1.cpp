/*�L�X�϶����Ҧ�3������*/
//5-4-1.cpp
#include <iostream>
using namespace std;
int main ()
{
	int a,b,i;
    cin>>a>>b; //��J�_�l�ȻP�פ��
    for(i=a;i<=b;i++)
    {
      if (i%3!=0)  //��i�Ȥ���3������
        continue;
      cout<<i<<" ";   //�L�X��3�����Ƥ�i��
    }
 
    return 0;
}
