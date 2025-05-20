#include <iostream>
using namespace std;

//引用作函数返回值
//1、不要返回局部变量的引用
int& test01()
{
	int a = 10;
	return a;
}
//2、函数的调用可以作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，程序结束后释放
	return a;
}

int main4()
{
	int& ref = test01();
	cout << "ref = " << ref << endl; //乱码，因为内存已经释放
	cout << "ref = " << ref << endl;

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000; //函数调用作为左值，返回别名 ref2


	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	cout << "如果函数返回值是一个引用，函数调用可以作为左值存在" << endl;

	system("pause");
	return 0;
}