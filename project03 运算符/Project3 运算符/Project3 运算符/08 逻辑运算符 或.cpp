#include <iostream>
using namespace std;

int main8()
{
	//逻辑运算符 或||
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

	cout << "同假为假，其余为真" << endl;
	system("pause");
	return 0;
}