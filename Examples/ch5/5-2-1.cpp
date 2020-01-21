/*1+3+5+...+99²Ö¥[µ{¦¡*/
//5-2-1.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i=1,ans=0;
    while(i<=99) {
      ans = ans + i;
      i= i+2;
    }
    cout<<"1+3+5+¡K+99 = "<<ans<<endl;

    return 0;
}

