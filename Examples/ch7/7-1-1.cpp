#include <iostream>
using namespace std;
int main(void)
{
    int i,StuScore[10],total=0;             /* 宣告整數陣列 StuScore */
    for(i=0;i<10;i++) {
      cout<<"請輸入學生"<<i+1<<"的成績：";
      cin>>StuScore[i];  //輸入學生成績到陣列中
    }
    for(i=0;i<10;i++)
      total = total + StuScore[i];
    cout<<"平均成績為："<<(double)total/10<<endl;
    return 0;
}





