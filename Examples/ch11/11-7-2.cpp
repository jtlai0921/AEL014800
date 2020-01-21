/* 學生成績系統程式 */
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
  cout<<"請輸入您的姓名:";
  cin>>s.name;
  cout<<"請輸入課程數目:";
  cin>>s.gd.co_num;
  for(i=0;i<s.gd.co_num;i++) {
    cout<<"請輸入第"<< i+1 << "個成績:";
    cin>>s.gd.g[i];
  }
  s.gd.average = 0;
  for(i=0;i<s.gd.co_num;i++) {
    s.gd.average += s.gd.g[i];
  }
  s.gd.average = s.gd.average/s.gd.co_num;
  cout<<s.name<<" 的平均成績為 "<<s.gd.average<<endl;                           
  return 0;
}
