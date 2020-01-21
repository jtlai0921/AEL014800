/*累加程式*/
//5-1-2.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,total=0;    //宣告整數變數，並將整數變數total的初值設為0
    for(i=1;i<11;i++)
      total = total + i;     //將total的值再加上i的值
    cout<<"1+2+…+10 = "<<total<<endl;  //印出total的值

    return 0;
}
