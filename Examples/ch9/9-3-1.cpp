#include <iostream> 
#include <fstream>  //�ϥ�gets�禡�����t�Afstream���Y��
#include <cstring>  //�ϥ�strncat�禡�����t�Acstring��string.h���Y��
using namespace std;
int main(void)
{
  char s1[] = "Hello ";
  char s2[10];
  cout<<"What's your name?";
  gets(s2);
  strncat(s1,s2,5);  //�Ns2�s����s1����A��s2����10�Ӧr��
  cout<<s1<<endl;
  return 0;
}

