/*累加程式*/
//5-2-2.cpp
#include <iostream>
using namespace std;
int main ()
{
    int i,num,ans;
    while(true){
        i=1;
        ans=0;
        cout<<"輸入一整數:";
        cin>>num;
        while(i<=num) {
            ans = ans + i;
            i++;
        }
        cout<<"1+2+3+…+"<<num<<" = "<<ans<<endl;
    }

    return 0;
}
