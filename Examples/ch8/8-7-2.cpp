#include <iostream>
#include <fstream>  //使用puts函式必須含括fstream標頭檔
using namespace std;
void sub(char*,char,char);
int main(void)
{
  char a,b,s[ ] = "This is fun!";
  puts(s);
  cin>>a>>b;
  sub(s,a,b);
  puts(s); 
  return 0;
}
void sub(char *s,char a,char b)
{
  while(*s != '\0') {
    if(*s == a)              // 找到欲取代的字元了
      *s = b;               // 改變字元
    s++;
  }          
}
