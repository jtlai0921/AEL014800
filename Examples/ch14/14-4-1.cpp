/* 建構子與解構子 */
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
    cout<<"Cuboid物件已建立\n";
    x = new int;
    y = new int;
    z = new int;
    *x = a;
    *y = b;
    *z = c; 
}

Cuboid:: ~Cuboid(){
    cout<<"Cuboid物件已回收\n";
    delete x;
    delete y;
    delete z;
}

int main(void)
{
    Cuboid C1(2,3,3), C2(5,5,5);
    
    cout<<"一號長方體的體積為: "<< C1.volume( )<<endl;
    cout<<"二號長方體的體積為: "<< C2.volume( )<<endl;
  
    return 0;
}
