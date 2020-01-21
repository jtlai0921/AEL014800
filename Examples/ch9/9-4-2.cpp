/* size( )¡Bempty( )½d¨Ò */
#include <iostream> 
#include <string>
using namespace std;
int main(void)
{
  string s1;
  string s2("String is fun!");
  if(s1.empty()){
      cout<<"String1 is empty!"<<endl;
  }
  cout<<"String2 is "<<s2.size()<<" characters long"<<endl;
  return 0;
}
