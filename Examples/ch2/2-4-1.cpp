//2-4-1.cpp
#include <iostream>
#define rate 0.0168
using namespace std;

int main()
{
    //�ŧi���myAccount1�A�ñN��ȳ]��1500
	int myAccount1=1500;     
	//�ŧi����ܼ�myAccount2�A�ñN���ȳ]��25000
    int myAccount2=25000;     
	//�L�X�Q�v�p�⪺���G
    cout<<"���Y�@�Q��:"<< myAccount1 * rate <<endl;
	cout<<"���Y�G�Q��:"<< myAccount2 * rate <<endl;

    return 0;
}
