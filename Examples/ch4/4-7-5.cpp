/*�r���P�_�{�� */
//4-7-5.cpp
#include <iostream>
using namespace std;
int main(void)
{
    char ch;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
      cout<<"��J�r�����p�g�r��\n";
    if(ch >= 'A' && ch <= 'Z')
      cout<<"��J�r�����j�g�r��\n";
    if(ch >= '0' && ch <='9')
      cout<<"��J�r�������ԧB�Ʀr\n";

    return 0;
}
