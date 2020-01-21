/*印出區間內所有3的倍數*/
//5-4-1.cpp
#include <iostream>
using namespace std;
int main ()
{
	int a,b,i;
    cin>>a>>b; //輸入起始值與終止值
    for(i=a;i<=b;i++)
    {
      if (i%3!=0)  //當i值不為3的倍數
        continue;
      cout<<i<<" ";   //印出為3的倍數之i值
    }
 
    return 0;
}
