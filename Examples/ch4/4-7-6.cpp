// �Ѥ@���G����{���Gax^2 + bx + c  = 0 ��Ja, b, c �D��x
//4-7-6.cpp
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a, b, c;
	cout << "ax^2 + bx + c  = 0\n�Ш̧ǿ�Ja, b, c\n";
	cin >> a >> b >> c;
	cout << "���׬O";
	if(pow(b, 2) - 4 * a * c > 0)
		cout << ((-1) * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 / a << " " << 
        (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 / a << endl;
	else if(pow(b, 2) - 4 * a * c == 0)
		cout << (-1) * b / 2 / a << endl;
	else
		cout << "�L��\n";
	return 0;
}
