#include <iostream>
using namespace std;
int factorial(int);               //�ŧi�ۭq�禡f
int main(void)
{
    int n;
    cout<<"Input n:";
    cin>>n;
    cout<<n<<"! = "<<factorial(n);
    return 0;     
}
int factorial(int n)
{
  int i,fac=1;
  for(i=1;i<=n;i++)
    fac = fac * i;      //�D���j�覡�Dn!�p��{��
  return fac;
}

