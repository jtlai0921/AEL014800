/* �����{�� */
#include <iostream>
#include <time.h>
#include <stdlib.h>  //�t�Asystem�禡 
using namespace std;
int main(void)
{
  time_t t;
  struct tm *TIME;
  while(1) {
    time(&t);
    TIME = localtime(&t);
    cout<<"�{�b�ɶ�: "<<TIME->tm_hour<<":"<<TIME->tm_min<<":"<<TIME->tm_sec<<endl;
    system("cls");
  } 
  return 0;
}
