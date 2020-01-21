/* ¦r¦ê¤ñ¸û½d¨Ò */
#include <iostream> 
#include <string>
using namespace std;
int main(void)
{
  string s1("String is fun!");
  string s2("String is fun!");
  string s3("String is not fun!");
  if(s1==s2) cout<<"String1 and string2 are the same."<<endl;
  else  cout<<"String1 and string2 are not the same."<<endl;
  if(s1==s3) cout<<"String1 and string3 are the same."<<endl;
  else  cout<<"String1 and string3 are not the same."<<endl;
  return 0;
}
