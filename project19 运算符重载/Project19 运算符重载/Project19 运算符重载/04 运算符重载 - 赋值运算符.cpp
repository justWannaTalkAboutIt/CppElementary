#include <iostream>
using namespace std;

//赋值运算符重载
class Person4 
{
public:
	Person4(int age)
	{
		m_Age = new int(age);
	}
	~Person4() 
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载(若返回void，不支持链式赋值操作)
	//void operator=(Person4& p)
	//{
	//	//用深拷贝解决浅拷贝的问题
	//	//首先判断是否有属性在堆区，如果有先释放干净再深拷贝
	//	if (m_Age!=NULL)
	//	{
	//		delete m_Age;
	//		m_Age = NULL;
	//	}
	//	m_Age = new int(*p.m_Age);
	//}

	//重载
	Person4& operator=(Person4& p)
	{
		//用深拷贝解决浅拷贝的问题
		//首先判断是否有属性在堆区，如果有先释放干净再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);
		//返回自身
		return *this;
	}
	int* m_Age;
};

void test401() 
{
	Person4 p1(18);
	Person4 p2(20);
	Person4 p3(30);

	p2 = p1;
	p3 = p2 = p1;

	cout << "p1的年龄为：" << *p1.m_Age << endl;
	cout << "p2的年龄为：" << *p2.m_Age << endl;
	cout << "p3的年龄为：" << *p3.m_Age << endl;

}
int main4() 
{
	test401();

	int a = 10;
	int b = 20;
	int c = 30;

	c = b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;



	system("pause");
	return 0;
}