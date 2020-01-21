/* 字串結合程式*/
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
  int i=0,j=0;
  string s1,s2;
  char *p;
  cin>>s1>>s2;
  p=new char[s1.size()+s2.size()+1];
  while(i<s1.size()) {
      *(p+i)=s1[i];
      i++;
  }
  while(j<s2.size()) {
      *(p+i)=s2[j];
      i++;
      j++;
  }
  *(p+i) = '\0';
  cout<<p;
  delete [] p;    
  return 0;
}
