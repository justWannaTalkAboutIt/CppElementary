#include <iostream>
using namespace std;

//多继承语法
class Base71
{
public:
	Base71() 
	{
		m_A = 100;
	}
	int m_A;
};
class Base72 
{
public:
	Base72() 
	{
		m_A = 200;
		m_B = 200;
	}
	int m_A;
	int m_B;
};
//子类 需要继承Base1 和 Base2
//语法： class 子类：继承方式 父类1，继承方式 父类2 ，。。。
class Son7 : public Base71, public Base72 
{
public:
	int m_C = 300;
	int m_D = 400;
};
void test701() 
{
	Son7 s;
	cout << "size of Son7 s = " << sizeof(s) << endl;
	//当从两个不同父类中继承了两个同名变量时，简单使用会产生二义性
	//cout << "m_A = " << s.m_A << endl;//"Son7::m_A" 不明确
	// 需要加作用域才能使用
	cout << "Base71::m_A = " << s.Base71::m_A << endl;
	cout << "Base72::m_A = " << s.Base72::m_A << endl;
}
int main7() 
{
	test701();
	system("pause");
	return 0;
}