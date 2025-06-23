#include <iostream>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换函数
void swap3(int num1,int num2) 
{
	//打印
	cout << "(形参)交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << endl;

	//交换
	int temp = num1;
	num1 = num2;
	num2 = temp;

	//打印
	cout << "(形参)交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << endl;

	return;
}

int main3()
{
	cout << "值传递 指的是 形参 和 实参 之间的值传递" << endl;
	cout << "实参 在进入函数时将值传递给 形参" << endl;
	cout << "但在函数内对 形参 所作的任何变换不会影响到 实参" << endl;
	cout << endl;
	int a = 10;
	int b = 20;
	swap(a, b);

	//打印
	cout << "(实参)交换后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}