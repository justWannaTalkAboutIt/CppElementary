#include <iostream>
using namespace std;

//静态成员函数
//所有对象共享同一函数
//静态成员函数 只能访问 静态成员变量

class Person 
{
public:
	//静态成员函数
	static void func() 
	{
		m_A = 100; // 静态成员函数 可以访问 静态成员变量
		cout << "static void func 调用" << endl;
		//m_B = 200; // 静态成员函数不可以访问 非静态成员变量，无法区分到底是哪个对象的m_B
	}

	static int m_A;
	int m_B;

	//静态成员函数是有访问权限的
private:
	static void func2() 
	{
		cout << "static void func2 的调用" << endl;
	}
};

int Person::m_A = 0;

void test901() 
{
	//1、通过对象进行访问
	Person p;
	p.func();

	//2、通过类名进行访问
	Person::func();

	//static函数 调用权限
	//Person::func2(); //函数 "Person::func2" (已声明 所在行数:24) 不可访问
	//类外访问不到私有函数
}

int main() 
{
	test901();

	system("pause");
	return 0;
}