#include <iostream>
using namespace std;

int main1()
{
	//1、定义一个指针
	int a = 10;
	// 指针定义的语法：数据类型 * 指针变量名；
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	cout << endl;

	//2、使用一个指针
	cout << "指针前加*代表解引用，找到指针指向的内存中的数据" << endl;
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}