#include <iostream> 
#include <string.h>
using namespace std;
int main(void)
{
  char s1[] = "string is fun!";
  char s2[] = "string is";
  if(!strcmp(s1,s2))
    cout<<"s1 and s2 are same(by strcmp)\n";
  if(!strncmp(s1,s2,5))
    cout<<"s1 and s2 are same(by strncmp)\n";
  return 0;
}
