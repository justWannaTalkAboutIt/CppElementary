#include <iostream>
using namespace std;

//继承中的同名静态成员处理方式
class Base6 
{
public:
	static int m_A;
	static void func() 
	{
		cout << "Base6 - static void func() " << endl;
	}
	static void func(int a)
	{
		cout << "Base6 - static void func() " << endl;
	}
};

int Base6::m_A = 100;

class Son6 :public Base6 
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son6 - static void func() " << endl;
	}
};
int Son6::m_A = 200;

//同名静态成员属性
void test601() 
{
	//1、通过对象来访问静态变量
	Son6 s;
	//直接访问 访问的是子类的静态变量
	cout << "s.m_A = " << s.m_A << endl;
	//加作用域访问 访问的父类的静态变量
	cout << "s.Base6::m_A = " << s.Base6::m_A << endl;
	
	//2、直接通过类名来访问同名静态变量
	cout << Son6::m_A << endl;
	//通过类名方式访问父类作用域下的静态变量
	cout << Son6::Base6::m_A << endl;
}

void test602() 
{
	//1、通过对象访问
	Son6 s;
	s.func();
	s.Base6::func();
	//2、通过类名方式访问同名 静态成员函数
	Son6::func();
	Son6::Base6::func();
	Son6::Base6::func(10);
	//如果子类出现和父类同名的静态成员函数，也会隐藏父类中所有同名静态成员函数
	//如果想要访问父类中被隐藏的同名静态成员函数，需要加作用域
}
int main6() 
{
	//test601();
	test602();

	system("pause");
	return 0;
}