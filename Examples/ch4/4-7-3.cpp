//�ʪ��p�O�{��
//4-7-3.cpp
#include <iostream>
using namespace std;
int main(void)
{
    int m,a1,a2,a3,total;  //�ŧi5�Ӿ���ܼ�
    cin>>m>>a1>>a2>>a3;  //��J������Ƥΰӫ~�Ӽ�
    total=a1*199+a2*23+a3*85;  //�p���ʶR���ӫ~�`��
    if(total<=m)   //�P�_�O�_������������
      cout<<"�ѤU "<<m-total<< "��"<<endl;  //�һݿ�<=�֦���
    else 
      cout<<"�ٮt "<<total-m<< "��"<<endl;  //�һݿ� > �֦���

    return 0;
}
