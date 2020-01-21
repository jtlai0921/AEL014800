/*印出左斜三角程式*/
//5-6-2.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,j,k;
    for(i=1;i<6;i++) {
      for(j=5-i;j>0;j--) {
        cout<<" ";    //先印出每一列必須的空格
      }
      for(k=0;k<i;k++) {
        cout<<"*";    //印出星號
      }
      cout<<endl;    //換印下一列
    }

    return 0;
}
