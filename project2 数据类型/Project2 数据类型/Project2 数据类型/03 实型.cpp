#include <iostream>
using namespace std;

int main3()
{
	//1 单精度 float
	//2 双精度 double
	// 默认输出6位有效数字
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;

	//统计float 和 double 占用内存空间
	cout << "float 占用内存空间为：" << sizeof(float) << endl;
	cout << "double 占用内存空间为：" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}