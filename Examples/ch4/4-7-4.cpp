/*�h�q���ʳf���q�{�� */
//4-7-4.cpp
#include <iostream>
using namespace std;
int main(void)
{
    int money;
    cin>>money;     /* ��J�R�F�h�ֿ�*/
    if(money > 10000)
      money = money*55/100;
    else if(money > 5000)
      money = money*6/10;
    else if(money > 2000)
      money = money*7/10;
    cout<<"��ݥI "<<money<<endl;

    return 0;
}
