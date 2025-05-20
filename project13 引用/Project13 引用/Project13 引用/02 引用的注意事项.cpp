#include <iostream>
using namespace std;

int main2()
{
	int a = 10;
	//1、引用必须初始化
	//int& b;//引用 变量 "b" 需要初始值设定项
	int& b = a;
	//2、引用初始化后不可以改变
	int c = 20;
	b = c; //是赋值操作，而不是更改引用

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}