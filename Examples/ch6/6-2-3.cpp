/*加總函式*/
//6-2-3.cpp
#include <iostream>
using namespace std;
int s(int);
int main ()
{
	int i,j,k,num;
	while(true){
        cout<<"請輸入一整數:"; 
    	cin>>num;
        cout<<"1+2+3+...+"<<num<<"="<<s(num)<<endl;
    }   
    
    return 0;
}
int s(int n){
    int sum=0;
    for(int i=1;i<=n;i++)sum+=i;
    return sum;
}
