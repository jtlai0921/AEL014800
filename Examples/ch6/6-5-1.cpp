#include <iostream>
using namespace std;
int factorial(int);         //�ŧi�ۭq�禡f
int main(void)
{
    int n;
    cout<<"Input n:";
    cin>>n;
    cout<<n<<"! = "<<factorial(n); 
}
int factorial(int n)
{
  if(n==1)
    return 1;
  return n*factorial(n-1);   //����ԭz�|�A�I�sfactorial�禡�@��
}
