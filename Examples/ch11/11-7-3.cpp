/* 時鐘程式 */
#include <iostream>
#include <time.h>
#include <stdlib.h>  //含括system函式 
using namespace std;
int main(void)
{
  time_t t;
  struct tm *TIME;
  while(1) {
    time(&t);
    TIME = localtime(&t);
    cout<<"現在時間: "<<TIME->tm_hour<<":"<<TIME->tm_min<<":"<<TIME->tm_sec<<endl;
    system("cls");
  } 
  return 0;
}
