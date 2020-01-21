/* staticΘ*/
#include <iostream>
using namespace std;
class Cuboid {
    public:
        static int n;
        Cuboid(int,int,int );
        ~ Cuboid( );
    private:
        int x,y,z;
};

Cuboid:: Cuboid(int a, int b, int c){
    x = a;
    y = b;
    z = c;
    n++; 
}

Cuboid:: ~Cuboid(){
    n--;
}

int Cuboid::n=0;

int main(void)
{
    Cuboid C1(2,3,3), C2(5,5,5);
    cout<<"よ砰计: "<< C1.n<<endl;
    Cuboid *C3 = new Cuboid(1, 2, 3);
    cout<<"よ砰计: "<< C3->n<<endl;
    delete C3;
    cout<<"よ砰计: "<< Cuboid::n<<endl;
    cout<<"よ砰计: "<< C2.n<<endl;

    return 0;
}
