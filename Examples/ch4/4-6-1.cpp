//4-6-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int a,b;          //�Ψ��x�s�ϥΪ̿�J���ƭ� 
    char oper;        //�ΨӦs�ϥΪ̿�J���p��l+ - * / 
    cout<<"�п�J + - * / ���G���p�⦡�G ";
    cin>>a>>oper>>b;
    switch(oper)    //�Q��switch�P�_�p��l��+-*/�����@�� 
    {
      case '+':      //�Y�p��l��+ 
        cout<<"�p�⵲�G��"<<a+b<<endl;
        break;
      case '-':      //�Y�p��l��-            
        cout<<"�p�⵲�G��"<<a-b<<endl;
        break;
      case '*':       //�Y�p��l��*                  
        cout<<"�p�⵲�G��"<<a*b<<endl;
        break;
      case '/':       //�Y�p��l��/                   
        cout<<"�p�⵲�G��"<<(float)a/b<<endl; //���B�j���ഫ�κA���B�I�� 
        break;
      default:        //�Y�p��l����+-*/���䤤�@��                        
        cout<<"��J���|�h�B��榡���~"<<endl;
    }

    return 0;
} 
