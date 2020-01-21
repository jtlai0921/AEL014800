#include <iostream> 
#include <string.h>
using namespace std;
void exclude(char*,char*);
int main(void)
{
  char str1[] = "what a wonderful world!";
  char str2[] = "wonderful";  //要去除的文字
  exclude(str1,str2);
  cout<<str1<<endl;
  return 0;
}
void exclude(char *s1,char *s2)
{
  int i, s2_len = strlen(s2);
  for(i=0; i<(int)strlen(s1) - s2_len; i++){
    if(!strncmp(s1+i, s2, s2_len)){
      strcpy(s1+i, s1+i+s2_len);
      i--;                  
    }
  }
}
