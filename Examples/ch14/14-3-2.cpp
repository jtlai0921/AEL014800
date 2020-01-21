/* 長方體class基本範例二 */
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
    if(a<=0 || b<=0 || c<=0) cout<<"警告:長寬高應大於0!"<<endl;
    x=a;
    y=b;
    z=c; 
    return;
}

int main(void)
{
    Cuboid C1, C2;
    C1.set_values(2,3,3);  
    C2.set_values(5,5,5);

    cout<<"一號長方體的體積為: "<< C1.volume()<<endl;
    cout<<"二號長方體的體積為: "<< C2.volume()<<endl;
  
    return 0;
}
