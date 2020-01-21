/* 長方體class基本範例 */
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
    Cuboid C1;
    int x,y,z;
    cout<<"請輸入長方體的長寬高:";
    cin>>x>>y>>z;
  
    C1.set_values(x,y,z);
    cout<<"長方體的體積為: "<< C1.volume()<<endl;
  
    return 0;
}
