//3-1-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    
    x=1;              //將變數x的值指定為1
    y=x+1;            //將變數y的值指定為x的值(1)加1
    z=x+y;            //將變數z的值設為x的值(1)加y的值(2)

    cout<<"x="<<x<<endl;   //x=1
    cout<<"y="<<y<<endl;   //y=2
    cout<<"z="<<z<<endl;   //z=3
      
    return 0;
}
