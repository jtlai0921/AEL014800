#include <iostream>
using namespace std;
int f(void);               //宣告自訂函式f
int main(void)
{
    int i;
    for(i=1;i<5;i++)
      cout<<"x="<<f( )<<endl;
}
int f(void)
{
    static int x=0;    //加上static修飾字
    return x++;
}
