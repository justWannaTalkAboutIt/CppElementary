#include <iostream>
using namespace std;

//深拷贝与浅拷贝
class Person5
{
public:
	Person5() 
	{
		cout << "Person5的默认构造函数调用" << endl;
	}
	Person5(int age,int height) 
	{
		cout << "Person5 的有参构造函数调用" << endl;
		m_Age = age;
		m_height = new int(height);
	}
	//自己实现拷贝构造函数 解决浅拷贝导致的 指针重复释放问题
	Person5(const Person5& p)
	{
		cout << "Person5 拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_height = p.m_height //编译器默认的浅拷贝实现
		//DIY 深拷贝函数
		m_height = new int(*p.m_height);
	}
	~Person5() 
	{
		//析构代码， 将堆区开辟数据 作 释放操作
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "Person5 的析构函数调用" << endl;
	}
	int m_Age;
	int* m_height;
};

void test0001()
{
	Person5 p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_height << endl;
	Person5 p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << " 身高为：" << *p2.m_height << endl;

}

int main5() 
{
	test0001();

	system("pause");
	return 0;
}