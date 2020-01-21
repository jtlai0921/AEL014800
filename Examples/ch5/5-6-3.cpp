/*印出雙斜三角程式*/
//5-6-3.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i;
    for(i=0;i<5;i++) {
      int j,k,m;
      for(j=4-i;j>0;j--)
        cout<<" ";
      for(k=0;k<2*i+1;k++)
        cout<<"*";
      cout<<endl;
    }

    return 0;
}
