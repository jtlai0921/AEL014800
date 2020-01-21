//6-3-2.cpp
#include <iostream>
using namespace std;
double volume(int);
double surface(int);
const double pi=3.14159;
int main ()
{
	int r;
    cout<<"請輸入球體半徑:"; 
   	cin>>r;
    cout<<"球體體積:"<<volume(r)<<endl<<"球體表面積:"<<surface(r)<<endl;
    
    return 0;
}

double volume(int r){
    return r*r*r*pi*4/3;
}

double surface(int r){
    return r*r*pi*4;
}
