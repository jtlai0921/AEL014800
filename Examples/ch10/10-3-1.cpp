/* 條件式編譯程式 */
#include <iostream>
#define RICE
#undef  NOODLE
using namespace std;
int main(void)
{
#ifdef RICE
  cout<<"I like rice the best!\n";
#endif
#ifdef NOODLE
  cout<<"I like noodle the best!\n";
#endif        
  return 0;
}
