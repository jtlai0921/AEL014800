/*����ഫ�{�� */
//4-7-1.cpp
#include <iostream>
using namespace std;
int main(void)
{
    char ch;        //�ŧi�x�s�ϥΪ̿�ܪ��ܼ�
    double input;    //�ŧi�x�s�ϥΪ̿�J���Ʀr
    cout<<"�z�n�ഫ 1)���� -> �^�` 2)���� -> �^��"<<endl;
    cin>>ch;         /* ��J��� */
    cout<<"�п�J�w�ഫ���Ʀr:"<<endl;
    cin>>input;       /* ��J���ഫ���� */
    if(ch == '1')      //�ഫ����
      cout<<input<<"���� = "<<input*3.28<<" �^�`"<<endl;
    else if(ch == '2')    //�ഫ����
      cout<<input<<"���� = "<<input*2.2<<" �^�S"<<endl;
    else 
    cout<<"�S���o�ӿﶵ"<<endl;
    
    return 0;
}
