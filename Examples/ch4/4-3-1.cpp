//4-3-1.cpp
#include <iostream>
using namespace std;
int main()
{
    char rain;
    cout<<"���ѭ��B���v�j��50%��?";
    cin>>rain;                              //�x�s���צܦr�����A�ܼ�rain
    if(rain == 'y' || rain =='Y')           //�P�_��J�O�_��y�άOY
      cout<<"�A�̦n�n�a��"<<endl;            //��J��Y��y�����p
    else                                   //��ϥΪ̨S�����Uy��Y�ɡA�i�Jelse�ԭz��
      cout<<"�i�ण�|�U�B�A�����a�ʤF!"<<endl;
      
    return 0;
}
