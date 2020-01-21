/* 五科成績算總分與平均分數程式 */
//3-9-3.cpp
#include <iostream>
using namespace std;
int main()
{
    int chinese,english,math,science,social;
    cout<<"請輸入五科成績：";
    cin>>chinese>>english>>math>>science>>social;      
    cout<<"總分為："<<chinese+english+math+science+social<<endl;
    cout<<"平均為："<<(float)(chinese+english+math+science+social)/5<<endl;
    return 0;
}

