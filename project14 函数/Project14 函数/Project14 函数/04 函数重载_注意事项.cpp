#include <iostream>
using namespace std;
//函数重载的注意事项
//1、引用作为重载的条件
void func(int &a) //int& a = 10;不合法
{
	cout << "func(int &a)调用" << endl;
}

void func(const int& a) //const int& a = 10; 合法
{
	cout << "func(const int& a)调用" << endl;
}

void func2(int a, int b = 10) 
{
	cout << "func2(int a )的调用" << endl;
}

void func2(const int a) 
{
	cout << "func2(int a )的调用" << endl;
}
//2、当函数重载碰到默认参数容易产生二义性
int main4()
{
	//调用 func(int& a)
	int a = 10;
	func(a);

	cout << endl;
	//调用 func(const int& a)
	func(10);

	//func2(10);//有多个 重载函数 "func2" 实例与参数列表匹配:

	system("pause");
	return 0;
}