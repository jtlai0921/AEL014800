//3-3-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int b=5;
    int c,d,e;

    c=(a==b);       //�ܼ�c���u(1)�A�]��a�Mb�۵�
	d=(a<b);        //�ܼ�d����(0)�A�]��a�Mb�۵�
	e=(c!=d);       //�ܼ�e���u(1)�A�]��c�Md�T�ꤣ�۵�
    cout<<"c="<<c<<endl ; 
	cout<<"d="<<d<<endl ;
	cout<<"e="<<e<<endl ;
        
    return 0;
}
