#include <iostream> 
#include <fstream>
using namespace std;
char* encode(char*);
char* decode(char*);
int main(void)
{
  char ch,str[80];
  cout<<"請輸入字串:";
  gets(str);
  cout<<"您要 1)encode 2)decode :";
  cin>>ch;
  if(ch == '1') {
    cout<<"After encode : ";
    cout<<encode(str);
  } else if (ch == '2') {
    cout<<"After decode :";
    cout<<decode(str);
  } else
    cout<<"Unknown input";
  return 0;
}
char* encode(char *str)
{
      char *r=str;
      while(*str) {
        *str = *str + 13;
        str++;
      }    
      return r;  
}
char* decode(char *str)
{
      char *r=str;
      while(*str) {
        *str = *str - 13;
        str++;
      }  
      return r;  
}
