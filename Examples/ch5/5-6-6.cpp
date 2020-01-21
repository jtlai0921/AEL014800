/*印出1~100之間之質數*/
//5-6-6.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i;
    for(i=2;i<101;i++) {
      int j,flag=1;
      for(j=2;j<i;j++) {
        if(!(i%j)) flag = 0;  
      }
      if(flag)
        cout<<i<<"是質數 ";
    }

    return 0;
}
