/* ���Z�϶��P�_�{�� */
//4-4-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int score;
    cout<<"�п�J�z�����Z�G";
    cin>>score;
    if(score >= 90)                 //�O�_��90���H�W
      cout<<"�z���ҵ�"<<endl;
    else if(score >= 80)             //�p��90��80�H�W
      cout<<"�z���A��"<<endl;
    else if(score >= 70)             //�p��80��70�H�W
      cout<<"�z������"<<endl;
    else if(score >= 60)             //�p��70��60�H�W
      cout<<"�z���B��"<<endl;
    else                         //�p��60��
      cout<<"�z������"<<endl;
    
    return 0;
} 
