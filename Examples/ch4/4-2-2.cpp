/*�C�ֶ��`�����p��{��*/
//4-2-2.cpp
#include <iostream>
using namespace std;
int main()
{
    int people, money;
    cout<<"�п�J�ʶR�H��:";
    cin>>people; 
    money=people*399;              // ��J�H�� 
    if(people > 20)                // �Y�H�Ƥj��G�Q 
      money = money*8/10;          // ���K�� 
    cout<<"�`����"<<money<<endl;   //�L�X�p�⵲�G
   
    return 0;
}
