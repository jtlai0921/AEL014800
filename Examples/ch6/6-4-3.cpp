#include <iostream>
using namespace std;
int f(void);               //�ŧi�ۭq�禡f
int main(void)
{
    int i;
    for(i=1;i<5;i++)
      cout<<"x="<<f( )<<endl;
}
int f(void)
{
    static int x=0;    //�[�Wstatic�׹��r
    return x++;
}
