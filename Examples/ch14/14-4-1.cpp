/* �غc�l�P�Ѻc�l */
#include <iostream>
using namespace std;
class Cuboid {
    public:
        Cuboid(int,int,int );
        ~ Cuboid( );
  		int volume( ){ return (*x) * (*y) * (*z); }
	private:
        int *x, *y, *z; 
};

Cuboid:: Cuboid(int a, int b, int c){
    cout<<"Cuboid����w�إ�\n";
    x = new int;
    y = new int;
    z = new int;
    *x = a;
    *y = b;
    *z = c; 
}

Cuboid:: ~Cuboid(){
    cout<<"Cuboid����w�^��\n";
    delete x;
    delete y;
    delete z;
}

int main(void)
{
    Cuboid C1(2,3,3), C2(5,5,5);
    
    cout<<"�@�������骺��n��: "<< C1.volume( )<<endl;
    cout<<"�G�������骺��n��: "<< C2.volume( )<<endl;
  
    return 0;
}
