// ��J��Ϊ��W���B�U���ΰ��A�p��X��Ϊ����n
//3-9-6.cpp
#include <iostream>
using namespace std;
int main()
{
    double top, bottom, height;
	cout << "�п�J�W������\n";
	cin >> top;
    cout << "�п�J�U������\n";
	cin >> bottom;
    cout << "�п�J����\n";
	cin >> height;
	cout << "���n�O" << (top+bottom)*height/2 << endl;
	return 0;
}

