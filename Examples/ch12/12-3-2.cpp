/*�n�ͦW��{��*/
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
    cout<<"�аݱz�n 1)��X�n�ͦW�� 2)�s�W�n�͸�� :";
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
    cout<<"�ɮ׶}�ҿ��~!";
    return ;
  }
  while(!myfile.eof()) {
    myfile>>f.name>>f.phone>>f.birth;     
    if(!myfile.eof()) {
        cout<<"=============================="<<endl;                  
        cout<<f.name<<" ���q��: "<<f.phone<<endl;
        cout<<f.name<<" ���ͤ�: "<<f.birth<<endl;
    }
  }
  cout<<"=============================="<<endl;
  myfile.close();
}
void enter(string filename)
{
  FRIEND newfriend;
  ofstream myfile(filename.c_str(),ios::app);
  cout<<"�п�J�W��:";
  cin>>newfriend.name;
  myfile<<newfriend.name<<" ";
  cout<<"�п�J�q�ܸ��X:";
  cin>>newfriend.phone;
  myfile<<newfriend.phone<<" ";
  cout<<"�п�J�ͤ�:";
  cin>>newfriend.birth;
  myfile<<newfriend.birth<<endl;
  myfile.close();
}
