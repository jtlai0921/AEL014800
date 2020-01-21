#include <iostream> 
#include <string.h>
using namespace std;
int main(void)
{
  char s1[] = "string is fun!";
  char s2[] = "string";
  strcpy(s1,s2);
  cout<<s1<<endl;
  return 0;
}
