#include <iostream>
using namespace std;

int main7()
{
	//逻辑运算符 与 &&
	int a = 10;
	int b = 10;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a&&b= "<<(a && b) << endl;
	
	a = 0;
	b = 10;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a&&b= " << (a && b) << endl;
	
	a = 10;
	b = 0;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a&&b= " << (a && b) << endl;

	a = 10;
	b = 0;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a&&b= " << (a && b) << endl;

	a = 0;
	b = 0;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a&&b= " << (a && b) << endl;
	
	cout << "同真为真，其余为假" << endl;
	system("pause");
	return 0;
}