//3-1-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    
    x=1;              //�N�ܼ�x���ȫ��w��1
    y=x+1;            //�N�ܼ�y���ȫ��w��x����(1)�[1
    z=x+y;            //�N�ܼ�z���ȳ]��x����(1)�[y����(2)

    cout<<"x="<<x<<endl;   //x=1
    cout<<"y="<<y<<endl;   //y=2
    cout<<"z="<<z<<endl;   //z=3
      
    return 0;
}
