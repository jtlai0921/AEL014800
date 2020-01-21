// 輸入半徑長，求圓面積與周長
//3-9-5.cpp
#include <iostream>
using namespace std;
int main()
{
    double r;
	cout << "請輸入半徑\n";
	cin >> r;
	cout << "面積是" << 3.14 * r * r << endl << "周長是" << 2 * 3.14 * r << endl;
	return 0;
}

