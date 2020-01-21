// 解一元二次方程式：ax^2 + bx + c  = 0 輸入a, b, c 求解x
//4-7-6.cpp
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a, b, c;
	cout << "ax^2 + bx + c  = 0\n請依序輸入a, b, c\n";
	cin >> a >> b >> c;
	cout << "答案是";
	if(pow(b, 2) - 4 * a * c > 0)
		cout << ((-1) * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 / a << " " << 
        (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 / a << endl;
	else if(pow(b, 2) - 4 * a * c == 0)
		cout << (-1) * b / 2 / a << endl;
	else
		cout << "無解\n";
	return 0;
}
