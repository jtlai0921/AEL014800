/* �n�ͦW��{�� */
#include <iostream>
#include <string>
#include <stdio.h>  //�t�Astdin�Bfflush�Pfflush�禡 
using namespace std;
struct FRIEND {
  string name;
  string phone;
  string birth;
} ;
void show(FRIEND [ ],int);
FRIEND enter(void);
int main(void)
{
  int now=0;  
  char ch;
  FRIEND f[20];
  while(1)
  {
    cout<<"�аݱz�n 1)��X�n�ͦW�� 2)�s�W�n�͸�� 0)���}:";
    cin>>ch;
    if(ch == '1') {
      if(now != 0) 
        show(f,now);
      else
        cout<<"�ثe�|�L���";
    } 
    else if(ch =='2') {
      if(now>=20)
        cout<<"�W��w��!";
      else {
        f[now] = enter( );
        now++;
      }
    }         
    else if(ch=='0')
      break;
    fflush(stdin);
  }
  return 0;
}
void show(FRIEND f[ ],int size)
{
  int i;
  for(i=0;i<size;i++) {
    cout<<"=============================="<<endl;                  
    cout<<f[i].name<<" ���q��: "<<f[i].phone<<endl;
    cout<<f[i].name<<" ���ͤ�: "<<f[i].birth<<endl;
  }
  cout<<"=============================="<<endl;
}
FRIEND enter(void)
{
  FRIEND newFriend;
  cout<<"�п�J�W��:";
  cin>>newFriend.name;
  cout<<"�п�J�q�ܸ��X:";
  cin>>newFriend.phone;
  cout<<"�п�J�ͤ�:";
  cin>>newFriend.birth;
  return newFriend;
}
