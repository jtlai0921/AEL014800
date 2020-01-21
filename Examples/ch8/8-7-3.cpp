#include <iostream>
using namespace std;
void swap(void*,void*,int);
int main(void)
{
  int a=5,b=3;      //整數型態變數的初值設定
  double c=6.6,d=2.2;   //浮點數型態變數的初值設定
  swap(&a,&b,sizeof(int));
  swap(&c,&d,sizeof(double));
  cout<<"a = "<<a<<" b = "<<b<<endl;
  cout<<"c = "<<c<<" d = "<<d<<endl;  
  return 0;
}
void swap(void* a,void* b,int size)
{
     int i;
     char *p=(char *)a;   //將void指標型態轉換為char指標型態
     char *q=(char *)b;
     char tmp;
     for(i=0;i<size;i++,p++,q++) {
       tmp = *p;
       *p = *q;
       *q = tmp; 
     }  
}

