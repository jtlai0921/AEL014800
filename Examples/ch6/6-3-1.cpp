#include <iostream>
using namespace std;
int f(int);               //�ŧi�ۭq�禡f
int z;                  //�ŧi�������ܼ�z
int main(void)
{
    int x = 10,y;
    y = f(x);
    z = f(y);
    cout<<"x = "<<x<<", y = "<<y<<", z="<<z<<endl;
    
    return 0;
}
int f(int x)
{
    return x*x;
}
