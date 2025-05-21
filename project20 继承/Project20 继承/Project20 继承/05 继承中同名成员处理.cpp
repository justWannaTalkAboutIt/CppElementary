#include <iostream>
using namespace std;

//继承中同名函数的处理
class Base5 
{
public:
	Base5() 
	{
		m_A = 100;
	}
	void func() 
	{
		cout << "Base5 - func() 调用 " << endl;
	}
	void func(int a)
	{
		cout << "Base5 - func(int a) 调用 " << endl;
	}
	int m_A;
};
class Son5:public Base5 
{
public:
	Son5() 
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son5 - func() 调用 " << endl;
	}
	int m_A;
};
void test501() 
{
	Son5 s;
	//如果同名，直接访问 访问的是子类自身的同名变量
	cout << "s.m_A = " << s.m_A << endl;
	//如果想访问父类同名对象，需要加一个父类作用域
	cout << "s.Base5:m_A = " << s.Base5::m_A << endl;
}
void test502()
{
	Son5 s;
	//直接调用，调用的是子类中的同名函数
	s.func();
	//加作用域，调用父类中同名函数
	s.Base5::func();
	//当写了同名重载函数时，不能直接使用下列方式
	//s.func(10);//函数调用中的参数太多,无法自动转换到 父类 作用域
	//如果子类父类有重名函数，则子类的同名成员会隐藏掉父类所有同名成员函数
}

int main5() 
{
	test501();
	test502();

	system("pause");
	return 0;
}