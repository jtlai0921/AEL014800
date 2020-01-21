/* 好友名單程式 */
#include <iostream>
#include <string>
#include <stdio.h>  //含括stdin、fflush與fflush函式 
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
    cout<<"請問您要 1)輸出好友名單 2)新增好友資料 0)離開:";
    cin>>ch;
    if(ch == '1') {
      if(now != 0) 
        show(f,now);
      else
        cout<<"目前尚無資料";
    } 
    else if(ch =='2') {
      if(now>=20)
        cout<<"名單已滿!";
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
    cout<<f[i].name<<" 的電話: "<<f[i].phone<<endl;
    cout<<f[i].name<<" 的生日: "<<f[i].birth<<endl;
  }
  cout<<"=============================="<<endl;
}
FRIEND enter(void)
{
  FRIEND newFriend;
  cout<<"請輸入名稱:";
  cin>>newFriend.name;
  cout<<"請輸入電話號碼:";
  cin>>newFriend.phone;
  cout<<"請輸入生日:";
  cin>>newFriend.birth;
  return newFriend;
}
