/*1+2+4+7+11+¡K+106²Ö¥[µ{¦¡*/
//5-6-7.cpp
#include <iostream>
using namespace std;
int main ()
{
   int Sum = 0,i = 1,j = 1;
   while (i <= 106){
     Sum = Sum + i;
     cout<<"i="<<i<<" Sum= "<<Sum<<endl;
     i = i + j;
     j = j + 1;
   }
  cout<<"Sum= "<<Sum<<endl;

  return 0;
}
