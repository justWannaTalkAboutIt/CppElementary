#include <iostream>
using namespace std;

int main5()
{
	//1、const修饰指针 常量指针 
	int a = 10;
	int b = 10;

	const int* p = &a;
	//指针指向的值不可以改，指针指向可以改
	p = &b;

	//2、const修饰常量 指针常量
	int* const p2 = &a;
	//指针不可以改，指针指向值可以改
	*p2 = 100;

	//3、const修饰指针和常量
	const int* const p3 = &a;

	system("pause");
	return 0;
}