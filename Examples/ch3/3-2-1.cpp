//3-2-1.cpp
#include <iostream>
using namespace std;
int main()
{
    double C,F;                         //�ŧi��ӯB�I���ܼ� 
    
    cout<<"�п�J�ؤ�ū�:" ; 
    cin>>F;                             //�N�ϥΪ̿�J���Ʀr�s�J�ܼ�F 
    C=(F-32)*5/9;                       //�ϥΤ����ഫ�ū� 
    cout<<"�ؤ� "<<F<<" ���ର���ᬰ "<<C<<" ��"<<endl;   //�L�X���G 
    
    return 0;
}
