/* ���즨�Z���`���P�������Ƶ{�� */
//3-9-3.cpp
#include <iostream>
using namespace std;
int main()
{
    int chinese,english,math,science,social;
    cout<<"�п�J���즨�Z�G";
    cin>>chinese>>english>>math>>science>>social;      
    cout<<"�`�����G"<<chinese+english+math+science+social<<endl;
    cout<<"�������G"<<(float)(chinese+english+math+science+social)/5<<endl;
    return 0;
}

