#include <iostream>
using namespace std;
int main(void)
{
    int i,StuScore[10],total=0;             /* �ŧi��ư}�C StuScore */
    for(i=0;i<10;i++) {
      cout<<"�п�J�ǥ�"<<i+1<<"�����Z�G";
      cin>>StuScore[i];  //��J�ǥͦ��Z��}�C��
    }
    for(i=0;i<10;i++)
      total = total + StuScore[i];
    cout<<"�������Z���G"<<(double)total/10<<endl;
    return 0;
}





