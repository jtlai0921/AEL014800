#include <iostream>
using namespace std;
int SQRT(int);
int main(void)
{
  int n;
  cin>>n;
  cout<<SQRT(n);  //呼叫SQRT函式
  return 0;
}	
int SQRT(int n)
{
  int i;
  if(n < 1) return -1;      /* error input */
  for(i=1;i<n;i++)
    if(i*i>n) break;        /* i 已經超過 n^1/2 */
  if( (i*i - n) < (n - (i-1)*(i-1)) )
      return i;
  else
      return i-1;     
}
