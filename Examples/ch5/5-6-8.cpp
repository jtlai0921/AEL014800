/*�L�X�x�ι﨤�u�{��*/
//5-6-8.cpp
#include <iostream>
using namespace std;
int main ()
{
	int i,j,k,num;
	while(true){
        cout<<"�п�J�@���:"; 
    	cin>>num;
        for(i=0;i<num;i++) {
          for(j=0;j<i;j++) {
            cout<<"*";    //���L�X�C�@�C�e�����P�� 
          }
          cout<<"-";      //�L�X������� 
          for(k=0;k<num-i-1;k++) {
            cout<<"*";    //�L�X�ѤU���P��
          }
          cout<<endl;    //���L�U�@�C
        }
    }
    return 0;
}
