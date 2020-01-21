//6-2-4.cpp
#include <iostream>
using namespace std;
void sum(int,int);
int main ()
{
	int x,y,result;
    cout<<"請輸入兩個整數:"<<endl; 
   	cin>>x>>y;
   	if(x<y) sum(x,y);
   	else sum(y,x);
    
    return 0;
}

void sum(int a,int b){
    int s=0;
    for(int i=a;i<=b;i++){
        s+=i;
    }
    cout<<"由"<<a<<"加到"<<b<<"等於"<<s<<endl;
    return;
}
