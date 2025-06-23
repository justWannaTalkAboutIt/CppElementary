#include <iostream>
using namespace std;

//普通函数与函数模板区别
//1 普通函数在调用时可以发生隐式类型转换
//2 函数模板 自动类型推导 不可以发生隐式类型转换
//3 函数模板 显式指定类型 可以发生隐式类型转换

int myAdd(int a,int b)
{
	return a + b;
} 
template <class T>
T myAdd402(T a, T b)
{
	return a + b;
}

void test401() 
{
	int a = 10;
	int b = 20;

	cout << "a+b = " << myAdd(a, b) << endl;
	
	char c = 'c';
	cout << "a+c = " << myAdd(a, c) << endl; //此处发生了隐式类型转换
	//将char转换成对应的ASCII码整型，c-->99
	//在运算中隐式的将c转换成99再与a=10进行计算，得到109

	//自动类型推导
	cout << myAdd402(a, b) << endl;
	//cout << myAdd402(a, c) << endl;//没有与参数列表匹配的 函数模板 "myAdd402" 实例
	//函数模板 自动类型推导时 不会发生隐式类型转换

	//显示指定类型
	cout << myAdd402<int>(a,c) << endl;
	//显示指定类型时可以发生隐式类型转换
	
}


int main4() 
{
	test401();
	system("pause");
	return 0;
}