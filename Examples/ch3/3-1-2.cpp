//3-1-2.cpp
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
      
    x=1;                    //�N�ܼ�x���ȫ��w��1
    cout<<"x="<<x<<endl;    //x=1
    x=x+1;                  //�N�ܼ�x���ȫ��w��x����l��(1)�[1
    cout<<"x="<<x<<endl;    //x=2
    x=x+1;                  //�N�ܼ�x���ȫ��w��x����(2)�[1
    cout<<"x="<<x<<endl;    //x=3

    return 0;
}
