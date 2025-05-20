#include <iostream>
using namespace std;

//构造函数调用原则
//1、创建一个类，C++编译器会默认给每个类都添加至少3个函数
//	默认构造（空实现）
//	析构函数（空实现）
//	拷贝构造（值拷贝）

//2、如果写了有参构造，编译器不再提供默认构造，但会提供拷贝构造
class Person4
{
public:
	Person4()
	{
		cout << "Person4 的默认构造函数调用" << endl;
	}
	Person4(int age)
	{
		cout << "Person4 的有参构造函数调用" << endl;
		m_Age = age;
	}

	Person4(const Person4& p)
	{
		cout << "Person4 的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	~Person4() 
	{
		cout << "Person4 的析构函数调用" << endl;
	}

	int m_Age;
};
//void test001() 
//{
//	Person4 p;
//	p.m_Age = 18;
//	
//	Person4 p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}

void test002()
{
	Person4 p(28);
	Person4 p2(p);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}

int main4() 
{
	//test001();
	test002();

	system("pause");
	return 0;
}