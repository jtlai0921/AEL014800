/*璸衡ㄢ计程そ计の程そ计*/
//5-6-5.cpp
#include <iostream>
using namespace std;
int main ()
{
	int a,b,i,M=0,m=0;
    cout<<"叫块ㄢタ俱计";
    cin>>a>>b;     /*块ㄢ俱计*/
    for(i=1;i<a && i<b;i++) {         
      if(!(a%i) && !(b%i)) /*璝a,b砆i俱埃ia,bぇそ计*/
        M = i;
    }
    cout<<a<<" ㎝ "<<b<<" ぇ程そ计 "<<M<<endl;
    if(a<b) i=a;
    else i=b;
    while(1) { 
      if(!(i%a) && !(i%b)) {   /*璝i俱埃a,bia,bぇ计*/
        m = i;
        break;            /*材瞷碞琌程そ计*/
      }
      i++;
    }
    cout<<a<<" ㎝ "<<b<<" ぇ程そ计 "<<m<<endl;
	return 0;
}
