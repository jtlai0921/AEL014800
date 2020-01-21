#include <iostream> 
#include <fstream>  //使用gets函式必須含括fstream標頭檔
#include <cstring>  //使用strncat函式必須含括cstring或string.h標頭檔
using namespace std;
int main(void)
{
  char s1[] = "Hello ";
  char s2[10];
  cout<<"What's your name?";
  gets(s2);
  strncat(s1,s2,5);  //將s2連接到s1之後，取s2中的10個字元
  cout<<s1<<endl;
  return 0;
}

