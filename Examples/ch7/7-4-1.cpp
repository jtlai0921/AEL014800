#include <iostream>
using namespace std;
void func(int [ ]);       //�ŧi�禡func���@�Ӥ޼ƬO�}�C
int main(void)
{
    int a[2]={3,6};
    cout<<"a[0]="<<a[0]<<" a[1]="<<a[1]<<endl;  //�L�X�}�C���e
    func(a);            //�ΰ}�Ca�I�s�禡func
    cout<<"a[0]="<<a[0]<<" a[1]="<<a[1]<<endl;
    return 0;
}
void func(int a[ ])         //�洫a[0]�Pa[1]����
{
   int temp;
   temp = a[0];
   a[0] = a[1];
   a[1] = temp;
}
