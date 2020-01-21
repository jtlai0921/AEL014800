/*印出矩形對角線程式*/
//5-6-8.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,j,k,num;
	while(true){
        cout<<"請輸入一整數:"; 
    	cin>>num;
        for(i=0;i<num;i++) {
          for(j=0;j<i;j++) {
            cout<<"*";    //先印出每一列前面的星號 
          }
          cout<<"-";      //印出中間的減號 
          for(k=0;k<num-i-1;k++) {
            cout<<"*";    //印出剩下的星號
          }
          cout<<endl;    //換印下一列
        }
    }
    return 0;
}
