// 輸入梯形的上底、下底及高，計算出梯形的面積
//3-9-6.cpp
#include <iostream>
using namespace std;
int main()
{
    double top, bottom, height;
	cout << "請輸入上底長度\n";
	cin >> top;
    cout << "請輸入下底長度\n";
	cin >> bottom;
    cout << "請輸入高度\n";
	cin >> height;
	cout << "面積是" << (top+bottom)*height/2 << endl;
	return 0;
}

