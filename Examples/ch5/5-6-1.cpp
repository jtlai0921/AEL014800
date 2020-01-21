/*印出右斜三角程式*/
//5-6-1.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,j;
    for(i=1;i<6;i++) {
      for(j=0;j<i;j++) {
        cout<<"*";    //印出星號
      }
      cout<<endl;    //換印下一列
    }

    return 0;
}
