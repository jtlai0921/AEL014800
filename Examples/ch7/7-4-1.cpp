#include <iostream>
using namespace std;
void func(int [ ]);       //宣告函式func有一個引數是陣列
int main(void)
{
    int a[2]={3,6};
    cout<<"a[0]="<<a[0]<<" a[1]="<<a[1]<<endl;  //印出陣列內容
    func(a);            //用陣列a呼叫函式func
    cout<<"a[0]="<<a[0]<<" a[1]="<<a[1]<<endl;
    return 0;
}
void func(int a[ ])         //交換a[0]與a[1]的值
{
   int temp;
   temp = a[0];
   a[0] = a[1];
   a[1] = temp;
}
