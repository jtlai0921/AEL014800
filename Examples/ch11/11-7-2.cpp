/* �ǥͦ��Z�t�ε{�� */
#include <iostream>
#include<string>
using namespace std;
typedef struct grade {
  int co_num;
  int g[10];
  double average;
} GD;
typedef struct student {
  string name;      
  GD gd;
} STU;
int main(void)
{
  int i;  
  STU s;
  cout<<"�п�J�z���m�W:";
  cin>>s.name;
  cout<<"�п�J�ҵ{�ƥ�:";
  cin>>s.gd.co_num;
  for(i=0;i<s.gd.co_num;i++) {
    cout<<"�п�J��"<< i+1 << "�Ӧ��Z:";
    cin>>s.gd.g[i];
  }
  s.gd.average = 0;
  for(i=0;i<s.gd.co_num;i++) {
    s.gd.average += s.gd.g[i];
  }
  s.gd.average = s.gd.average/s.gd.co_num;
  cout<<s.name<<" ���������Z�� "<<s.gd.average<<endl;                           
  return 0;
}
