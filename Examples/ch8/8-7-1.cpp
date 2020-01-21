#include <iostream>
using namespace std;
void Mystrcpy(char *,char *);
int main(void)
{
  int result;
  char word1[ ] = "I like C";
  char word2[ ] = "This is fun";
  Mystrcpy(word1,word2);
  cout<<"word2 = "<<word2<<endl;
  return 0;
}
void Mystrcpy(char *str1,char *str2)
{
  int i;
  for(i=0;*(str1+i)!='\0';i++)
  *(str2+i) = *(str1+i);
  *(str2 + i) = '\0';
}
