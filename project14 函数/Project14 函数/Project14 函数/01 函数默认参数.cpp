#include <iostream>
using namespace std;

//函数默认参数
int func(int a, int b=20, int c=30) 
{
	return a + b + c;
}

//int func2(int a = 10, int b, int c)
//{
//	return a + b + c;//“func2”: 缺少形参 2 的默认实参
//	cout << "如果某个位置有默认参数，那么从这个位置往后，从左到右都必须有默认值" << endl;
//}

//int func3(int a=10, int b=10); //“func3”: 重定义默认参数 : 参数 1
int func3(int a, int b);
int func3(int a=10, int b=10)
{
	return a + b;
	cout << "如果函数声明有默认参数，函数实现就不能有默认参数" << endl;
	cout << "声明和实现中，只能有一个有默认参数，避免二次定义产生的二义性" << endl;
}


int main1()
{
	cout << func(10,20,30) << endl;

	cout << func(10) << endl;

	cout << func3(10,10) << endl;

	system("pause");
	return 0;
}