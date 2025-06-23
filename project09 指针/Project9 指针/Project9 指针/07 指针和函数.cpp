#include <iostream>
using namespace std;
void swap1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1 中 a = " << a << endl;
	cout << "swap1 中 b = " << b << endl;
}

void swap2(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7()
{
	//指针和函数
	//1、值传递
	int a = 10;
	int b = 20;

	cout << "swap1交换前：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap1(a, b);
	cout << "swap1交换后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2、地址传递
	cout << endl;
	cout << "swap1交换前：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap2(&a, &b);
	cout << "swap2交换后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}