//3-7-1.cpp
#include <iostream>
using namespace std;
int main()
{
    int chinese,english,math;
    float average;    //�ŧiaverage���B�I���ܼ�
    cout<<"�п�J���^��ƾǦ��Z�G";
    cin>>chinese>>english>>math;  //Ū�J�U�즨�Z
    average = (float)(chinese+english+math)/3;    //�N���ƥ[�`�ᰣ�H3
    cout<<"�������Ƭ��G "<<average<<endl;
    
    return 0;
}
