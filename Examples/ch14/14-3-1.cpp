/* ������class�򥻽d�� */
#include <iostream>
using namespace std;
class Cuboid {
    public:
        void set_values (int,int,int);
  		int volume( ){ return x*y*z; }
	private:
        int x,y,z;
};

void Cuboid::set_values(int a, int b, int c){
    if(a<=0 || b<=0 || c<=0) cout<<"ĵ�i:���e�����j��0!"<<endl;
    x=a;
    y=b;
    z=c; 
    return;
}

int main(void)
{
    Cuboid C1;
    int x,y,z;
    cout<<"�п�J�����骺���e��:";
    cin>>x>>y>>z;
  
    C1.set_values(x,y,z);
    cout<<"�����骺��n��: "<< C1.volume()<<endl;
  
    return 0;
}
