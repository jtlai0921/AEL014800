/*好友名單程式*/
#include <iostream>
#include <string.h>
#include <fstream>
#define LIST "12-3-2.txt"
using namespace std;
typedef struct friends {
  string name;
  string phone;
  string birth;
}FRIEND;
void show(string);
void enter(string);
int main(void)
{
  char ch;
  while(1)
  {
    cout<<"請問您要 1)輸出好友名單 2)新增好友資料 :";
    cin>>ch;
    if(ch == '1')
        show(LIST);
    else if(ch =='2')
        enter(LIST); 
  }
 
  return 0;
}
void show(string filename)
{
  FRIEND f;
  ifstream myfile(filename.c_str());
  if(!myfile.is_open()) {
    cout<<"檔案開啟錯誤!";
    return ;
  }
  while(!myfile.eof()) {
    myfile>>f.name>>f.phone>>f.birth;     
    if(!myfile.eof()) {
        cout<<"=============================="<<endl;                  
        cout<<f.name<<" 的電話: "<<f.phone<<endl;
        cout<<f.name<<" 的生日: "<<f.birth<<endl;
    }
  }
  cout<<"=============================="<<endl;
  myfile.close();
}
void enter(string filename)
{
  FRIEND newfriend;
  ofstream myfile(filename.c_str(),ios::app);
  cout<<"請輸入名稱:";
  cin>>newfriend.name;
  myfile<<newfriend.name<<" ";
  cout<<"請輸入電話號碼:";
  cin>>newfriend.phone;
  myfile<<newfriend.phone<<" ";
  cout<<"請輸入生日:";
  cin>>newfriend.birth;
  myfile<<newfriend.birth<<endl;
  myfile.close();
}
