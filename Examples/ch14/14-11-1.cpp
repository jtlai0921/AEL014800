/* 繼承建構子與解構子*/
#include <iostream>
using namespace std;
class Father{
    public:
        Father ( ){ cout<< "父建構子"<<endl;}
        Father ( int x) { cout<< "int父建構子"<<endl;}
};

class Child1: public Father {
    public:
        Child1 ( ) { cout<< "Child1建構子"<<endl;}
        Child1 (int x) { cout<< "int Child1建構子"<<endl;}
};

class Child2: public Father {
    public:
        Child2 (int x) : Father (x){ cout<< "int Child2建構子"<<endl;}
};

int main(void)
{
    Child1 C1_1;
    cout<<endl;
    Child1 C1_2(1);
    cout<<endl;
    Child2 C2(1);
    cout<<endl;
    return 0;
}
