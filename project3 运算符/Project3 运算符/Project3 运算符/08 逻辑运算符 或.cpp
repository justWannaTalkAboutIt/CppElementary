#include <iostream>
using namespace std;

int main8()
{
	//�߼������ ��||
	int a = 10;
	int b = 10;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a||b= " << (a || b) << endl;

	a = 0;
	b = 10;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a||b= " << (a || b) << endl;

	a = 10;
	b = 0;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a||b= " << (a || b) << endl;

	a = 0;
	b = 0;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a||b= " << (a || b) << endl;

	cout << "ͬ��Ϊ�٣�����Ϊ��" << endl;
	system("pause");
	return 0;
}