/*�p���ƪ��̤j���]�Ƥγ̤p������*/
//5-6-5.cpp
#include <iostream>
using namespace std;
int main ()
{
	int a,b,i,M=0,m=0;
    cout<<"�п�J��ӥ���ơG";
    cin>>a>>b;     /*��J����*/
    for(i=1;i<a && i<b;i++) {         
      if(!(a%i) && !(b%i)) /*�Ya,b�i�Qi�㰣�Ai��a,b�����]��*/
        M = i;
    }
    cout<<a<<" �M "<<b<<" ���̤j���]�� "<<M<<endl;
    if(a<b) i=a;
    else i=b;
    while(1) { 
      if(!(i%a) && !(i%b)) {   /*�Yi�i�㰣a,b�Ai��a,b������*/
        m = i;
        break;            /*�Ĥ@�ӥX�{���N�O�̤p������*/
      }
      i++;
    }
    cout<<a<<" �M "<<b<<" ���̤p������ "<<m<<endl;
	return 0;
}
