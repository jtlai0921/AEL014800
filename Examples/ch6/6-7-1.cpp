#include <iostream>
using namespace std;
int SQRT(int);
int main(void)
{
  int n;
  cin>>n;
  cout<<SQRT(n);  //�I�sSQRT�禡
  return 0;
}	
int SQRT(int n)
{
  int i;
  if(n < 1) return -1;      /* error input */
  for(i=1;i<n;i++)
    if(i*i>n) break;        /* i �w�g�W�L n^1/2 */
  if( (i*i - n) < (n - (i-1)*(i-1)) )
      return i;
  else
      return i-1;     
}
