/*�֥[�{��*/
//5-2-2.cpp
#include <iostream>
using namespace std;
int main ()
{
    int i,num,ans;
    while(true){
        i=1;
        ans=0;
        cout<<"��J�@���:";
        cin>>num;
        while(i<=num) {
            ans = ans + i;
            i++;
        }
        cout<<"1+2+3+�K+"<<num<<" = "<<ans<<endl;
    }

    return 0;
}
