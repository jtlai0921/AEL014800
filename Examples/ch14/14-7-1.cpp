/* friend函式*/
#include <iostream>
using namespace std;
class Cuboid {
    public:
        void set_values(int, int, int);
        int volume( ){ return x*y*z; }
        friend Cuboid copy(Cuboid);//將copy函式宣告為長方體的friend
    private:
        int x,y,z;
};

void Cuboid::set_values(int a, int b, int c){
    x=a;
    y=b;
    z=c; 
    return;
}

Cuboid copy (Cuboid cubIn)
{
  Cuboid cubOut;
  cubOut.x = cubIn.x;
  cubOut.y = cubIn.y;
cubOut.z = cubIn.z;
  return (cubOut);
}

int main(void)
{
    Cuboid C1, C2;
    C1.set_values(1,2,3);
    C2 = copy(C1);
    cout<<"C1體積: "<< C1. volume ( )<<endl;
    cout<<"C2體積: "<< C2. volume ( )<<endl;
    return 0;
}

