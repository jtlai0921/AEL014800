/*�L�X���פT���{��*/
//5-6-2.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,j,k;
    for(i=1;i<6;i++) {
      for(j=5-i;j>0;j--) {
        cout<<" ";    //���L�X�C�@�C�������Ů�
      }
      for(k=0;k<i;k++) {
        cout<<"*";    //�L�X�P��
      }
      cout<<endl;    //���L�U�@�C
    }

    return 0;
}
