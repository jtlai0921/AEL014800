#include <iostream>
#include "6-4-1-file2.cpp" //�ϥ����޸��Nfile2�ɧt�A�i�� 
using namespace std;
extern void f(int);           //�ŧi�ۭq�禡mul
int a;                 //�ŧi�����ܼ�a
int main(void)
{
    f(5);             //�I�s�禡f�ñN�^�ǭ��x�s�i�ܼ�a
    cout<<"a = "<<a<<endl;
    
}
