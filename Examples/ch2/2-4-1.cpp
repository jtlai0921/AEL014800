//2-4-1.cpp
#include <iostream>
#define rate 0.0168
using namespace std;

int main()
{
    //宣告整數myAccount1，並將其值設為1500
	int myAccount1=1500;     
	//宣告整數變數myAccount2，並將其初值設為25000
    int myAccount2=25000;     
	//印出利率計算的結果
    cout<<"戶頭一利息:"<< myAccount1 * rate <<endl;
	cout<<"戶頭二利息:"<< myAccount2 * rate <<endl;

    return 0;
}
