/* Bubble sortµ{¦¡ */
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define SIZE 20
int main(void)
{
    int a[SIZE];
    int i,j,num,temp;
    srand(time(NULL));
    cout<<"How many number do you want?(less than "<<SIZE<<")";
    cin>>num;
    for(i=0;i<num;i++)
      a[i] = rand( ) %100;
    for(i=0;i<num-1;i++) {
      for(j = 1;j<num-i;j++) {
        if(a[j-1]>a[j]) {
          temp = a[j-1];
          a[j-1] = a[j];
          a[j] = temp;
        }
      }
    }
    for(i=0;i<num;i++) cout<<a[i]<<" ";
    return 0;
}
