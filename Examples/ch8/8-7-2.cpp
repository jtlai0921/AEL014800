#include <iostream>
#include <fstream>  //�ϥ�puts�禡�����t�Afstream���Y��
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
    if(*s == a)              // �������N���r���F
      *s = b;               // ���ܦr��
    s++;
  }          
}
