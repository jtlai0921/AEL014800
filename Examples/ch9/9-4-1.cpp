/* «ü©w¦r¦ê¡B¦ê±µ¦r¦ê½d¨Ò */
#include <iostream> 
#include <string>
using namespace std;
int main(void)
{
  string s1;
  string s2("String is fun!");
  s1=s2;
  s2=s1+s2;
  cout<<"String1 is: "<<s1<<endl;
  cout<<"String2 is: "<<s2<<endl;
  return 0;
}
