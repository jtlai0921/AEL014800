//4-2-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int money;
    cout<<"�п�J�ʶR���B:";
    cin>>money;                    // ��J�R�F�h�ֿ�
    if(money > 2000)               // �Y���B�j���d 
      money = money*7/10;          // ���C�� 
    cout<<"��ݥI"<<money<<endl;   
   
    return 0;
} 
