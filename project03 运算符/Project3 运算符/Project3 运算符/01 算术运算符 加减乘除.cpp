#include <iostream>
using namespace std;
#include <string>

int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << "a1 + b1=" << a1 + b1 << endl;
	cout << "a1 - b1=" << a1 - b1 << endl;
	cout << "a1 * b1=" << a1 * b1 << endl;
	cout << "a1 / b1=" << a1 / b1 << endl;
	//两个整数相除，结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;
	cout << "a2 / b2 =" << a2 / b2 << endl;

	//两个数相除，除数不能为零

	//两个小数相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << "d1 / d2=" << d1 / d2 << endl;
	double d3 = 0.22;
	cout << "d1 / d3=" << d1 / d3 << endl;
	// 小数除以小数结果在类型上是小数
	system("pause");
	return 0;
}