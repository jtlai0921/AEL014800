//7-1-3.cpp
#include <iostream>
using namespace std;
int main ()
{
	int array[8]={5,10,0,77,65,12,78,25};
	int max=array[0];
    cout<<"�}�C���e:";
    for(int i=0;i<8;i++){
        cout<<array[i]<<" ";
        if(array[i]>max)max=array[i]; 
    }
    cout<<endl<<"�̤j�Ȭ�:"<<max<<endl; 
    
    return 0;
}

