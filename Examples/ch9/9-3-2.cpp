#include <iostream> 
#include <string.h>
using namespace std;
int main(void)
{
  char s [ ] = "string is fun!";
  char key;
  cout<<"The string is ¡ystring is fun!¡z. Which Character?";
  cin>>key;
  if(strchr(s,key))
    cout<<"Found "<<key<<" in string! The character is here ->"<<strchr(s,key)<<"\n";
  else
    cout<<"Can't find "<<key<<" in string!\n";
  return 0;
}
