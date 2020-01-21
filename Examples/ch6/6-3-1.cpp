#include <iostream>
using namespace std;
int f(int);               //宣告自訂函式f
int z;                  //宣告全域整數變數z
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
