/* �u�`�P�_�{�� */
//4-7-2.cpp
#include <iostream>
using namespace std;
int main(void)
{
    int month;
    cout<<"�п�J����G";
    cin>>month;
    if(month >= 1 && month <=3)           //�P�_�O�_��1���3��
      cout<<month<<" ��O�K��"<<endl;
    else if(month <=6)                     //�P�_�O�_��4���6��
      cout<<month<<" ��O�L��"<<endl;
    else if(month <=9)                     //�P�_�O�_��7���9��
      cout<<month<<" ��O���"<<endl;
    else if(month <=12)                    //�P�_�O�_��10���12��
      cout<<month<<" ��O�V��"<<endl;
    else
      cout<<"���X�k�����"<<endl;

    return 0;
}
